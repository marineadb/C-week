#ifndef __ANIMAL_H__
#define __ANIMAL_H__

typedef struct Animal* ptrAnimal;

struct Animal{
    char* nom;
    int poids;
};

extern void afficheAnimal(ptrAnimal a);
extern ptrAnimal creerAnimal();
extern int compareAnimals(ptrAnimal a,ptrAnimal b);

#endif // __ANIMAL_H__