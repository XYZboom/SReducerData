#!/usr/bin/env bash

me=$(dirname "${BASH_SOURCE[0]}")

sudo chmod +x $me/gradlew
export JAVA_TOOL_OPTIONS="-Duser.language=en"
na_out=$($me/gradlew -p $me --console=plain build 2>&1)
na_exit=$?
echo "$na_out"
if
  grep -q -F "error: [NullAway] initializer method does not guarantee @NonNull fields instant, \
zone are initialized along all control-flow paths (remember to check for exceptions or early returns)." <<< "$na_out" \
  && [[ $na_exit -ne 0 ]];
then
  exit 0
else
  exit 1
fi
