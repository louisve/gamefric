#include "affichage.h"

//Initialisation des structures image

static DonneesImageRGB *accueil = NULL;
static DonneesImageRGB *menu = NULL;
static DonneesImageRGB *choix_pk = NULL;
static DonneesImageRGB *choix_perso = NULL;
static DonneesImageRGB *salle1 = NULL;
static DonneesImageRGB *persoFace1 = NULL;
static DonneesImageRGB *persoFace2 = NULL;
static DonneesImageRGB *persoFace3 = NULL;
static DonneesImageRGB *persoFace4 = NULL;
static DonneesImageRGB *persoFace5 = NULL;
static DonneesImageRGB *persoFace6 = NULL;
// static DonneesImageRGB *salle2 = NULL;
// static DonneesImageRGB *salle3 = NULL;
// static DonneesImageRGB *salle4 = NULL;
// static DonneesImageRGB *salle5 = NULL;
// static DonneesImageRGB *salle6 = NULL;
// static DonneesImageRGB *salle7 = NULL;

//création des fonctions

/* Fonction qui initalise les images en utilisant la fonction lisBMPRGB qui renvoie une structure contenant
les informations de l'image.*/

void initImage(){

	accueil = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Menus/accueil.bmp");					
	menu = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Menus/menu.bmp");
	choix_pk = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Menus/choix_pk.bmp");
	choix_perso = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Menus/choix_perso.bmp");
	salle1 = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Etages/salle1.bmp");
	persoFace1 = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Perso/perso1/face_fixe.bmp");
	persoFace2 = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Perso/perso2/face_fixe.bmp");
	persoFace3 = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Perso/perso3/face_fixe.bmp");
	persoFace4 = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Perso/perso4/face_fixe.bmp");
	persoFace5 = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Perso/perso5/face_fixe.bmp");
	persoFace6 = lisBMPRGB("/home/isen/pokemon/Pokémon/bmp/Perso/perso6/face_fixe.bmp");
	// salle2 = lisBMPRGB("bmp/Etages/salle2.bmp");
    // salle3 = lisBMPRGB("bmp/Etages/salle3.bmp");
    // salle4 = lisBMPRGB("bmp/Etages/salle4.bmp");
    // salle5 = lisBMPRGB("bmp/Etages/salle5.bmp");
    // salle6 = lisBMPRGB("bmp/Etages/salle6.bmp");
    // salle7 = lisBMPRGB("bmp/Etages/salle7.bmp");

}

/* Fonction qui affiche l'image du menu adéquat en fonction de l'état, cette fonction sera appelé en boucle dans le
 case affichage du main afin d'avoir un effet de "temp réél". */

void afficheImg_menus(int etat,int *placex,int *placey, dresseur *perso ){

	switch(etat){
	case 0:
	if (accueil != NULL) // Si l'image a pu etre lue
	{
		// On affiche l'image
		ecrisImage(0, 0, accueil->largeurImage, accueil->hauteurImage, accueil->donneesRGB);
	}
	break;

	case 1:
	if (menu != NULL) // Si l'image a pu etre lue
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, menu->largeurImage, menu->hauteurImage, menu->donneesRGB); // On affiche l'image
	}
	break;

	case 2:
	if (choix_pk != NULL) // Si l'image a pu etre lue
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk->largeurImage, choix_pk->hauteurImage, choix_pk->donneesRGB); // On affiche l'image
	}
	break;

	case 3:
	if (choix_perso != NULL) // Si l'image a pu etre lue
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso->largeurImage, choix_perso->hauteurImage, choix_perso->donneesRGB); // On affiche l'image
	}
	break;

	case 4:
	if (salle1 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle1->largeurImage, salle1->hauteurImage, salle1->donneesRGB);
		if(strcmp(perso->nom,"Perso 1.1") == 0){
			affichePerso(placex, placey, persoFace1);
		}
		else if(strcmp(perso->nom,"Perso 1.2") == 0){
			affichePerso(placex, placey, persoFace2);
		}
		else if(strcmp(perso->nom,"Perso 1.3") == 0){
			affichePerso(placex, placey, persoFace3);
		}
		else if(strcmp(perso->nom,"Perso 2.1") == 0){
			affichePerso(placex, placey, persoFace4);
		}
		else if(strcmp(perso->nom,"Perso 2.2") == 0){
			affichePerso(placex, placey, persoFace5);
		}
		else if(strcmp(perso->nom,"Perso 2.3") == 0){
			affichePerso(placex, placey, persoFace6);
		}
	}
	break;

	}
}

/* Fonction qui va prendre en argument un état et qui va renvoyer un autre état en fonction des
 coordonnées de la souris (CAD en fonction du bouton du menu sur lequel on se trouvera lors du click). */

