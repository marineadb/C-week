prog : Animal.o main.o liste.o
	gcc Animal.o main.o liste.o -o prog 
main.o : main.c Animal.h
	gcc -c main.c -o main.o
liste.o : liste.h Animal.h liste.c
	gcc -c liste.c -o liste.o
Animal.o : Animal.c Animal.h
	gcc -c Animal.c -o Animal.o