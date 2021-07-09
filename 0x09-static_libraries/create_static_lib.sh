#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar cr libholberton.a *.o
