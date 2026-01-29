#!/usr/bin/env bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
src=$(realpath $SCRIPT_DIR/Main.java)
out=$(realpath $SCRIPT_DIR/out)

mkdir_out=$(mkdir $out)

javac_out=$($JDK8u40_HOME/bin/javac $src -d $out 2>&1)
javac_exit=$?
echo "$javac_out"
if [[ $javac_out == *"java.lang.AssertionError: attribution shouldn't be happening here"* ]] && [[ $javac_exit -ne 0 ]]; then
  exit 0
else
  exit 1
fi