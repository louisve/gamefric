#ifndef MOTEUR_H
#define MOTEUR_H

#define VPerso 8
#define largeurPerso 50
#define hauteurPerso 60

//include des fichiers

#include "pokedex.h"
#include "utils.h"

//Initialisation de fonctions/structures

int ControleDeplacementsHaut(int *placey, int *placex, int etat, int *etatdp,dresseur *perso, int *pstartdelai, int *pfindelai, int *ptpsJeu);
int ControleDeplacementsBas(int *placey, int *placex, int etat, int *etatdp, dresseur *perso);
int ControleDeplacementsDroite(int *placey, int *placex, int etat, int *etatdp, dresseur *perso);
int ControleDeplacementsGauche(int *placey, int *placex, int etat, int *etatdp, dresseur *perso);

#endif
