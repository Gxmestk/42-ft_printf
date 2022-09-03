    #! /bin/sh
clear
echo "------------------------------------------TEST------------------------------------------"
touch ./srcs/g.o

rm ./srcs/*.o

for i in ./srcs/*.c
do
 gcc -Wall -Wextra -Werror -c $i
done

rm ./srcs/*.o