#include "Animal.h"
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void afficheAnimal(ptrAnimal a);
ptrAnimal creerAnimal();

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