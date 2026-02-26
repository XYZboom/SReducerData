#!/bin/bash
# allow docker to access current directory
chmod 777 .
run_in_docker="docker exec -w /host$(realpath .) perses"
TIMEOUTCC=10
TIMEOUTEXE=2
TIMEOUTCCOMP=10
clang_3_8_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-3.8.0 -w"
clang_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-7.1.0 -w"
gcc_4_9_0="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-4.9.0 -w"
gcc_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-7.1.0 -w"
gcc="$run_in_docker timeout -s 9 $TIMEOUTCC gcc -w"
ccomp="$run_in_docker timeout -s 9 $TIMEOUTCCOMP /home/coq/.opam/4.05.0/bin/ccomp"

BADCC1=()
BADCC2=()
BADCC3=("$gcc_4_9_0 -O3")
MODE=("-m64")

# need to configure this part
#BADCC1=("clang-7.1.0 -O3")  # compilation failures
#BADCC2=() # exec failures
#BADCC3=() # wrong results
#MODE=-m64

GOODCC=("$gcc")
TIMEOUTCC=10
TIMEOUTEXE=2
TIMEOUTCCOMP=30
CFILE=small.c
CFLAG="-o t"
CLANGFC="$clang_7_1_0 -m64 -O0 -Wall -fwrapv -ftrapv -fsanitize=undefined"

#################################################################################

#
# compcert first
#

timeout -s 9 $TIMEOUTCCOMP $ccomp -interp -fall $CFILE >&/dev/null
ret=$?
if [ "$ret" != 0 ]; then
  exit 1
fi

###################################################
# @ clangtkfc @ -O0 to check for undefined behavior
###################################################

EXEC_T="$run_in_docker timeout -s 9 $TIMEOUTEXE ./t"

rm -f ./t ./out*.txt
timeout -s 9 $TIMEOUTCC $CLANGFC $CFLAG -m64 $CFILE >&/dev/null
ret=$?

if [ "$ret" != 0 ]; then
  # interesting, save a copy
  #    cp $CFILE $DIR/`date +%j:%T`-compile-$CFILE
  exit 1
fi

($EXEC_T > out0.txt 2>&1) >&/dev/null
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
# iterate over the good ones
#############################

for cc in "${GOODCC[@]}"; do
  rm -f ./t ./out1.txt

  timeout -s 9 $TIMEOUTCC $cc $CFLAG $CFILE >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi

  # execute
  (timeout -s 9 $TIMEOUTEXE $EXEC_T > out1.txt 2>&1) >&/dev/null
  ret=$?
  if [ "$ret" != 0 ]; then
    exit 1
  fi

  # compare with reference: out0.txt
  if ! diff -q out0.txt out1.txt > /dev/null; then
    exit 1
  fi
done

#############################
# iterate over the bad ones
#############################

for cc in "${BADCC3[@]}"; do
  for mode in "${MODE[@]}"; do
    rm -f ./t ./out2.txt

    # compile
    timeout -s 9 $TIMEOUTCC $cc $CFLAG $mode $CFILE >&/dev/null
    ret=$?
    if [ "$ret" != 0 ]; then
      exit 1
    fi

    # this execution is flaky, need to execute multiple times to minimize
    # the possibility of producing uncertain result
    segfault_happens=false
    for _ in {1..6}; do
      ($EXEC_T) >&/dev/null
      ret=$?
      if [ "$ret" == 139 ]; then
        # grep error message
        (sh -c ./t) > out2.txt 2>&1
        if grep "Segmentation fault" out2.txt; then
          segfault_happens=true
          break
        fi
        # "break" is not used here for stable execution time
      fi
    done
    if [ "$segfault_happens" = false ]; then
      exit 1
    fi
  done
done

# now we have passed everything, return 0
exit 0
