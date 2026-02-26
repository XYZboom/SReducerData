#!/bin/bash
# allow docker to access current directory
chmod 777 .
run_in_docker="docker exec -w /host$(realpath .) perses"
TIMEOUTCC=10
TIMEOUTEXE=2
TIMEOUTCCOMP=10
clang_3_8_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-3.8.0 -w"
clang_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-7.1.0 -w"
gcc_4_9_2="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-4.9.0 -w"
gcc_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-7.1.0 -w"
ccomp="$run_in_docker timeout -s 9 $TIMEOUTCCOMP /home/coq/.opam/4.05.0/bin/ccomp"

# need to configure this part
BADCC1=() # compilation failures
BADCC2=("$gcc_4_9_2 -m32 -O2" "$gcc_4_9_2 -m64 -O2")
BADCC3=() # wrong results
GOODCC=("$gcc_4_9_2 -m32 -O3" "$gcc_4_9_2 -m32 -O0")
CFILE=small.c
CFLAG="-o t"
CLANGFC="$clang_7_1_0 -m32 -O0 -Wall -fwrapv -ftrapv -fsanitize=undefined"

#################################################################################

### check for undefined behaviors first (from creduce scripts)

rm -f out*.txt

#
# compcert first
#

timeout -s 9 $TIMEOUTCCOMP $ccomp -interp -fall $CFILE >&/dev/null
ret=$?
if [ $ret != 0 ]; then
  exit 1
fi

###################################################
# @ clangtkfc @ -O0 to check for undefined behavior
###################################################

EXEC_T="$run_in_docker timeout -s 9 $TIMEOUTEXE ./t"

rm -f ./t ./out*.txt
timeout -s 9 $TIMEOUTCC $CLANGFC $CFLAG $CFILE >&/dev/null
ret=$?

if [ $ret != 0 ]; then
  # interesting, save a copy
  exit 1
fi

(timeout -s 9 $TIMEOUTEXE $EXEC_T > out0.txt 2>&1) >&/dev/null
ret=$?

if [ $ret != 0 ]; then
  exit 1
fi

if grep -q "runtime error" out0.txt; then
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
  if [ $ret != 0 ]; then
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

for cc in "${BADCC2[@]}"; do
  rm -f ./t ./out2.txt

  # compile
  timeout -s 9 $TIMEOUTCC $cc $CFLAG $CFILE >&/dev/null
  ret=$?
  if [ $ret -ne 0 ]; then
    exit 1
  fi

  # execute
  (timeout -s 9 $TIMEOUTEXE $EXEC_T) >&/dev/null
  ret=$?
  if [ $ret -ne 136 ]; then
    exit 1
  fi

  # grep error message
  (sh -c ./t) > out2.txt 2>&1
  if ! grep "Floating point exception" out2.txt; then
    exit 1
  fi
done
