#!/bin/bash
echo -e "#include <stdio.h>\nvoid srand(unsigned int seed) {}\nint rand() {return 1;}" > fake.c;
gcc -shared -o libfake.so -fPIC fake.c; export LD_PRELOAD=$PWD/libfake.so; sleep 97
