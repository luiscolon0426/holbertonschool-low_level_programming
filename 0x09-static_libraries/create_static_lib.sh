#!bin/bash
gcc -c *.c
ar rcs liball.a -o liball.o
ranlib liball.a

