#include "moteur.h"

int ControleDeplacementsHaut(int *placey, int *placex, int etat/*, int combattermine*/){
    if(*placey >= 805 && *placex >= 881 && *placex <= 1000 /*&& combattermine == 1*/){ // verification de si on atteint la porte de sortie
        if(etat == 7){ //Pour savoir dans quelle salle on est
            etat = 8; //Pour changer de salle puis remettre le perso au début de la salle
            *placex = 960 - largeurPerso/2;
            *placey = 285 - hauteurPerso/2;
        }
        else if(etat == 8){ //Pour savoir dans quelle salle on est
            etat = 9; //Pour changer de salle puis remettre le perso au début de la salle
            *placex = 960 - largeurPerso/2;
            *placey = 285 - hauteurPerso/2;
        }
        else if(etat == 9){ //Pour savoir dans quelle salle on est
            etat = 10; //Pour changer de salle puis remettre le perso au début de la salle
            *placex = 960 - largeurPerso/2;
            *placey = 285 - hauteurPerso/2;
        }
        else if(etat == 10){ //Pour savoir dans quelle salle on est
            etat = 11; //Pour changer de salle puis remettre le perso au début de la salle
            *placex = 960 - largeurPerso/2;
            *placey = 285 - hauteurPerso/2;
        }
        else if(etat == 11){ //Pour savoir dans quelle salle on est
            etat = 12; //Pour changer de salle puis remettre le perso au début de la salle
            *placex = 960 - largeurPerso/2;
            *placey = 285 - hauteurPerso/2;
        }
        else if(etat == 12){ //Pour savoir dans quelle salle on est
            etat = 13; //Pour changer de salle puis remettre le perso au début de la salle
            *placex = 960 - largeurPerso/2;
            *placey = 285 - hauteurPerso/2;
        }
        else if(etat == 13){ //Pour savoir dans quelle salle on est
            etat = 14; //Pour changer de salle puis remettre le perso au début de la salle
            *placex = 960 - largeurPerso/2;
            *placey = 285 - hauteurPerso/2;
        }
        else if(etat == 14){ //Pour savoir dans quelle salle on est
            printf("fin du jeu !\n");
        }
    }
    // else if(*placey >= 540 && *placex <= 900 && *placex >= 893 && *placey <= 545){ //vérification des coordonnées du perso
    //     printf("Combat avec le perso \n");
    // }

    /*else if(*placey >= 805 && *placex >= 881 && *placex <= 1000 && combattermine == 0){ //Message d'erreur si combat non effectué
        printf("Erreur combat à terminer d'abord\n"); // ce message est temporaire en attendant que je fasse un message propre mais faut attendre la fonction de clément pour tester
    }*/
    else if(*placey <= 805){ //limitation de la hauteur à laquelle on monte
        *placey = *placey + VPerso;
    }

    return etat;

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