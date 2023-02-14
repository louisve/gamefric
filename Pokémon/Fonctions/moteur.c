#include "moteur.h"

void ControleDeplacementsHaut(int *placey, int *placex){
    if(*placey >= 805 && *placex >= 881 && *placex <= 1000){ // verification de si on atteint la porte de sortie
        printf("Tu es à la sortie\n");
    }
    else if(*placey >= 540 && *placex <= 977 && *placex >= 893 && *placey <= 977){ //vérification des coordonnées du perso
        printf("Combat avec le perso \n");
    }
    else if(*placey <= 805){ //limitation de la hauteur à laquelle on monte
        *placey = *placey + VPerso;
    }

}

void ControleDeplacementsBas(int *placey, int *placex){
    if(*placey >= 540 && *placex <= 977 && *placex >= 893 && *placey <= 977){ //vérification des coordonnées du perso
        printf("Combat avec le perso \n");
    }
    else if(*placey >= 258){
        *placey = *placey - VPerso;
    }

}

void ControleDeplacementsGauche(int *placey, int *placex){
    if(*placey >= 540 && *placex <= 977 && *placex >= 893 && *placey <= 977){ //vérification des coordonnées du perso
        printf("Combat avec le perso \n");
    }
    else if(*placex >= 663){
        *placex = *placex - VPerso;
    }

}

void ControleDeplacementsDroite(int *placey, int *placex){
    if(*placey >= 540 && *placex <= 977 && *placex >= 893 && *placey <= 977){ //vérification des coordonnées du perso
        printf("Combat avec le perso \n");
    }
    else if(*placex <= 1206){
        *placex = *placex + VPerso;
    }

}