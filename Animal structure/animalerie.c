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

void ajouterAnimal(ptrAnimal animalerie[],int* cpt);
void voirAnimalerie(ptrAnimal animalerie[],int* cpt);
void moyennePoids(ptrAnimal animalerie[], int* cpt);

int main(){
    ptrAnimal animalerie[NBA+1];
    int cpt = 0;
    while(1){
        printf("Tapez 1 pour ajouter des animaux\nTapez 2 pour voir l'animalerie\nTapez 3 pour afficher la moyenne des poids");
        int choix;
        scanf("%d",&choix);
        switch (choix){
            case 1:
                ajouterAnimal(animalerie,&cpt);
                break;
            case 2:
                voirAnimalerie(animalerie,&cpt);
                break;
            case 3 : 
                moyennePoids(animalerie,&cpt);
                break;
            default:
                printf("Choix invalide recommencez \n");
        }


    }
}

void ajouterAnimal(ptrAnimal animalerie[],int *cpt){
    if (*cpt==10){
        printf("Vous ne pouvez plus ajouter d'animaux, l'animalerie est complète.\n");
    }
    else{
        printf("cpt : %d", *cpt);
        int nb;
        int reste = NBA-*cpt;
        printf("Combien d'animaux voulez vous ajouter?\n");
        scanf("%d",&nb);
        while(*cpt+nb>=NBA){
            printf("Vous ne pouvez pas ajouter autant d'animaux, il reste %d places\n", reste);
            printf("Combien d'animaux voulez vous ajouter?\n");
            scanf("%d",&nb);
        }
       
        for(int i=0; i<nb; i++){
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
        animalerie[*cpt]= an;
        *cpt = *cpt+1;

        
        }
        printf("Il y a %d animaux dans l'animalerie.\n", *cpt);
        
    }
    
}

void voirAnimalerie(ptrAnimal animalerie[],int* cpt){
    for(int i=0; i<*cpt; i++){
        printf("Nom de l'animal : %s\n Poids de l'animal : %d\n", animalerie[i]->nom, animalerie[i]->poids);
    }
}

void moyennePoids(ptrAnimal animalerie[], int* cpt){
    int sum =0;
    for (int i=0; i<*cpt; i++){
        sum += animalerie[i]-> poids;

    }
    
    float moy = sum/(*cpt);
    printf("La moyenne des poids est %f\n", moy);
}