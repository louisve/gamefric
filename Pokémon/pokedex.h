#ifndef POKEDEX_H
#define POKEDEX_H

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
#include "moteur.h"
#include "utils.h"

//Initialisation de fonctions/structures


#define NUM_POKEMON 150

typedef struct POKEMON {
    char nom[20];
    char type[10];
    float niveau;
    int stade;
    float hpmax;
    float hp;
    float atk;
    float defense;
    char attaque1;
    char attaque2;
    float coefPV1;
    float coefATK1;
    float coefDEF1;
    float coefPV2;
    float coefATK2;
    float coefDEF2;
}Pokemon;


void BDD(Pokemon pokedex[]);


#endif