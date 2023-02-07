#include "pokedex.h"

attaque* readAttaque(){
    attaque *tabAtk;
    tabAtk = malloc(NUM_ATTAQUE*sizeof(attaque));
    FILE* f;
    printf("nik\n");
    f = fopen("/home/isen/pokemon/Pokémon/Fonctions/BDD/attaque.txt","r");
    printf("nik 2\n");
    if(f != NULL){
        printf("nik 3\n");
        for (int i = 0; i < NUM_ATTAQUE; ++i)
        {
            printf("nik 4\n");
            fscanf(f, "\nNom : %s\nDégats : %f\nType : %s",tabAtk[i].nom,&tabAtk[i].degats,tabAtk[i].type); 
        }
    }
    printf("nik 5\n");
    fclose(f);
    return tabAtk;
}

Pokemon* readPokedex(){
    Pokemon *tab;
    tab = malloc(NUM_POKEMON*sizeof(Pokemon));
    FILE* f;
    f = fopen("/home/isen/pokemon/Pokémon/Fonctions/BDD/pokedex.txt","r");
    if(f != NULL){
        for (int i = 0; i < NUM_POKEMON; ++i)
        {
            fscanf(f, "\nNom : %s\nType : %s\nNiveau : %f\nPV max : %f\nPV actuels : %f\nAttaque : %f\nDéfense : %f\nAttaque1 : %s\nAttaque 2 : %s\nRapport PV evo0 : %f\nRapport Attaque evo0 : %f\nRapport Défense evo0 : %f\nCoef PV evo1 : %f\nCoef Attaque evo1 : %f\nCoef Défense evo1 : %f\nCoef PV evo2 : %f\nCoef Attaque evo2 : %f\nCoef Défense evo2 : %f",tab[i].nom,tab[i].type,&tab[i].niveau,&tab[i].niveau1.pv,&tab[i].pv,&tab[i].niveau1.atk,&tab[i].niveau1.def,tab[i].att[0].nom,tab[i].att[1].nom,&tab[i].rapport.pv,&tab[i].rapport.atk,&tab[i].rapport.def,&tab[i].coef1.pv,&tab[i].coef1.atk,&tab[i].coef1.def,&tab[i].coef2.pv,&tab[i].coef2.atk,&tab[i].coef2.def);
            
        }
    }
    fclose(f);
    return tab;
}
