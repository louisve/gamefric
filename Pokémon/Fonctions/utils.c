#include "utils.h"


float attaquer(attaque attaqueUtilisee, dresseur pokemonAttaquant, dresseur pokemonVictime){

    float atkAttaquant = pokemonAttaquant.starter.niveau1.atk + (pokemonAttaquant.starter.rapport.atk * (pokemonAttaquant.starter.niveau-1));

    if (pokemonAttaquant.starter.stade == 2){
        atkAttaquant *= pokemonAttaquant.starter.coef1.atk;
    }
    if (pokemonAttaquant.starter.stade == 3){
        atkAttaquant *= pokemonAttaquant.starter.coef2.atk;
    }

    float defVictime = pokemonVictime.starter.niveau1.def + pokemonVictime.starter.rapport.def * pokemonVictime.starter.niveau;

    if (pokemonVictime.starter.stade == 2){
        defVictime *= pokemonVictime.starter.coef1.def;
    }
    if (pokemonAttaquant.starter.stade == 3){
        defVictime *= pokemonVictime.starter.coef2.def;
    }

    float dpsAttaque = ((((((pokemonAttaquant.starter.niveau*2/5)+2)*attaqueUtilisee.degats * atkAttaquant /50)/defVictime)+2)*1.5);
    printf("verif  niv : %f\n",pokemonAttaquant.starter.niveau);
    printf("verif  atk : %f\n",attaqueUtilisee.degats);
    printf("verif  1 : %f\n",dpsAttaque);

    dpsAttaque = dpsAttaque * FaiblessesResistance(attaqueUtilisee, pokemonVictime);
    printf("verif  2 : %f\n",dpsAttaque);

    dpsAttaque = round(dpsAttaque);
    printf("verif  finale : %f\n",dpsAttaque);

    return dpsAttaque;
}


float FaiblessesResistance(attaque attaqueUtilisee, dresseur pokemonVictime){
    // Faiblesses et résistance
    float faibl = 0;
    if (strcmp(attaqueUtilisee.type, pokemonVictime.starter.type) == 0 || strcmp(attaqueUtilisee.type, "Normal") == 0){
        faibl = 1;
    }
    else if ((strcmp(attaqueUtilisee.type, "Feu") == 0 && strcmp(pokemonVictime.starter.type, "Eau") == 0) || (strcmp(attaqueUtilisee.type, "Eau") == 0 && strcmp(pokemonVictime.starter.type, "Plante") == 0) || (strcmp(attaqueUtilisee.type, "Plante") == 0 && strcmp(pokemonVictime.starter.type, "Feu") == 0)){
        faibl = 0.5;
    }
    else if ((strcmp(attaqueUtilisee.type, "Feu") == 0 && strcmp(pokemonVictime.starter.type, "Plante") == 0) || (strcmp(attaqueUtilisee.type, "Eau") == 0 && strcmp(pokemonVictime.starter.type, "Feu") == 0) || (strcmp(attaqueUtilisee.type, "Plante") == 0 && strcmp(pokemonVictime.starter.type, "Eau") == 0)){
        faibl = 1.5;
    }
    return faibl;
}


void Baston(attaque attaqueUtilisee, dresseur *perso, dresseur *tour, int etat_combat, int salle_actuelle){
    //Tour dresseur
    if(etat_combat == 0){
        tour[salle_actuelle - 1].starter.pv -= attaquer(attaqueUtilisee, *perso, tour[salle_actuelle - 1]);
    }
    //Tour adverse
    else if(etat_combat == 1){
        srand(time(NULL));
        if (rand()%(100) < 40){
            attaqueUtilisee = tour[salle_actuelle - 1].starter.att[0];
        }
        else{
            attaqueUtilisee = tour[salle_actuelle - 1].starter.att[1];
        }
        perso->starter.pv -= attaquer(attaqueUtilisee, tour[salle_actuelle - 1], *perso);
    }
    sleep(1);
    verifVictoire(perso, tour, salle_actuelle);
}


void verifVictoire(dresseur *perso, dresseur *tour, int salle_actuelle){
    
    if (tour[salle_actuelle - 1].starter.pv <= 0){
        perso->win = 1;
        tour[salle_actuelle - 1].starter.pv = 0;
    }
    else if (perso->starter.pv <= 0){
        perso->win = 2;
        perso->starter.pv = 0;
    }
}


int calculPvMax(dresseur pokemon){
    float pv = pokemon.starter.niveau1.pv + pokemon.starter.rapport.pv * pokemon.starter.niveau;

    if (pokemon.starter.stade == 1){
        pv *= pokemon.starter.coef1.pv;
    }
    if (pokemon.starter.stade == 2){
        pv *= pokemon.starter.coef2.pv;
    }
    return round(pv);
}