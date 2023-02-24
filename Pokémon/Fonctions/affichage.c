#include "affichage.h"

//Initialisation des structures image

static DonneesImageRGB *accueil = NULL;
static DonneesImageRGB *menu = NULL;
static DonneesImageRGB *choix_pk = NULL;
static DonneesImageRGB *variante_menu_1 = NULL;
static DonneesImageRGB *variante_menu_2 = NULL;
static DonneesImageRGB *variante_menu_3 = NULL;
static DonneesImageRGB *choix_perso = NULL;
static DonneesImageRGB *persoFace1 = NULL;
static DonneesImageRGB *persoFace2 = NULL;
static DonneesImageRGB *persoFace3 = NULL;
static DonneesImageRGB *persoFace4 = NULL;
static DonneesImageRGB *persoFace5 = NULL;
static DonneesImageRGB *persoFace6 = NULL;
static DonneesImageRGB *salle1 = NULL;
static DonneesImageRGB *salle2 = NULL;
static DonneesImageRGB *salle3 = NULL;
static DonneesImageRGB *salle4 = NULL;
static DonneesImageRGB *salle5 = NULL;
static DonneesImageRGB *salle6 = NULL;
static DonneesImageRGB *salle7 = NULL;
static DonneesImageRGB *salle8 = NULL;
static DonneesImageRGB *combat = NULL;


// Création des fonctions

void initImage(){
	accueil = lisBMPRGB("bmp/Menus/accueil.bmp");					
	menu = lisBMPRGB("bmp/Menus/menu.bmp");
	choix_pk = lisBMPRGB("bmp/Menus/choix_pk.bmp");
	variante_menu_1 = lisBMPRGB("bmp/Menus/menu_variante_1.bmp");
	variante_menu_2 = lisBMPRGB("bmp/Menus/menu_variante_2.bmp");
	variante_menu_3 = lisBMPRGB("bmp/Menus/menu_variante_3.bmp");
	choix_perso = lisBMPRGB("bmp/Menus/choix_perso.bmp");
	persoFace1 = lisBMPRGB("bmp/Perso/perso1/face_fixe.bmp");
	persoFace2 = lisBMPRGB("bmp/Perso/perso2/face_fixe.bmp");
	persoFace3 = lisBMPRGB("bmp/Perso/perso3/face_fixe.bmp");
	persoFace4 = lisBMPRGB("bmp/Perso/perso4/face_fixe.bmp");
	persoFace5 = lisBMPRGB("bmp/Perso/perso5/face_fixe.bmp");
	persoFace6 = lisBMPRGB("bmp/Perso/perso6/face_fixe.bmp");
	salle1 = lisBMPRGB("bmp/Etages/salle1.bmp");
	salle2 = lisBMPRGB("bmp/Etages/salle2.bmp");
    salle3 = lisBMPRGB("bmp/Etages/salle3.bmp");
    salle4 = lisBMPRGB("bmp/Etages/salle4.bmp");
    salle5 = lisBMPRGB("bmp/Etages/salle5.bmp");
    salle6 = lisBMPRGB("bmp/Etages/salle6.bmp");
    salle7 = lisBMPRGB("bmp/Etages/salle7.bmp");
	salle8 = lisBMPRGB("bmp/Etages/salle8.bmp");
	combat = lisBMPRGB("bmp/Menus/combat.bmp");

}

