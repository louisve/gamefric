#include "affichage.h"

static DonneesImageRGB *image1 = NULL;
static DonneesImageRGB *image2 = NULL;

//création des fonctions

void initImage(){
	image1 = lisBMPRGB("bmp/Menus/ecran-titre.bmp");						
	image2 = lisBMPRGB("bmp/Menus/Menu.bmp");
}

void affichage(int etat){

	switch(etat){
	case 0:
	if (image1 != NULL) // Si l'image a pu etre lue
				{
						// On affiche l'image
						ecrisImage(0, 0, image1->largeurImage, image1->hauteurImage, image1->donneesRGB);
				}
	break;

	case 1:
	if (image2 != NULL) // Si l'image a pu etre lue
				{
					printf("Etat slkmsldklmsdsdfsdklmqskdmlggggg %i",image2->largeurImage);
					                effaceFenetre (0, 0, 0);

						// On affiche l'image
					ecrisImage(0, 0, image2->largeurImage, image2->hauteurImage, image2->donneesRGB);
				}
	break;
	}
}

int gereClicBoutons(int etat){
	if (etat==0)
	{
		etat = 1;
	}
return etat;
}
