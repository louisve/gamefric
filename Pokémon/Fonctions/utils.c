#include "utils.h"


float attaquer(attaque attaqueUtilisee, dresseur *pokemonAttaquant, dresseur *pokemonVictime){

    
    float atkAttaquant = pokemonAttaquant->starter.niveau1.atk + (pokemonAttaquant->starter.rapport.atk * (pokemonAttaquant->starter.niveau-1));

    if (pokemonAttaquant->starter.stade == 2){
        atkAttaquant *= pokemonAttaquant->starter.coef1.atk;
    }
    if (pokemonAttaquant->starter.stade == 3){
        atkAttaquant *= pokemonAttaquant->starter.coef2.atk;
    }

    float defVictime = pokemonVictime->starter.niveau1.def + pokemonVictime->starter.rapport.def * pokemonVictime->starter.niveau;

    if (pokemonVictime->starter.stade == 2){
        defVictime *= pokemonVictime->starter.coef1.def;
    }
    if (pokemonAttaquant->starter.stade == 3){
        defVictime *= pokemonVictime->starter.coef2.def;
    }

    int dpsAttaque = ((((((pokemonAttaquant->starter.niveau*2/5)+2)*attaqueUtilisee.degats * atkAttaquant /50)/defVictime)+2)*1.5);

    dpsAttaque = dpsAttaque * FaiblessesResistance(attaqueUtilisee, pokemonVictime);

    dpsAttaque = round(dpsAttaque);

    return dpsAttaque;
}


float FaiblessesResistance(attaque attaqueUtilisee, dresseur *pokemonVictime){
    // Faiblesses et résistance
    float faibl = 0;
    if (strcmp(attaqueUtilisee.type, pokemonVictime->starter.type) == 0 || strcmp(attaqueUtilisee.type, "Normal") == 0){
        faibl = 1;
    }
    else if ((strcmp(attaqueUtilisee.type, "Feu") == 0 && strcmp(pokemonVictime->starter.type, "Eau") == 0) || (strcmp(attaqueUtilisee.type, "Eau") == 0 && strcmp(pokemonVictime->starter.type, "Plante") == 0) || (strcmp(attaqueUtilisee.type, "Plante") == 0 && strcmp(pokemonVictime->starter.type, "Feu") == 0)){
        faibl = 0.5;
        printf("L'attaque n'est pas très efficace.\n");
    }
    else if ((strcmp(attaqueUtilisee.type, "Feu") == 0 && strcmp(pokemonVictime->starter.type, "Plante") == 0) || (strcmp(attaqueUtilisee.type, "Eau") == 0 && strcmp(pokemonVictime->starter.type, "Feu") == 0) || (strcmp(attaqueUtilisee.type, "Plante") == 0 && strcmp(pokemonVictime->starter.type, "Eau") == 0)){
        faibl = 2;
        printf("L'attaque est super efficace.\n");
    }
    return faibl;
}

int Baston(attaque attaqueUtilisee, dresseur *perso, dresseur *tour){

    printf("Ton pokemon a attaque\n");

    tour->starter.pv -= attaquer(attaqueUtilisee, perso, tour);

    printf("Votre attaque a fait %.0f dégâts.\n\n",attaquer(attaqueUtilisee, perso, tour));

    int verif_victoire = verifVictoire(perso, tour);

    if (verif_victoire == 1){
        return verif_victoire;
    }

    sleep(2);

    srand(time(NULL));

    attaqueUtilisee = tour->starter.att[rand()%(2)];
    attaqueUtilisee = tour->starter.att[1];

    printf("Le pokemon adversaire a utilisé %s\n",attaqueUtilisee.nom);

    perso->starter.pv -= attaquer(attaqueUtilisee, tour, perso);

    printf("L'attaque adverse a fait %.0f dégâts.\n\n",attaquer(attaqueUtilisee, tour, perso));

    sleep(2);

    verif_victoire = verifVictoire(perso, tour);

    return verif_victoire;
}

int verifVictoire(dresseur *perso, dresseur *tour){
    int verif_victoire = 0;
    printf("Pokemon adverse pv : %0.f\n",tour->starter.pv);
    printf("Pokemon Dresseur pv : %0.f\n",perso->starter.pv);
    if (tour->starter.pv <= 0){
        verif_victoire = 1;
    }
    else if (perso->starter.pv <= 0){
        verif_victoire = 2;
    }
    return verif_victoire;
}