#ifndef UTILS_H
#define UTILS_H

//include des fichiers

#include "pokedex.h"

//Initialisation de fonctions/structures


float attaquer(attaque attaqueUtilisee, dresseur *pokemonAttaquant, dresseur *pokemonVictime);
float FaiblessesResistance(attaque attaqueUtilisee, dresseur *pokemonVictime);
int Baston(attaque attaqueUtilisee, dresseur *perso, dresseur *tour, int etat_combat);
int verifVictoire(dresseur *perso, dresseur *tour);
int calculPvMax(dresseur *pokemon);

#endif