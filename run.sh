#!/usr/bin/env bash
# run.sh - compile and run any lesson by name or number.
#
# Usage:
#   ./run.sh 01_HelloWorld
#   ./run.sh 05
#
# Compiles into build/ (gitignored) and runs it immediately.

set -e

if [ -z "$1" ]; then
    echo "Usage: ./run.sh <lesson_name_or_number>"
    echo "Example: ./run.sh 01_HelloWorld   or   ./run.sh 05"
    echo
    echo "Available lessons:"
    ls *.cpp 2>/dev/null | sed 's/\.cpp$//'
    exit 1
fi

INPUT="${1%.cpp}"   # strip .cpp if the user included it

# allow a bare number like "05" to match "05_Loops.cpp"
MATCH=$(ls *.cpp 2>/dev/null | grep -E "^${INPUT}(_.*)?\.cpp$" | head -n 1)

if [ -z "$MATCH" ]; then
    echo "Couldn't find a lesson matching '$INPUT'"
    echo "Available lessons:"
    ls *.cpp 2>/dev/null | sed 's/\.cpp$//'
    exit 1
fi

NAME="${MATCH%.cpp}"
mkdir -p build

echo "Building $MATCH ..."
g++ -std=c++17 -Wall -Wextra -g "$MATCH" -o "build/$NAME"

echo "Running $NAME:"
echo "------------------------------------------------------------"
"./build/$NAME"
