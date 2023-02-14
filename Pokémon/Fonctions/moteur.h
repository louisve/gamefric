#ifndef MOTEUR_H
#define MOTEUR_H

#define VPerso 4

//Include des librairies

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

//include des fichiers

#include "affichage.h"
#include "sauvegarde.h"
#include "pokedex.h"
#include "utils.h"

//Initialisation de fonctions/structures

void ControleDeplacementsHaut(int *placey, int *placex);
void ControleDeplacementsBas(int *placey, int *placex);
void ControleDeplacementsDroite(int *placey, int *placex);
void ControleDeplacementsGauche(int *placey, int *placex);








#endif