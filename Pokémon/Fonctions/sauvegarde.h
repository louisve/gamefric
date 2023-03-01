#ifndef SAUVEGARDE_H
#define SAUVEGARDE_H

//Include des librairies

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

//include des fichiers

#include "affichage.h"
#include "moteur.h"
#include "pokedex.h"

//Initialisation de fonctions/structures

// void sauvegarde_niveau(etage *level);
// void recup_sauvegarde_niveau(etage *level);
// void sauvegarde_dresseur(dresseur *perso);
// void recup_sauvegarde_dresseur(dresseur *perso);
// void reinit_fichiers();

void sauvegarde_dresseur(dresseur *perso);
int recup_sauvegarde_dresseur(dresseur *perso);


#endif