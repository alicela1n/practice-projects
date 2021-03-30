#!/usr/bin/env bash

printf "Installing my small programs to ~/.local/bin\n"

# Building and installing my C programs
pushd C
make all
popd

mkdir -p ~/.local/bin
install -Dm755 ./C/la ~/.local/bin/
install -Dm755 ./C/spacecalc ~/.local/bin
install -Dm755 ./python/get-temp ~/.local/bin
