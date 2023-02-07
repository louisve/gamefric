#ifndef AFFICHAGE_H
#define AFFICHAGE_H

//Include des librairies

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "../Librairie/GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "../Librairie/BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "../Librairie/ESLib.h" // Pour utiliser valeurAleatoire()

//include des fichiers

#include "moteur.h"
#include "sauvegarde.h"
#include "pokedex.h"
#include "utils.h"

//Initialisation de fonctions/structures

void initImage();
void affichage(int etat);
int gereClicBoutons(int etat);









#endif
