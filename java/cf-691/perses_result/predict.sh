#!/usr/bin/env bash

me=$(realpath $(dirname "${BASH_SOURCE[0]}"))
src=$me/Collections.java
out=$me/

cf_out=$($CR_CLIENT_HOME/bin/client -l java -s CheckerFramework -v 1.9.13 -- -processor formatter -AprintErrorStack $src -d $out 2>&1)
cf_exit=$?
echo "$cf_out"
if
  grep -q -F "Exception: java.lang.NullPointerException; Stack trace: org.checkerframework.checker.formatter.FormatterTreeUtil.formatAnnotationToCategories(FormatterTreeUtil.java" <<< "$cf_out" \
  && [[ $cf_exit -ne 0 ]];
then
  exit 0
else
  exit 1
fi
