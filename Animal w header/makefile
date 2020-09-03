prog : Animal.o main.o
	gcc animal.o main.o -o prog 
main.o : main.c Animal.h
	gcc -c main.c -o main.o
Animal.o : Animal.c Animal.h
	gcc -c Animal.c -o Animal.o