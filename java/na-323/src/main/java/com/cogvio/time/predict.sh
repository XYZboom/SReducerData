#!/usr/bin/env bash

FILE="prepare_perses.txt"

if [ ! -f "$FILE" ]; then
    echo "Please run prepare_perses.sh first! Or you forget to add $FILE into --deps in perses command line arguments?"
    exit -1
fi

me=$(realpath $(dirname "${BASH_SOURCE[0]}"))

oriProjectDir=$(cat $FILE)
cp -r $oriProjectDir/gradle .
cp $oriProjectDir/gradlew .
cp $oriProjectDir/build.gradle .
cp $oriProjectDir/settings.gradle .
mkdir -p $me/src/main/java/com/cogvio/time/
cp *.java $me/src/main/java/com/cogvio/time/

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
