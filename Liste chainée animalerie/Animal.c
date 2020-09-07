#include "Animal.h"
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void afficheAnimal(ptrAnimal a);
ptrAnimal creerAnimal();
int compareAnimals(ptrAnimal a,ptrAnimal b);


void afficheAnimal(ptrAnimal a){
     printf("Nom de l'animal : %s\n Poids de l'animal : %d\n", a->nom, a->poids);
}

ptrAnimal creerAnimal(){
    ptrAnimal a = (ptrAnimal)malloc(sizeof(struct Animal));
    char temp[216];
    int poids;
    printf("Saisir l'id de l'animal\n");
    scanf(" %s", temp);
    char* id = (char*)malloc(sizeof(char) * strlen(temp));
    printf("Saisir le poids de l'animal\n");
    fscanf(stdin," %d", &poids);
    strcpy(id,temp);
    a->nom=id;
    a->poids = poids;
    return a;
}

int compareAnimals(ptrAnimal a, ptrAnimal b){
    printf("Nom a = %s, Nom b = %s \n Poids a = %d, Poids b = %d", a->nom, b->nom, a->poids, b->poids);
    if (b->nom == a->nom && b->poids == a->poids){
        printf("COMPARE 1");
        return 1;
    }
    printf("COMPARE 0");
    return 0;
    
}