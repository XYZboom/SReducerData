#!/bin/zsh
mkdir out;
rm out/*.class;
notnull=org/jetbrains/annotations/NotNull.java;
nullable=org/jetbrains/annotations/Nullable.java;
$JDK_17_0/bin/java -cp $CLF_HOME/runners/groovy-runner/src/main/resources/groovyJars/groovy-4.0.24.jar \
  org.codehaus.groovy.tools.FileSystemCompiler main.groovy $notnull $nullable -j -d out 2>> a.log;
a=$?;
rm out/*.class;
$JDK_17_0/bin/java -cp $CLF_HOME/runners/groovy-runner/src/main/resources/groovyJars/groovy-5.0.0-alpha-11.jar \
  org.codehaus.groovy.tools.FileSystemCompiler main.groovy $notnull $nullable -j -d out 2>> b.log;
b=$?;
if [[ $a -ne 0 && $b -eq 0 ]]; then
  return 0
else
  return 1
fi