/* Fonction qui affiche l'image du menu adéquat en fonction de l'état, cette fonction sera appelé en boucle dans le  */
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
		if (variante_menu_1 != NULL) // Si l'image a pu etre lue
		{
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, variante_menu_1->largeurImage, variante_menu_1->hauteurImage, variante_menu_1->donneesRGB); // On affiche l'image
		}
		break;

		case 4:
		if (variante_menu_2 != NULL) // Si l'image a pu etre lue
		{
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, variante_menu_2->largeurImage, variante_menu_2->hauteurImage, variante_menu_2->donneesRGB); // On affiche l'image
		}
		break;

		case 5:
		if (variante_menu_3 != NULL) // Si l'image a pu etre lue
		{
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, variante_menu_3->largeurImage, variante_menu_3->hauteurImage, variante_menu_3->donneesRGB); // On affiche l'image
		}
		break;
		case 6:
		if (choix_perso != NULL) // Si l'image a pu etre lue
		{
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, choix_perso->largeurImage, choix_perso->hauteurImage, choix_perso->donneesRGB); // On affiche l'image
		}
		break;

		case 7:
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
		case 8:
		if (salle2 != NULL) {
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, salle2->largeurImage, salle2->hauteurImage, salle2->donneesRGB);
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
		case 9:
		if (salle3 != NULL) {
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, salle3->largeurImage, salle3->hauteurImage, salle3->donneesRGB);
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
		case 10:
		if (salle4 != NULL) {
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, salle4->largeurImage, salle4->hauteurImage, salle4->donneesRGB);
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
		case 11:
		if (salle5 != NULL) {
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, salle5->largeurImage, salle5->hauteurImage, salle5->donneesRGB);
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
		case 12:
		if (salle6 != NULL) {
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, salle6->largeurImage, salle6->hauteurImage, salle6->donneesRGB);
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
		case 13:
		if (salle7 != NULL) {
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, salle7->largeurImage, salle7->hauteurImage, salle7->donneesRGB);
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
		case 14:
		if (salle8 != NULL) {
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, salle8->largeurImage, salle8->hauteurImage, salle8->donneesRGB);
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
		case 15:
		if(combat != NULL)
		{
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, combat->largeurImage, combat->hauteurImage, combat->donneesRGB);
		}
		break;
		case 16:
			effaceFenetre (0, 0, 0);
		break;
		}
}

 /*coordonnées de la souris (CAD en fonction du bouton du menu sur lequel on se trouvera lors du click). */

