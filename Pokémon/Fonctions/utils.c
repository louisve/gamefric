#include "utils.h"




void attaquer(/*char attaque, Pokemon pokedex[], int pokemonAttaquant, int pokemonVictime*/){
    float PuissanceAttaque = 40; // Chercher dans une BDD les degats que font l'attaque en question

    // STATS TESTS
    float atk = 8;
    float defense = 10;
    float niveau = 5;


    // VRAIE FORMULE 
    //int dpsAttaque = ((((((pokemonAttaquant.niveau*2/5)+2)*PuissanceAttaque*pokemonAttaquant.atk/50)/pokemonVictime.defense)+2)*1.5);


    // FORMULE TEST
    float dpsAttaque = ((((((niveau*2/5)+2)*PuissanceAttaque*atk/50)/defense)+2)*1.5);

    dpsAttaque = ceil(dpsAttaque);
    int dps = dpsAttaque;

    printf("L'attaque a fait : %d dégâts.\n",dps);
}