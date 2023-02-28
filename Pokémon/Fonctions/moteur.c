#include "moteur.h"

int ControleDeplacementsHaut(int *placey, int *placex, int etat, int *etatdp, int verif_victoire){
    if(*placey >= 805 && *placex >= 881 && *placex <= 1000 && verif_victoire == 1){ // verification de si on atteint la porte de sortie
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
    else if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672){ //vérification des coordonnées du perso
        etat = 15;
    }
    else if(*placey >= 805 && *placex >= 881 && *placex <= 1000 && verif_victoire == 0){ //Message d'erreur si combat non effectué
        printf("Erreur combat à terminer d'abord\n"); // ce message est temporaire en attendant que je fasse un message propre
    }
    else if(*placey <= 805){ //limitation de la hauteur à laquelle on monte
        *placey = *placey + VPerso;
        *etatdp = 1;
    }

    return etat;

}

int ControleDeplacementsBas(int *placey, int *placex, int etat, int *etatdp){
    if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672){ //vérification des coordonnées du perso
        etat = 15;
    }
    else if(*placey >= 258){
        *etatdp = 2;
        *placey = *placey - VPerso;
    }
return etat;
}

int ControleDeplacementsGauche(int *placey, int *placex, int etat, int *etatdp){
    if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672){ //vérification des coordonnées du perso
        etat = 15;
    }
    else if(*placex >= 663){
        *etatdp = 3;
        *placex = *placex - VPerso;
    }
return etat;
}

int ControleDeplacementsDroite(int *placey, int *placex, int etat, int *etatdp){
    if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672){ //vérification des coordonnées du perso
        etat = 15;
    }
    else if(*placex <= 1206){
        *etatdp = 4;
        *placex = *placex + VPerso;
    }
return etat;
}