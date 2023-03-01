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

//Initialisation de fonctions/structures


#define NUM_POKEMON 12 //Nombre de pokemon différents
#define NUM_ATTAQUE 5 //Nombre total d'attaques différentes
#define NB_ATK 2 //Nombre attaque qu'a un pokemon


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

typedef struct DRESSEUR{
    char nom[20];
    Pokemon starter;
    int etage;
    char statut[10];
    int win;
}dresseur;

attaque* readAttaque();
Pokemon* readPokedex();
void initPk(char *name,Pokemon *pokedex,Pokemon *starter,attaque *tabAtk,int salle_actuelle);
void initDresseur(char *name,dresseur *perso, Pokemon *starter);
dresseur* initTour(Pokemon *pokedex, attaque *tabAtk, int salle_actuelle);

#endif