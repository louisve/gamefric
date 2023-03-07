#ifndef UTILS_H
#define UTILS_H

//include des fichiers

#include "pokedex.h"

//Initialisation de fonctions/structures


float attaquer(attaque attaqueUtilisee, dresseur pokemonAttaquant, dresseur pokemonVictime);
float FaiblessesResistance(attaque attaqueUtilisee, dresseur pokemonVictime);
void Baston(attaque attaqueUtilisee, dresseur *perso, dresseur *tour, int etat_combat, int salle_actuelle);
void verifVictoire(dresseur *perso, dresseur *tour, int salle_actuelle);
int calculPvMax(dresseur pokemon);
int verifVictoireAffichage(int etat, dresseur *perso);


#endif