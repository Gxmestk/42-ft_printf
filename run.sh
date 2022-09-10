#! /bin/sh
clear
echo "------------------------------------------RUN-------------------------------------------"

gcc -Wall -Werror -Wextra -c ./srcs/main.c -o main.o

make -s

gcc -Wall -Werror -Wextra  main.o -L. libftprintf.a

./a.out

make -s fclean

a.out

rm main.o