int gereClicBoutons(int etat, Pokemon *pokedex,Pokemon *starter, dresseur *perso){
	
		if (etat == 0) // Si on est sur l'écran titre :
		{
			etat = 1; // et qu'on clic, on passe au menu.
		}

		else if(etat == 2){
		//Bulbizar
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			initPk("Bulbizarre",pokedex,starter);
			etat = 6;

		};
		//salameche
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			
			initPk("Salamèche",pokedex,starter);
			etat = 6;
		};
		//carapuce
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			initPk("Carapuce",pokedex,starter);
			etat = 6;

		};
		//germignon
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			initPk("Germignon",pokedex,starter);
			etat = 6;
		};
		//hericendre
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			initPk("Héricendre",pokedex,starter);
			etat = 6;
		};
		//kaiminus
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			initPk("Kaiminus",pokedex,starter);
			etat = 6;
		};
		//tortipouss
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			initPk("Tortipouss",pokedex,starter);
			etat = 6;
		};
		//ouisticram
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			initPk("Ouisticram",pokedex,starter);
			etat = 6;
		};
		//tiplouf
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			initPk("Tiplouf",pokedex,starter);
			etat = 6;
		};
		//vipelierre
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			initPk("Vipélierre",pokedex,starter);
			etat = 6;
		};
		//gruikui
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			initPk("Gruikui",pokedex,starter);
			etat = 6;
		};
		//moustillon
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			initPk("Moustillon",pokedex,starter);
			etat = 6;
		};
				printf("\n\nNom : %s\nType : %s\nNiveau : %f\nPV max : %f\nPV actuels : %f\nAttaque : %f\nDéfense : %f\nAttaque1 : %s\nAttaque 2 : %s\nRapport PV evo0 : %f\nRapport Attaque evo0 : %f\nRapport Défense evo0 : %f\nCoef PV evo1 : %f\nCoef Attaque evo1 : %f\nCoef Défense evo1 : %f\nCoef PV evo2 : %f\nCoef Attaque evo2 : %f\nCoef Défense evo2 : %f",starter->nom,starter->type,starter->niveau,starter->niveau1.pv,starter->pv,starter->niveau1.atk,starter->niveau1.def,starter->att[0].nom,starter->att[1].nom,starter->rapport.pv,starter->rapport.atk,starter->rapport.def,starter->coef1.pv,starter->coef1.atk,starter->coef1.def,starter->coef2.pv,starter->coef2.atk,starter->coef2.def);
				}

	else if (etat == 3) // Si on est dans le menu sur le bouton "lancer une partie" :
	{
		etat = 2;
	}
	else if (etat == 4) // Si on est dans le menu sur le bouton "charger une partie" :
	{
		etat = 2; // et qu'on clic, on affiche l'image de l'état 2.
	}
	else if (etat == 5) // Si on est dans le menu sur le bouton "quitter" :
	{
		libereDonneesImageRGB(&accueil);
		libereDonneesImageRGB(&menu);
		libereDonneesImageRGB(&choix_pk);
		libereDonneesImageRGB(&choix_perso);
		libereDonneesImageRGB(&variante_menu_1);
		libereDonneesImageRGB(&variante_menu_2); 
		libereDonneesImageRGB(&variante_menu_3);
		termineBoucleEvenements();
	}
	
		else if(etat == 6)
		{
		//perso 1.1
		if(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			initDresseur("Perso 1.1",perso,starter);
			etat = 7;
		}
		//perso 1.2
		if(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 7;
			initDresseur("Perso 1.2",perso,starter);
		}
		//perso 1.3
		if(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 7;
			initDresseur("Perso 1.3",perso,starter);
		}
		//perso 2.1
		if(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 7;
			initDresseur("Perso 2.1",perso,starter);
		}
		//perso 2.2
		if(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 7;
			initDresseur("Perso 2.2",perso,starter);
		}
		//perso 2.3
		if(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 7;
			initDresseur("Perso 2.3",perso,starter);
		}
		printf("\nNom : %s\nEtage : %d\nStarter : %s\n",perso->nom,perso->etage,perso->starter.nom);
	}
	else if(etat == 15) //menu combat
	{
		if(abscisseSouris() >= 96 && abscisseSouris() <= 608 && ordonneeSouris() >= 86 && ordonneeSouris() <= 212)
		{
			etat = 16; //bouton attaque 1
		}
		if(abscisseSouris() >= 658 && abscisseSouris() <= 1174 && ordonneeSouris() >= 87 && ordonneeSouris() <= 206)
		{
			etat = 16;
		}
		if(abscisseSouris() >= 1223 && abscisseSouris() <= 1736 && ordonneeSouris() >= 89 && ordonneeSouris() <= 203)
		{
			termineBoucleEvenements(); //bouton quitter
		}
	}

return etat;
}


/* Fonction  servant à définir si la souris survole un des éléments du menu, si oui, on affiche l'image variante
au survol de la souris. Cette fonction sera appelé dans le case "souris" du main qui gère les déplacements de la souris.
Il a fallu pour ce faire apppeler la fonction "activeGestionDeplacementPassifSouris()". */

int verif_survol_souris(int etat){
	if (etat==1)
	{
		if(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640)
		{ 
			etat = 4; // si coordonnées souris = bouton " charger une partie " alors etat = 4 (on affiche l'image variante2).
		}
		else if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903)
		{
			etat = 3; // si coordonnées souris = bouton " lancer une partie " alors etat = 3 (on affiche l'image variante1).
		}
		else if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375)
		{
			etat = 5; // si coordonnées souris = bouton " quitter " alors etat = 5 (on affiche l'image variante3).
		}
	}
	else if(etat==4) // si on est sur l'image variante2.
	{
		if(!(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640))
		{
			etat = 1; // et que nous ne sommes pas sur le bouton "charger une partie", retour à l'image de l'état 1.
		}
	}
	else if(etat==3) // si on est sur l'image variante1.
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903))
		{
			etat = 1; // et que nous ne sommes pas sur le bouton "lancer une partie", retour à l'image de l'état 1.
		}
	}
	else if(etat==5) // si on est sur l'image variante3.
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375))
		{
			etat = 1; // et que nous ne sommes pas sur le bouton "quitter", retour à l'image de l'état 1.
		}
	}
	return etat;
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
	perso->starter = *starter;
}
