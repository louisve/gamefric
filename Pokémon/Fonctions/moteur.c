#include "moteur.h"

void ControleDeplacementsHaut(int *placey, int *placex){
    if(*placey >= 845 && *placex >= 876 && *placex <= 895){ // verification de si on atteint la porte de sorti
        printf("Tu es a la sorti\n");
    }
    else{
        *placey = *placey + VPerso;
    }

}