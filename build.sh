#!/bin/bash

THREADS=4
BUILD_DIR=build
export CC="clang"
export CXX="iwyu"
#export CC=gcc
#export CXX=g++

WD="$(pwd)"

if [ "$1" = "fresh" ]; then
    FRESH=1
    shift
else
    FRESH=0
fi

# Test branch and determine install location. Set Fresh if changing
# the location
CURRENT_BRANCH="$(git rev-parse --abbrev-ref HEAD)"
if ! [ -f "$BUILD_DIR/__last_build_rev" ]; then
    FRESH=1
else
    LAST_BRANCH="$(cat "$BUILD_DIR/__last_build_rev")"
    if [ "$LAST_BRANCH" != "$CURRENT_BRANCH" ]; then
        FRESH=1
    fi
fi

if [ $FRESH -ne 0 ]; then
    rm -rf "$BUILD_DIR"
fi

mkdir -p "$BUILD_DIR"

cd "$BUILD_DIR"
echo -n "$CURRENT_BRANCH" > __last_build_rev

INSTALL_DIR="/opt/kicad-${CURRENT_BRANCH}"

if [ $FRESH -ne 0 ] || ! [ -f Makefile ]; then
    cmake "$WD" \
        -DCMAKE_BUILD_TYPE=Debug \
        -DCMAKE_INSTALL_PREFIX="$INSTALL_DIR" \
        -DKICAD_SCRIPTING=ON \
        -DKICAD_SCRIPTING_MODULES=ON \
        -DKICAD_SCRIPTING_WXPYTHON=ON \
        -DKICAD_SKIP_BOOST=ON "$@"
fi

make -j "$THREADS" "$@" #&& exec zsh
