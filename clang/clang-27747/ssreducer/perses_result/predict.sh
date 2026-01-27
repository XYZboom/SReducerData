#!/bin/bash
# allow docker to access current directory
chmod 777 .
run_in_docker="docker exec -w /host$(realpath .) perses"
readonly TIMEOUTCC=20
readonly TIMEOUTEXE=5
readonly TIMEOUTCCOMP=20
clang_3_5_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-3.5.0"
clang_3_6_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-3.6.0"
clang_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC clang-7.1.0"
gcc_4_8_0="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-4.8.0"
gcc_7_1_0="$run_in_docker timeout -s 9 $TIMEOUTCC gcc-7.1.0"
gcc="$run_in_docker timeout -s 9 $TIMEOUTCC gcc"
ccomp="$run_in_docker timeout -s 9 $TIMEOUTCCOMP /home/coq/.opam/4.05.0/bin/ccomp"

BADCC1=("$clang_3_6_0 -O1")
BADCC2=()
BADCC3=()
MODE=("-m32" "-m64")

# need to configure this part
#BADCC1=("clang-7.1.0 -O3")  # compilation failures
#BADCC2=() # exec failures
#BADCC3=() # wrong results
#MODE=-m64

readonly GOODCC=("$clang_3_5_0 -m32 -O1")
# flag to control whether to use CompCert to validate the test program.
readonly USE_COMPCERT=false
readonly CFILE=small.c
readonly CFLAG="-o t"
readonly CLANGFC="$clang_7_1_0 -w -m64 -O0 -Wall -fwrapv -ftrapv -fsanitize=undefined,address"
readonly CLANG_MEM_SANITIZER="$clang_7_1_0 -w -O0 -m64 -fsanitize=memory"

#################################################################################

### check for undefined behaviors first (from creduce scripts)

rm -f out*.txt

#############################
# iterate over the good ones
#############################

#for cc in "${GOODCC[@]}" ; do
for ((i = 0; i < ${#GOODCC[@]}; ++i)); do
  cc=${GOODCC[$i]}
  rm -f ./t ./out1.txt

  timeout -s 9 $TIMEOUTCC $cc $CFLAG $CFILE >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi

  # execute
#  ($run_in_docker timeout -s 9 $TIMEOUTEXE ./t > out1.txt 2>&1) >&/dev/null
#  ret=$?
#  if [ $ret != 0 ]; then
#    exit 1
#  fi
done

#############################
# iterate over the bad ones
#############################

for cc in "${BADCC1[@]}"; do
  for mode in "${MODE[@]}"; do
    rm -f ./t ./out2.txt

    # compile
    (timeout -s 9 $TIMEOUTCC $cc $CFLAG $mode $CFILE > out2.txt 2>&1) >&/dev/null
    if ! grep -q 'internal compiler error' out2.txt \
      && ! grep -q 'PLEASE ATTACH THE FOLLOWING FILES TO THE BUG REPORT' out2.txt \
      && ! grep -q 'X86 DAG->DAG Instruction Selection' out2.txt; then
      exit 1
    fi
  done
done

# now we have passed everything, return 0
exit 0
