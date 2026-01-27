#!/bin/bash
# allow docker to access current directory
chmod 777 .
run_in_docker="docker exec -w /host$(realpath .) perses"
TIMEOUTCC=10
TIMEOUTEXE=2
TIMEOUTCCOMP=10
clang_3_6_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-3.6.0 -w -c"
clang_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-7.1.0 -w -c"
gcc_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-7.1.0 -c"

BADCC1=("$clang_3_6_0 -O3")
BADCC2=()
BADCC3=()
MODE=-m64

# need to configure this part
#BADCC1=("clang-7.1.0 -O3")  # compilation failures
#BADCC2=() # exec failures
#BADCC3=() # wrong results
#MODE=-m64

GOODCC=("$clang_7_1_0 -O0")
CFILE=small.c
CFLAG="-o t"
CLANGFC="$clang_7_1_0 $MODE -O0 -Wall -fwrapv -ftrapv -fsanitize=undefined"

rm -f out*.txt

###################################################
# @ clangtkfc @ -O0 to check for undefined behavior
###################################################

rm -f ./t ./out*.txt
timeout -s 9 $TIMEOUTCC $CLANGFC $CFLAG $MODE $CFILE >&/dev/null
ret=$?

if [ $ret != 0 ]; then
  # interesting, save a copy
  #    cp $CFILE $DIR/`date +%j:%T`-compile-$CFILE
  exit 1
fi

#############################
# iterate over the good ones
#############################

for cc in "${GOODCC[@]}"; do
  rm -f ./t ./out1.txt

  timeout -s 9 $TIMEOUTCC $cc $CFLAG $MODE $CFILE # >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi

done

#############################
# iterate over the bad ones
#############################

for cc in "${BADCC1[@]}"; do
  rm -f ./t ./out2.txt

  # compile
  (timeout -s 9 $TIMEOUTCC $cc $CFLAG $MODE $CFILE > out2.txt 2>&1) >&/dev/null
  cat out2.txt
  if ! grep 'internal compiler error' out2.txt \
    && ! grep 'PLEASE ATTACH THE FOLLOWING FILES TO THE BUG REPORT' out2.txt; then
    exit 2
  fi
done

# now we have passed everything, return 0
exit 0