#include <stdio.h>
#include <stdlib.h> 
#include "Animal.h"
#include "liste.h"


void ajouterAnimal (ptrAnimal animal, ptrListe liste);
ptrListe ajouterPremier(ptrAnimal animal);
void afficherListe(ptrListe liste);
void supprimer(ptrAnimal animal, ptrListe liste);




ptrListe ajouterPremier(ptrAnimal animal){
    ptrListe liste;
    liste = (ptrListe) malloc (sizeof(struct liste));
    liste->animal = animal;
    liste->next = NULL;
    printf("Ajout de l'animal dans la liste\n");
    return liste;
}


void ajouterAnimal(ptrAnimal animal, ptrListe liste){
    ptrListe listeTemp;
    listeTemp = (ptrListe)malloc(sizeof(struct liste));
    listeTemp->animal = animal;
    listeTemp->next = NULL;
    while(liste->next){
        liste=liste->next;
    }
    liste->next = listeTemp;

}


void afficherListe(ptrListe liste){
    printf("La liste contient les animaux suivants:\n");
    while (liste){
        afficheAnimal(liste->animal);
        liste = liste->next;
        
    }

}

void supprimer(ptrAnimal animal, ptrListe liste){
    ptrListe precedent;
    while (liste->next && (!(compareAnimals(liste->animal, animal))))
    {
       precedent = liste;
       liste=liste->next;
    }
    if(!(liste->next)){
        printf("Cet animal n'est pas dans la liste\n");
        return;
    }
    precedent->next = liste->next;
    free(liste);
}