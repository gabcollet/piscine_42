#!/bin/sh
gcc -c -Wall -Werror -Wextra *.c
ar rc libft.a *.o
rm -f *.o
ranlib libft.a