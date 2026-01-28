#!/usr/bin/env bash

me=$(realpath $(dirname "${BASH_SOURCE[0]}"))
src=$me/AbstractList.java
out=$me/

cf_out=$($CR_CLIENT_HOME/bin/client -l java -s CheckerFramework -v 1.9.13 -- -processor guieffect -AprintErrorStack $src -d $out 2>&1)
cf_exit=$?
echo "$cf_out"
if
  grep -q -F "Exception: java.lang.AssertionError; Stack trace: org.checkerframework.checker.guieffect.GuiEffectVisitor.visitMethodInvocation(GuiEffectVisitor.java" <<< "$cf_out" \
  && [[ $cf_exit -ne 0 ]];
then
  exit 0
else
  exit 1
fi
