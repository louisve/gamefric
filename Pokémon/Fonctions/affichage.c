#include "affichage.h"

//Initialisation des structures image

static DonneesImageRGB *accueil = NULL;
static DonneesImageRGB *menu = NULL;
static DonneesImageRGB *choix_pk = NULL;
// static DonneesImageRGB *salle1 = NULL;
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

	accueil = lisBMPRGB("bmp/Menus/accueil.bmp");					
	menu = lisBMPRGB("bmp/Menus/menu.bmp");
	choix_pk = lisBMPRGB("bmp/Menus/choix_pk.bmp");
	//salle1 = lisBMPRGB("bmp/Etages/salle1.bmp");
	// salle2 = lisBMPRGB("bmp/Etages/salle2.bmp");
    // salle3 = lisBMPRGB("bmp/Etages/salle3.bmp");
    // salle4 = lisBMPRGB("bmp/Etages/salle4.bmp");
    // salle5 = lisBMPRGB("bmp/Etages/salle5.bmp");
    // salle6 = lisBMPRGB("bmp/Etages/salle6.bmp");
    // salle7 = lisBMPRGB("bmp/Etages/salle7.bmp");

}

/* Fonction qui affiche l'image du menu adéquat en fonction de l'état, cette fonction sera appelé en boucle dans le
 case affichage du main afin d'avoir un effet de "temp réél". */

void afficheImg_menus(int etat){

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
	}
}

/* Fonction qui va prendre en argument un état et qui va renvoyer un autre état en fonction des
 coordonnées de la souris (CAD en fonction du bouton du menu sur lequel on se trouvera lors du click). */

int gereClicBoutons(int etat){
	
	if (etat == 1) // Si on est dans le menu :
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
	else if (etat == 0) // Si on est sur l'écran titre :
	{
		etat = 1; // on passe au menu
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