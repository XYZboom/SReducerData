#!/bin/zsh
mkdir out;
rm out/*.class;
$JDK_1_8/bin/javac sdd-reduced.java -d out;
a=$?;
rm out/*.class;
$JDK_17_0/bin/javac sdd-reduced.java -d out;
b=$?;
if [[ $a -eq 0 && $b -ne 0 ]]; then
  return 0
else
  return 1
fi