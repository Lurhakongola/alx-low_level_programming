#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
