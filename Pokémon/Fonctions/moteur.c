#include "moteur.h"

int ControleDeplacementsHaut(int *placey, int *placex, int etat, int *etatdp, dresseur *perso){
    if(*placey >= 805 && *placex >= 881 && *placex <= 1000 && perso->win == 1){ // verification de si on atteint la porte de sortie
        if(etat >= 7 && etat <= 13){ //Pour savoir dans quelle salle on est
            //Pour changer de salle puis remettre le perso au début de la salle
            etat ++; 
            *placex = 960 - largeurPerso/2;
            *placey = 285 - hauteurPerso/2;
        }
        else if(etat == 14){ //Pour savoir dans quelle salle on est
            etat = 61;
        }
        perso->win = 0;
    }
    else if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672 && perso->win != 1){ //vérification des coordonnées du perso
        etat = 15;
    }
    else if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672 && perso->win == 1){ //vérification des coordonnées du perso
        *placey = *placey - VPerso;
    }
    // else if(*placey >= 805 && *placex >= 881 && *placex <= 1000 && perso->win == 0){ //Message d'erreur si combat non effectué
    //     printf("Erreur combat à terminer d'abord\n"); // ce message est temporaire en attendant que je fasse un message propre
    // }
    else if(*placey <= 805){ //limitation de la hauteur à laquelle on monte
        *placey = *placey + VPerso;
        *etatdp = 1;
    }

    return etat;

}

int ControleDeplacementsBas(int *placey, int *placex, int etat, int *etatdp, dresseur *perso){
    if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672 && perso->win != 1){ //vérification des coordonnées du perso
        etat = 15;
    }
    else if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672 && perso->win == 1){ //vérification des coordonnées du perso
        *placey = *placey + VPerso;
    
    }
    else if(*placey >= 258){
        *etatdp = 2;
        *placey = *placey - VPerso;
    }
return etat;
}

int ControleDeplacementsGauche(int *placey, int *placex, int etat, int *etatdp, dresseur *perso){
    if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672 && perso->win != 1){ //vérification des coordonnées du perso
        etat = 15;
    }
    else if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672 && perso->win == 1){ //vérification des coordonnées du perso
        *placex = *placex + VPerso;
    }
    else if(*placex >= 663){
        *etatdp = 3;
        *placex = *placex - VPerso;
    }
return etat;
}

int ControleDeplacementsDroite(int *placey, int *placex, int etat, int *etatdp, dresseur *perso){
    if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672 && perso->win != 1){ //vérification des coordonnées du perso
        etat = 15;
    }
    else if(*placey >= 549 && *placex <= 981 && *placex >= 889 && *placey <= 672 && perso->win == 1){ //vérification des coordonnées du perso
        *placex = *placex + VPerso;
    }
    else if(*placex <= 1206){
        *etatdp = 4;
        *placex = *placex + VPerso;
    }
return etat;
}
