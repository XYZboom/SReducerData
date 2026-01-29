#!/usr/bin/env bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
src=$(realpath $SCRIPT_DIR/Test.java)
out=$(realpath $SCRIPT_DIR/out)

mkdir_out=$(mkdir $out)

javac_out=$($JDK8u40_HOME/bin/javac -J-Duser.language=en $src -d $out 2>&1)
javac_exit=$?
echo "$javac_out"

# The issue is "No line numbers in compilation error"
if
  grep -q -F "error: incompatible types: possible lossy conversion from long to int" <<< "$javac_out" \
  && grep -q -F "Note: Some messages have been simplified; recompile with -Xdiags:verbose to get full output" <<< "$javac_out" \
  && ! grep -q -F "Test.java" <<< "$javac_out" \
  && [[ $javac_exit -ne 0 ]];
then
  exit 0
else
  exit 1
fi