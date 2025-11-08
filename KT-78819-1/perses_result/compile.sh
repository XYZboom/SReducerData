#!/bin/zsh
mkdir out;
rm out/*.class;
$KOTLIN_HOME/bin/kotlinc A5.kt main.java -jvm-default enable -d out;
a=$?;
rm out/*.class;
$KOTLIN_HOME/bin/kotlinc A5.kt main.java -language-version 1.9 -jvm-default enable -d out;
b=$?;
if [[ $a -ne 0 && $b -eq 0 ]]; then
  return 0
else
  return 1
fi