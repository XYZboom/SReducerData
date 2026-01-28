#!/usr/bin/env bash

src=$(realpath .)
out=$(realpath ../out)

ecj_out=$($CR_CLIENT_HOME/bin/client -l java -s ECJ -v 3.7 -- $src -d $out -bootclasspath $JDK6_RT -7 2>&1)
ecj_exit=$?
echo "$ecj_out"
if [[ $ecj_out == *"Internal compiler error: java.lang.ArrayIndexOutOfBoundsException"* ]] && [[ $ecj_exit -ne 0 ]]; then
  exit 0
else
  exit 1
fi
