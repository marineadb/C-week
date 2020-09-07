#ifndef __LISTE_H__
#define __LISTE_H__
#include "Animal.h"

typedef struct liste *ptrListe;

struct liste{
    ptrAnimal animal;
    ptrListe next;
};

extern void ajouterAnimal (ptrAnimal animal, ptrListe liste);
extern ptrListe ajouterPremier(ptrAnimal animal);
extern void afficherListe(ptrListe liste);
extern void supprimer(ptrAnimal animal, ptrListe liste);

#endif // __LISTE_H__