#include <stdio.h>
#include "Animal.h"
#include <string.h> 
#include <stdlib.h>
#define NBA 3

void ajouterAnimal(ptrAnimal animalerie[],int *cpt);
void afficheAnimalerie(ptrAnimal animalerie[],int *cpt);
void savefic(ptrAnimal animalerie[],*cpt);


int main(){
    ptrAnimal animalerie[NBA+1];
    int cpt = 0;
    while(1){
        
        printf("Tapez 1 pour ajouter des animaux\nTapez 2 pour voir l'animalerie");
        int choix;
        scanf("%d",&choix);
        switch (choix){
            case 1:
                ajouterAnimal(animalerie,&cpt);
                break;
            case 2:
                afficheAnimalerie(animalerie,&cpt);
                break;
            case 3: 
                savefic(animalerie,&cpt);
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
            ptrAnimal a = creerAnimal();
            animalerie[*cpt]= a;
            *cpt = *cpt+1;
        }
    }
}

void afficheAnimalerie(ptrAnimal animalerie[],int *cpt){
    for(int i=0; i<*cpt; i++){
        afficheAnimal(animalerie[i]);
    }
}

void savefic(ptrAnimal animalerie[, int *cpt]){
    File* fic = fopen("file_animal","w");
    while(fscan(fic))
}