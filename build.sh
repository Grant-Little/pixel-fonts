#!/bin/sh
set -euxo pipefail

CC="gcc"
PROGRAM="font-test"
SOURCES=$(ls ./*.c)
LINKS="-lraylib"
STD="-std=c99"
OPTIMIZE="-O0"
ERROR="-Werror -Wall -Wextra"
SANITIZE="-fsanitize=undefined,address" # doesn't work on windows lol

$CC $STD $OPTIMIZE $ERROR $SANITIZE $SOURCES -o $PROGRAM $LINKS

exit 0

