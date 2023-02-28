#include "pokedex.h"

attaque* readAttaque(){
    attaque *tabAtk;
    tabAtk = malloc(NUM_ATTAQUE*sizeof(attaque));
    FILE* f;
    f = fopen("/home/isen/pokemon/Pokémon/Fonctions/BDD/attaque.txt","r");
    if(f != NULL){
        for (int i = 0; i < NUM_ATTAQUE; ++i)
        {
            fscanf(f, "\nNom : %s\nDégats : %f\nType : %s",tabAtk[i].nom,&tabAtk[i].degats,tabAtk[i].type); 
        }
        fclose(f);
    }
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
    fclose(f);
    }
    return tab;
}


void initPk(char *name,Pokemon *pokedex,Pokemon *starter, attaque *tabAtk){
	int i = 0;
	while(strcmp(name,pokedex[i].nom) != 0){
		i ++;
	}
	strcpy(starter->nom,pokedex[i].nom);
	strcpy(starter->type,pokedex[i].type);
	
	starter->niveau = pokedex[i].niveau;
	starter->stade = 0;
	starter->niveau1 = pokedex[i].niveau1;
    starter->rapport = pokedex[i].rapport;
	starter->coef1 = pokedex[i].coef1;
	starter->coef2 = pokedex[i].coef2;
	starter->pv = pokedex[i].pv;
	starter->att[0] = tabAtk[0];
	starter->att[1] = tabAtk[1];

}

void initDresseur(char *name,dresseur *perso, Pokemon *starter){

	strcpy(perso->nom,name);
	perso->etage = 0;
	perso->starter = *starter;
}

dresseur* initTour(Pokemon *pokedex, attaque *tabAtk){
    dresseur *tour;
    tour = malloc(8*sizeof(dresseur));
    
    //Etage 1     
    Pokemon *pokemon1;
    pokemon1 = malloc(sizeof(Pokemon));
    dresseur *boss1;
    boss1 = malloc(sizeof(dresseur));
    initPk("Moustillon",pokedex,pokemon1,tabAtk);
    initDresseur("Marc",boss1,pokemon1);
    tour[0]= *boss1;
    
    //Etage 2     
    Pokemon *pokemon2;
    pokemon2 = malloc(sizeof(Pokemon));
    dresseur *boss2;
    boss2 = malloc(sizeof(dresseur));
    initPk("Vipélierre",pokedex,pokemon2,tabAtk);
    initDresseur("Rachid",boss2,pokemon2);
    tour[1]= *boss2;
    
    //Etage 3     
    Pokemon *pokemon3;
    pokemon3 = malloc(sizeof(Pokemon));
    dresseur *boss3;
    boss3 = malloc(sizeof(dresseur));
    initPk("Salamèche",pokedex,pokemon3,tabAtk);
    initDresseur("Bastien",boss3,pokemon3);
    tour[1]= *boss3;
    
    //Etage 4     
    Pokemon *pokemon4;
    pokemon4 = malloc(sizeof(Pokemon));
    dresseur *boss4;
    boss4 = malloc(sizeof(dresseur));
    initPk("Ouisticram",pokedex,pokemon4,tabAtk);
    initDresseur("Adriane",boss4,pokemon4);
    tour[3]= *boss4;
    
    //Etage 5     
    Pokemon *pokemon5;
    pokemon5 = malloc(sizeof(Pokemon));
    dresseur *boss5;
    boss5 = malloc(sizeof(dresseur));
    initPk("Tiplouf",pokedex,pokemon5,tabAtk);
    initDresseur("Blue",boss5,pokemon5);
    tour[4]= *boss5;
    
    //Etage 6     
    Pokemon *pokemon6;
    pokemon6 = malloc(sizeof(Pokemon));
    dresseur *boss6;
    boss6 = malloc(sizeof(dresseur));
    initPk("Germignon",pokedex,pokemon6,tabAtk);
    initDresseur("Iris",boss6,pokemon6);
    tour[5]= *boss6;
    
    //Etage 7     
    Pokemon *pokemon7;
    pokemon7 = malloc(sizeof(Pokemon));
    dresseur *boss7;
    boss7 = malloc(sizeof(dresseur));
    initPk("Tortipouss",pokedex,pokemon7,tabAtk);
    initDresseur("Morgane",boss7,pokemon7);
    tour[6]= *boss7;
    
    //Etage 8     
    Pokemon *pokemon8;
    pokemon8 = malloc(sizeof(Pokemon));
    dresseur *boss8;
    boss8 = malloc(sizeof(dresseur));
    initPk("Kaiminus",pokedex,pokemon8,tabAtk);
    initDresseur("Pierre",boss8,pokemon8);
    tour[7]= *boss8;
    return tour;
}