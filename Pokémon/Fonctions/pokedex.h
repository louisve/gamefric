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


#define NUM_POKEMON 3
#define NUM_ATTAQUE 4



typedef struct STATS{
    float pv;
    float atk;
    float def;
}stats;


typedef struct ATTAQUE {
    char nom[30];
    float degats;
    char type[30];

}attaque;

typedef struct POKEMON {
    char nom[20];
    char type[10];
    float niveau;
    int stade;
    stats niveau1;
    stats rapport;
    stats coef1;
    stats coef2;
    float pv;
    attaque att[2];
}Pokemon;

attaque* readAttaque();
Pokemon* readPokedex();

#endif