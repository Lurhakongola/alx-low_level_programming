#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
