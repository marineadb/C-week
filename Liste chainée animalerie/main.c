#include <stdio.h>
#include "Animal.h"
#include "liste.h"
#include <string.h> 
#include <stdlib.h>

int main(){
    ptrListe liste = NULL;
    ptrAnimal a = creerAnimal();
    liste = ajouterPremier(a);
    afficherListe(liste);
    ptrAnimal b = creerAnimal(b);
    ajouterAnimal(b, liste);
    afficherListe(liste);
    ptrAnimal e = creerAnimal();
    ptrAnimal f = creerAnimal();
    ptrAnimal g = creerAnimal();
    ajouterAnimal(f, liste);
    ajouterAnimal(g, liste);
    supprimer(b, liste);
    afficherListe(liste);


}