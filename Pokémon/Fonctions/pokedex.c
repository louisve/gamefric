#include "pokedex.h"
#include <assert.h>

attaque* readAttaque(){
    attaque *tabAtk;
    tabAtk = calloc(NUM_ATTAQUE, sizeof(attaque));
    FILE* f;
    f = fopen("/home/isen/ProjetS4/v16/Fonctions/BDD/attaque.txt","r");
    if(f != NULL){
        for (int i = 0; i < NUM_ATTAQUE; ++i)
        {
            if( fscanf(f, "\nNom : %s\nDegats : %f\nType : %s"
            ,tabAtk[i].nom,&tabAtk[i].degats,tabAtk[i].type) != 3){
                printf("readAttaque(%d)     Impossible\n",i);
                exit(1);
            }
        }
        fclose(f);
    }
    return tabAtk;
}

Pokemon* readPokedex(){
    Pokemon *tab;
    tab = calloc(NUM_POKEMON, sizeof(Pokemon));
    FILE* f;
    f = fopen("/home/isen/ProjetS4/v16/Fonctions/BDD/pokedex.txt","r");
    if(f != NULL){
        for (int i = 0; i < NUM_POKEMON; ++i)
        {
            if (fscanf(f, "\nNom : %s\nType : %s\nNiveau : %f\nPV max : %f\nPV actuels : %f\nAttaque : %f\nDefense : %f\nAttaque1 : %s\nAttaque 2 : %s\n"
            "Rapport PV evo0 : %f\nRapport Attaque evo0 : %f\nRapport Defense evo0 : %f\nCoef PV evo1 : %f\nCoef Attaque evo1 : %f\nCoef Defense evo1 : %f\n"
            "Coef PV evo2 : %f\nCoef Attaque evo2 : %f\nCoef Defense evo2 : %f",tab[i].nom,tab[i].type,&tab[i].niveau,&tab[i].niveau1.pv,&tab[i].pv,
            &tab[i].niveau1.atk,&tab[i].niveau1.def,tab[i].att[0].nom,tab[i].att[1].nom,&tab[i].rapport.pv,&tab[i].rapport.atk,&tab[i].rapport.def,&tab[i].coef1.pv,
            &tab[i].coef1.atk,&tab[i].coef1.def,&tab[i].coef2.pv,&tab[i].coef2.atk,&tab[i].coef2.def) != 18){
                printf("readPokedex(%d)     Impossible\n",i);
                exit(1);
            }
            
        }
    fclose(f);
    }
    return tab;
}

dresseur* readTour(Pokemon *pokedex, attaque *tabAtk){
    dresseur *tab;
    tab = calloc(NB_DRESSEUR_TOUR, sizeof(dresseur));
    FILE* f;
    f = fopen("/home/isen/ProjetS4/v16/Fonctions/BDD/tour.txt","r");
    if(f != NULL){
        for (int i = 0; i < NB_DRESSEUR_TOUR; ++i)
        {
            if (fscanf(f, "\nNom : %s\nEtage : %d\nStatut : %s\nWin : %d\nNom : %s",
            tab[i].nom,&tab[i].etage,tab[i].statut,&tab[i].win,tab[i].starter.nom) != 5){
                printf("readTour(%d)     Impossible\n",i);
                exit(1);
            }
            else{
                initPk(tab[i].starter.nom, pokedex, &tab[i].starter, tabAtk, tab[i].etage);
            }
        }
    fclose(f);
    }
    return tab; 
}

void initPk(char *name,Pokemon *pokedex,Pokemon *starter, attaque *tabAtk, int salle_actuelle){

    if (name == NULL || pokedex == NULL || starter == NULL || tabAtk == NULL) {
        printf("ERROR!\n");
        exit(1);
    }

	int i = 0;
	while(i < NUM_POKEMON && strcmp(name,pokedex[i].nom) != 0){
		i ++;
	}
    assert(i < NUM_POKEMON);

	strcpy(starter->nom,pokedex[i].nom);
	strcpy(starter->type,pokedex[i].type);
	starter->niveau = pokedex[i].niveau * 5 * salle_actuelle;
	starter->niveau1 = pokedex[i].niveau1;
    starter->rapport = pokedex[i].rapport;
	starter->coef1 = pokedex[i].coef1;
	starter->coef2 = pokedex[i].coef2;

    //Calcul PV & stade
    starter->stade = 0;
    starter->pv = starter->niveau1.pv + starter->rapport.pv * starter->niveau;
    if (starter->niveau >= 32){
        starter->stade = 2;
        starter->pv *= starter->coef2.pv;
    }
    else if(starter->niveau >= 16 && starter->niveau < 32){
        starter->stade = 1;
        starter->pv *= starter->coef1.pv;
    }
    starter->pv = round(starter->pv);

    //Attribution des attaques
    for(int k = 0; k < NB_ATK; k++){
        int j = 0;
        while(j < NUM_ATTAQUE && strcmp(pokedex[i].att[k].nom, tabAtk[j].nom) != 0){
            j++;
        }
        assert(j < NUM_ATTAQUE);
        starter->att[k] = tabAtk[j];
    }
}


void initDresseur(char *name,dresseur *perso, Pokemon *starter){
	strcpy(perso->nom,name);
	perso->etage = 0;
	perso->starter = *starter;
    strcpy(perso->statut, "Dresseur");
    perso->etage = 1;
}