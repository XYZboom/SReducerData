#!/usr/bin/env bash

me=$(realpath $(dirname "${BASH_SOURCE[0]}"))
src=$me/IncomparableTypes.java
out=$me/

cf_out=$($CR_CLIENT_HOME/bin/client -l java -s CheckerFramework -v 1.9.11 -- -g -processor nullness $src -AprintErrorStack -d $out 2>&1)
cf_exit=$?
echo "$cf_out"
if
  grep -q -F "error: Incomparable types ( T_ARR extends @Initialized @NonNull Object, @Initialized @NonNull int @Initialized @NonNull [])visitHistory = VisitHistory(  )" <<< "$cf_out" \
  && grep -q -F "org.checkerframework.javacutil.ErrorReporter.errorAbort(ErrorReporter.java:28)" <<< "$cf_out" \
  && [[ $cf_exit -ne 0 ]];
then
  exit 0
else
  exit 1
fi
