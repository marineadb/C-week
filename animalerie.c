#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define NBA 3
typedef struct Animal* ptrAnimal;

struct Animal
{
    char *nom;
    int poids;

};

void creerAnimalerie(ptrAnimal animalerie[]);
void voirAnimalerie(ptrAnimal animalerie[]);
void moyennePoids(ptrAnimal animalerie[]);

int main(){
    ptrAnimal animalerie[NBA+1];
    while(1){
        printf("Tapez 1 pour creer l'animalerie\nTapez 2 pour voir l'animalerie\nTapez 3 pour afficher la moyenne des poids");
        int choix;
        scanf("%d",&choix);
        switch (choix){
            case 1:
                creerAnimalerie(animalerie);
                break;
            case 2:
                voirAnimalerie(animalerie);
                break;
            case 3 : 
                moyennePoids(animalerie);
                break;
            default:
                printf("Choix invalide recommencez \n");
        }


    }
}

void creerAnimalerie(ptrAnimal animalerie[]){
    for(int i=0; i<NBA; i++){
        ptrAnimal an = (ptrAnimal)malloc(sizeof(struct Animal));
        char temp[216];
        int poids;
        printf("Saisir l'id de l'animal\n");
        scanf(" %s", temp);
        char* id = (char*)malloc(sizeof(char) * strlen(temp));
        printf("Saisir le poids de l'animal\n");
        fscanf(stdin," %d", &poids);
        strcpy(id,temp);
        an->nom=id;
        an->poids = poids;
        animalerie[i]= an;
    }
}

void voirAnimalerie(ptrAnimal animalerie[]){
    for(int i=0; i<NBA; i++){
        printf("Nom de l'animal : %s\n Poids de l'animal : %d\n", animalerie[i]->nom, animalerie[i]->poids);
    }
}

void moyennePoids(ptrAnimal animalerie[]){
    int sum =0;
    for (int i=0; i<NBA; i++){
        sum += animalerie[i]-> poids;

    }
    
    float moy = sum/NBA;
    printf("La moyenne des poids est %f\n", moy);
}