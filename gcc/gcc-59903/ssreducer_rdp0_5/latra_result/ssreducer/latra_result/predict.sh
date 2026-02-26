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
BADCC=("$gcc_4_8_2 -m32 -O3")
GOODCC=("$ccomp -fall")
TIMEOUTCC=10
TIMEOUT=30
CFILE=small.c
CFLAG="-o t"
CLANGFC="$gcc_7_1_0 -O0 -Wall -fwrapv -ftrapv -fsanitize=undefined,address"

#################################################################################

### check for undefined behaviors first (from creduce scripts)

rm -f out*.txt

#############################
# iterate over the good ones
#############################

for cc in "${GOODCC[@]}"; do
  rm -f ./t ./out1.txt

  # compile
  if [[ $cc == ccomp* ]]; then
    timeout -s 9 $TIMEOUT $cc -interp $CFLAG $CFILE >&/dev/null
    ret=$?
    if [ $ret != 0 ]; then
      exit 1
    fi
  fi

  timeout -s 9 $TIMEOUT $cc $CFLAG $CFILE >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi
done

#############################
# iterate over the bad ones
#############################

for cc in "${BADCC[@]}"; do
  timeout -s 9 $TIMEOUT $cc $CFLAG $CFILE > out.txt 2>&1

  if ! grep 'internal compiler error' out.txt; then
    exit 1
  fi
done

# now we have passed everything, return 0
exit 0
