#ifndef UTILS_H
#define UTILS_H

//Include des librairies

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

//include des fichiers

#include "pokedex.h"

//Initialisation de fonctions/structures


float attaquer(attaque attaqueUtilisee, dresseur *pokemonAttaquant, dresseur *pokemonVictime);

float FaiblessesResistance(attaque attaqueUtilisee, dresseur *pokemonVictime);

// int caseTabAtk(char attaqueUtilisee);

int Baston(attaque attaqueUtilisee, dresseur *perso, dresseur *tour);

int verifVictoire(dresseur *perso, dresseur *tour);


#endif