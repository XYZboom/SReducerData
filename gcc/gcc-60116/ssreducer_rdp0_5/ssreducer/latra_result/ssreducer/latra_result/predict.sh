#!/bin/bash
# allow docker to access current directory
chmod 777 .
run_in_docker="docker exec -w /host$(realpath .) perses"
clang_3_8_0="$run_in_docker clang-3.8.0 -w"
clang_7_1_0="$run_in_docker clang-7.1.0 -w"
gcc_4_8_2="$run_in_docker gcc-4.8.2 -w"
gcc_7_1_0="$run_in_docker gcc-7.1.0 -w"
ccomp="$run_in_docker /home/coq/.opam/4.05.0/bin/ccomp"

# need to configure this part
BADCC=("$gcc_4_8_2 -m32 -Os")
GOODCC=("$gcc_4_8_2 -m32 -O0")
TIMEOUT=10
TIMEOUTEXEC=3
TIMEOUTCC=10
CFILE=small.c
CFLAG="-o t"
CLANGFC="$clang_7_1_0 -m64 -O0 -Wall -fwrapv -ftrapv -fsanitize=undefined"

#################################################################################

### check for undefined behaviors first (from creduce scripts)
EXEC_T="$run_in_docker timeout -s 9 $TIMEOUTEXEC ./t"

rm -f ./t ./out*.txt
timeout -s 9 $TIMEOUT $CLANGFC $CFLAG $CFILE >&/dev/null
ret=$?

if [ $ret != 0 ]; then
  exit 1
fi

(timeout -s 9 $TIMEOUT $EXEC_T > out0.txt 2>&1) >&/dev/null
ret=$?

if [ $ret != 0 ]; then
  exit 1
fi

#############################
# iterate over the good ones
#############################

timeout -s 9 $TIMEOUT $ccomp -interp $CFILE >&/dev/null
ret=$?
if [ $ret != 0 ]; then
  exit 1
fi

for cc in "${GOODCC[@]}"; do
  rm -f ./t ./out1.txt

  # compile
  timeout -s 9 $TIMEOUT $cc $CFLAG $CFILE >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi

  # execute
  (timeout -s 9 $TIMEOUT $EXEC_T > out1.txt 2>&1) >&/dev/null
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

for cc in "${BADCC[@]}"; do
  rm -f ./t ./out2.txt

  # compile
  timeout -s 9 $TIMEOUT $cc $CFLAG $CFILE >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi

  # execute
  (timeout -s 9 $TIMEOUT $EXEC_T > out2.txt 2>&1) >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi

  # compare with reference: out0.txt
  if diff -q out0.txt out2.txt > /dev/null; then
    exit 1
  fi
done

# now we have passed everything, return 0
exit 0
