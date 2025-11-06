#!/bin/zsh
mkdir out;
rm out/*.class;
scala2_result=$($SCALA2_HOME/bin/scalac main.scala -d out 2>&1);
a=$?;
rm out/*.class;
$SCALA3_HOME/bin/scalac main.scala -d out;
b=$?;
if [[ $a -ne 0 && $b -eq 0 && $scala2_result == *"overrides nothing"* ]]; then
  return 0
else
  return 1
fi