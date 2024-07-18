#!/bin/bash
gcc -Wall -pedantic -Werror -Werror -c *.c
ar -rc liball.a *.c
ranlib liball.a