int gereClicBoutons(int etat,Pokemon *pokedex, Pokemon *starter, dresseur *perso){

	if (etat == 0) // Si on est sur l'écran titre :
	{
		etat = 1; // on passe au menu
	}
	
	else if (etat == 1) // Si on est dans le menu :
	{
		if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375)
		{
			exit(0); // si coordonnées souris = bouton " quitter " alors on quitte.
		}
		if(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640)
		{
			etat = 2; // si coordonnées souris = bouton " charger une partie " alors etat = 2 (on change d'image).
		}
		if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903) 
		{
			etat = 2; // si coordonnées souris = bouton " lancer une partie " alors etat = 2 (on change d'image).
		}
	}

	else if(etat == 2){
		//Bulbizar
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			initPk("Bulbizarre",pokedex,starter);
			etat = 3;

		};
		//salameche
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			
			initPk("Salamèche",pokedex,starter);
			etat = 3;
		};
		//carapuce
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			initPk("Carapuce",pokedex,starter);
			etat = 3;

		};
		//germignon
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			initPk("Germignon",pokedex,starter);
			etat = 3;
		};
		//hericendre
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			initPk("Héricendre",pokedex,starter);
			etat = 3;
		};
		//kaiminus
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			initPk("Kaiminus",pokedex,starter);
			etat = 3;
		};
		//tortipouss
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			initPk("Tortipouss",pokedex,starter);
			etat = 3;
		};
		//ouisticram
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			initPk("Ouisticram",pokedex,starter);
			etat = 3;
		};
		//tiplouf
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			initPk("Tiplouf",pokedex,starter);
			etat = 3;
		};
		//vipelierre
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			initPk("Vipélierre",pokedex,starter);
			etat = 3;
		};
		//gruikui
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			initPk("Gruikui",pokedex,starter);
			etat = 3;
		};
		//moustillon
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			initPk("Moustillon",pokedex,starter);
			etat = 3;
		};
				printf("\n\nNom : %s\nType : %s\nNiveau : %f\nPV max : %f\nPV actuels : %f\nAttaque : %f\nDéfense : %f\nAttaque1 : %s\nAttaque 2 : %s\nRapport PV evo0 : %f\nRapport Attaque evo0 : %f\nRapport Défense evo0 : %f\nCoef PV evo1 : %f\nCoef Attaque evo1 : %f\nCoef Défense evo1 : %f\nCoef PV evo2 : %f\nCoef Attaque evo2 : %f\nCoef Défense evo2 : %f",starter->nom,starter->type,starter->niveau,starter->niveau1.pv,starter->pv,starter->niveau1.atk,starter->niveau1.def,starter->att[0].nom,starter->att[1].nom,starter->rapport.pv,starter->rapport.atk,starter->rapport.def,starter->coef1.pv,starter->coef1.atk,starter->coef1.def,starter->coef2.pv,starter->coef2.atk,starter->coef2.def);


	}

	else if(etat == 3){
		//perso 1.1
		if(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			initDresseur("Perso 1.1",perso,starter);
			etat = 4;
		}
		//perso 1.2
		if(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 4;
			initDresseur("Perso 1.2",perso,starter);
		}
		//perso 1.3
		if(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 4;
			initDresseur("Perso 1.3",perso,starter);
		}
		//perso 2.1
		if(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 4;
			initDresseur("Perso 2.1",perso,starter);
		}
		//perso 2.2
		if(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 4;
			initDresseur("Perso 2.2",perso,starter);
		}
		//perso 2.3
		if(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 4;
			initDresseur("Perso 2.3",perso,starter);
		}
		printf("\nNom : %s\nEtage : %d\nStarter : %s\n",perso->nom,perso->etage,perso->equipe[0].nom);
	}

return etat;
}

/* Fonction  servant à définir si la souris survole un des 2 premiers éléments du menu, si oui, on affiche l'image variante
au survol de la souris. Cette fonction sera appelé dans la case "souris" du main qui gère les déplacements de la souris.*/

void deplacement_souris_varianteMenu(int etat){
	if (etat == 1) // Si on est dans le menu :
	{
		//while(etat)
		if(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640)
		{
			printf("tamere2");
		}
	}
}

/*Fonction qui permet d'afficher le personnage je pense qu'elle est temporaire
plus tard le perso sera peut-etre afficher dans une autre fonction
*/

void affichePerso(int *placex, int *placey, DonneesImageRGB *persoFace){
	
	if(persoFace != NULL){
		ecrisImage(*placex, *placey, persoFace->largeurImage, persoFace->hauteurImage, persoFace->donneesRGB);
	}
	
	
}

void initPk(char *name,Pokemon *pokedex,Pokemon *starter){
	int i = 0;
	while(strcmp(name,pokedex[i].nom) != 0){
		i ++;
	}
	strcpy(starter->nom,pokedex[i].nom);
	strcpy(starter->type,pokedex[i].type);
	
	starter->niveau = pokedex[i].niveau;
	starter->stade = pokedex[i].stade;
	starter->niveau1 = pokedex[i].niveau1;
	starter->coef1 = pokedex[i].coef1;
	starter->coef2 = pokedex[i].coef2;
	starter->pv = pokedex[i].pv;
	starter->att[0] = pokedex[i].att[0];
	starter->att[1] = pokedex[i].att[1];

}

void initDresseur(char *name,dresseur *perso, Pokemon *starter){

	strcpy(perso->nom,name);
	perso->etage = 0;
	perso->equipe[0] = *starter;
}