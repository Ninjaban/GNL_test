#\
##	Fichier de test du GNL
##
##	Utilisation :
##
##	sh test.sh [Path du dossier] [include] [library] [Niveau de test]
##
##	lvl 0-1	: Erreurs
##	lvl 2	: Simple
##	lvl 3	: Entrée standard
##	lvl 4	: Multi-fd
#/

directory=$1
include=$directory/$2

if [ -n $3 ]
then
library=$directory/$3
lvl=$4
make -C $library
else
lvl=$3
fi

echo $directory
echo $include
echo $library

if [ $lvl -ge 0 ]
then
echo "\n<--->\nTest 0\n<--->\n"
cat ./tests/test0.c
if [ -n $3 ]
then
gcc $directory/get_next_line.c $library/libft.a ./tests/test0.c -I $include -I $directory
else
gcc $directory/get_next_line.c ./tests/test0.c -I $include -I $directory
fi
./a.out ./tests/test0.c > ./logs/log0
fi

if [ $lvl -ge 1 ]
then
echo "\n<--->\nTest 1\n<--->\n"
cat ./tests/test1.c
if [ -n $3 ]
then
gcc $directory/get_next_line.c $library/libft.a ./tests/test1.c -I $include -I $directory
else
gcc $directory/get_next_line.c ./tests/test1.c -I $include -I $directory
fi
./a.out ./tests/test1.c > ./logs/log1
fi

if [ $lvl -ge 2 ]
then
echo "\n<--->\nTest 2\n<--->\n"
cat ./tests/test2.c
if [ -n $3 ]
then
gcc $directory/get_next_line.c $library/libft.a ./tests/test2.c -I $include -I $directory
else
gcc $directory/get_next_line.c ./tests/test2.c -I $include -I $directory
fi
./a.out ./tests/test2.c > ./logs/log2
fi

if [ $lvl -ge 3 ]
then
echo "\n<--->\nTest 3\n<--->\n"
cat ./tests/test3.c
if [ -n $3 ]
then
gcc $directory/get_next_line.c $library/libft.a ./tests/test3.c -I $include -I $directory
else
gcc $directory/get_next_line.c ./tests/test3.c -I $include -I $directory
fi
./a.out ./tests/test3.c > ./logs/log3
fi

if [ $lvl -ge 4 ]
then
echo "\n<--->\nTest 4\n<--->\n"
cat ./tests/test4.c
if [ -n $3 ]
then
gcc $directory/get_next_line.c $library/libft.a ./tests/test4.c -I $include -I $directory
else
gcc $directory/get_next_line.c ./tests/test4.c -I $include -I $directory
fi
./a.out ./tests/test4.c ./tests/test4.c > ./logs/log4
fi