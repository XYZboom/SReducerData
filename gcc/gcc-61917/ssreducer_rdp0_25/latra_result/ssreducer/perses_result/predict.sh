#!/bin/bash
# allow docker to access current directory
chmod 777 .
run_in_docker="docker exec -w /host$(realpath .) perses"
TIMEOUTCC=20
TIMEOUTEXE=2
TIMEOUTCCOMP=20
clang_3_8_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-3.8.0 -w"
clang_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-7.1.0 -w"
gcc_4_9_0="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-4.9.0 -w"
gcc_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-7.1.0 -w"
ccomp="$run_in_docker timeout -s 9 $TIMEOUTCCOMP /home/coq/.opam/4.05.0/bin/ccomp"

# need to configure this part
BADCC1=("$gcc_4_9_0 -m32 -O3" "$gcc_4_9_0 -m64 -O3") # compilation failures
BADCC2=()                                          # exec failures
BADCC3=()                                          # wrong results
GOODCC=()

CFILE=small.c
CFLAG="-o t"
CLANGFC="$clang_7_1_0 -m32 -O0 -Wall -fwrapv -ftrapv -fsanitize=undefined"
CHECKCCOMP=1

#################################################################################

### check for undefined behaviors first (from creduce scripts)

rm -f out*.txt

#
# compcert first
#

if [ $CHECKCCOMP -eq 1 ]; then
  timeout -s 9 $TIMEOUTCCOMP $ccomp -interp -fall $CFILE >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi
fi

###################################################
# @ clangtkfc @ -O0 to check for undefined behavior
###################################################

rm -f ./t ./out*.txt
timeout -s 9 $TIMEOUTCC $CLANGFC $CFLAG $CFILE >&/dev/null
ret=$?

if [ $ret != 0 ]; then
  # interesting, save a copy
  #    cp $CFILE $DIR/`date +%j:%T`-compile-$CFILE
  exit 1
fi

(timeout -s 9 $TIMEOUTEXE ./t > out0.txt 2>&1) >&/dev/null
ret=$?

if [ $ret != 0 ]; then
  #    cp $CFILE $DIR/`date +%j:%T`-exe-$CFILE
  exit 1
fi

if grep -q "runtime error" out0.txt; then
  #    cp $CFILE $DIR/`date +%j:%T`-result-$CFILE
  exit 1
fi

#############################
# iterate over the bad ones
#############################

for cc in "${BADCC1[@]}"; do
  rm -f ./t ./out2.txt

  # compile
  (timeout -s 9 $TIMEOUTCC $cc $CFLAG $CFILE > out2.txt 2>&1) >&/dev/null

  if ! grep 'internal compiler error' out2.txt; then
    exit 1
  fi
done