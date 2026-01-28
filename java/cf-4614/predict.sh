#!/usr/bin/env bash

me=$(realpath $(dirname "${BASH_SOURCE[0]}"))
src=$me/Version.java
out=$me/out

cf_out=$($CR_CLIENT_HOME/bin/client -l java -s CheckerFramework -v 3.12.0 -- -g -processor nullness $src -d $out 2>&1)
cf_exit=$?
echo "$cf_out"
if
  grep -q -F "Error message: Encountered unexpected token: \"java\" <IDENTIFIER>]" <<< "$cf_out" \
  && grep -q -F "error: [lambda.param.type.incompatible] incompatible parameter types for parameter 0 in lambda expression." <<< "$cf_out" \
  && [[ $cf_exit -ne 0 ]];
then
  exit 0
else
  exit 1
fi
