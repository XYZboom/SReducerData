#!/usr/bin/env bash

me=$(realpath $(dirname "${BASH_SOURCE[0]}"))
echo $me > $me/src/main/java/com/cogvio/time/prepare_perses.txt
exit 0