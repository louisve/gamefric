#include "affichage.h"

//Initialisation de la structure image

static DonneesImageRGB *image0 = NULL;
static DonneesImageRGB *image1 = NULL;
static DonneesImageRGB *image2 = NULL;

// Création des fonctions

/* Fonction qui initalise les images en utilisant la fonction lisBMPRGB qui renvoie une structure contenant
les informations de l'image.*/

void initImage(){

	image0 = lisBMPRGB("bmp/Menus/ecran-titre.bmp");					
	image1 = lisBMPRGB("bmp/Menus/Menu.bmp");
	image2 = lisBMPRGB("bmp/Menus/menu_pokemon.bmp");
}

/* Fonction qui affiche l'image du menu adéquat en fonction de l'état, cette fonction sera appelé en boucle dans le
 case affichage du main afin d'avoir un effet de "temp réél". */

void afficheImg_menus(int etat){

	switch(etat){
	case 0:
	if (image0 != NULL) // Si l'image a pu etre lue
	{
		// On affiche l'image
		ecrisImage(0, 0, image0->largeurImage, image0->hauteurImage, image0->donneesRGB);
	}
	break;

	case 1:
	if (image1 != NULL) // Si l'image a pu etre lue
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, image1->largeurImage, image1->hauteurImage, image1->donneesRGB); // On affiche l'image
	}
	break;

	case 2:
	if (image2 != NULL) // Si l'image a pu etre lue
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, image2->largeurImage, image2->hauteurImage, image2->donneesRGB); // On affiche l'image
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
