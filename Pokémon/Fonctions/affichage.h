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
void afficheImg_menus(int etat,int *placex, int *placey,dresseur *perso);
int gereClicBoutons(int etat, Pokemon *pokedex,Pokemon *starter, dresseur *perso);
int verif_survol_souris(int etat);
void initPk(char *name,Pokemon *pokedex,Pokemon *starter);
void initDresseur(char *name,dresseur *perso, Pokemon *starter);
void affichePerso(int *placex, int *placey, DonneesImageRGB *persoFace);

#endif
