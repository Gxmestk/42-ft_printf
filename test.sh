    #! /bin/sh
clear
echo "------------------------------------------TEST------------------------------------------"
touch ./srcs/g.o

rm ./srcs/*.o

for i in ./srcs/*.c
do
 #echo $(basename $i) | sed 's/\.c/\.o/' 
 OB=$(echo $i | sed 's/\.c/\.o/')  
 gcc -Wall -Wextra -Werror -c $i -o $OB
done

rm ./srcs/*.o