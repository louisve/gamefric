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
static DonneesImageRGB *choix_pk_1_1 = NULL;
static DonneesImageRGB *choix_pk_1_2 = NULL;
static DonneesImageRGB *choix_pk_1_3 = NULL;
static DonneesImageRGB *choix_pk_1_4 = NULL;
static DonneesImageRGB *choix_pk_2_1 = NULL;
static DonneesImageRGB *choix_pk_2_2 = NULL;
static DonneesImageRGB *choix_pk_2_3 = NULL;
static DonneesImageRGB *choix_pk_2_4 = NULL;
static DonneesImageRGB *choix_pk_3_1 = NULL;
static DonneesImageRGB *choix_pk_3_2 = NULL;
static DonneesImageRGB *choix_pk_3_3 = NULL;
static DonneesImageRGB *choix_pk_3_4 = NULL;
static DonneesImageRGB *choix_perso_1_1 = NULL;
static DonneesImageRGB *choix_perso_1_2 = NULL;
static DonneesImageRGB *choix_perso_1_3 = NULL;
static DonneesImageRGB *choix_perso_2_1 = NULL;
static DonneesImageRGB *choix_perso_2_2 = NULL;
static DonneesImageRGB *choix_perso_2_3 = NULL;
static DonneesImageRGB *combat_att1 = NULL;
static DonneesImageRGB *combat_att2 = NULL;
static DonneesImageRGB *combat_quitter = NULL;
static DonneesImageRGB *menu_pause = NULL;
static DonneesImageRGB *pause_quitter = NULL;
static DonneesImageRGB *pause_reprendre = NULL;
static DonneesImageRGB *pause_sauvegarder = NULL;

// Création des fonctions

/*Fonction d'affectation des images à la structure image. */
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
	combat = lisBMPRGB("bmp/Menus/combat/combat.bmp");
	choix_pk_1_1 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_1.1.bmp");
	choix_pk_1_2 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_1.2.bmp");
	choix_pk_1_3 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_1.3.bmp");
	choix_pk_1_4 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_1.4.bmp");
	choix_pk_2_1 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_2.1.bmp");
	choix_pk_2_2 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_2.2.bmp");
	choix_pk_2_3 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_2.3.bmp");
	choix_pk_2_4 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_2.4.bmp");
	choix_pk_3_1 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_3.1.bmp");
	choix_pk_3_2 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_3.2.bmp");
	choix_pk_3_3 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_3.3.bmp");
	choix_pk_3_4 = lisBMPRGB("bmp/Menus/pk_survol/choix_pk_3.4.bmp");
	choix_perso_1_1 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_1.1.bmp");
	choix_perso_1_2 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_1.2.bmp");
	choix_perso_1_3 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_1.3.bmp");
	choix_perso_2_1 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_2.1.bmp");
	choix_perso_2_2 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_2.2.bmp");
	choix_perso_2_3 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_2.3.bmp");
	combat_att1 = lisBMPRGB("bmp/Menus/combat/combat_att1.bmp");
	combat_att2 = lisBMPRGB("bmp/Menus/combat/combat_att2.bmp");
	combat_quitter = lisBMPRGB("bmp/Menus/combat/combat_quitter.bmp");
	menu_pause = lisBMPRGB("bmp/Menus/pause/menu_pause.bmp");
	pause_quitter = lisBMPRGB("bmp/Menus/pause/pause_quitter.bmp");
	pause_reprendre = lisBMPRGB("bmp/Menus/pause/pause_reprendre.bmp");
	pause_sauvegarder = lisBMPRGB("bmp/Menus/pause/pause_sauvegarder.bmp");
}

/* Fonction qui affiche l'image du menu adéquat en fonction de l'état, cette fonction sera appelé en boucle dans le 
	case [Affichage:] du switch(evenement) afin de créer une interractivité avec l'utilisateur.  */

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
	case 17:
	if(choix_pk_1_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_1_1->largeurImage, choix_pk_1_1->hauteurImage, choix_pk_1_1->donneesRGB);
	}
	break;
	case 18:
	if(choix_pk_1_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_1_2->largeurImage, choix_pk_1_2->hauteurImage, choix_pk_1_2->donneesRGB);
	}
	break;
	case 19:
	if(choix_pk_1_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_1_3->largeurImage, choix_pk_1_3->hauteurImage, choix_pk_1_3->donneesRGB);
	}
	break;
	case 20:
	if(choix_pk_1_4 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_1_4->largeurImage, choix_pk_1_4->hauteurImage, choix_pk_1_4->donneesRGB);
	}
	break;
	case 21:
	if(choix_pk_2_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_2_1->largeurImage, choix_pk_2_1->hauteurImage, choix_pk_2_1->donneesRGB);
	}
	break;
	case 22:
	if(choix_pk_2_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_2_2->largeurImage, choix_pk_2_2->hauteurImage, choix_pk_2_2->donneesRGB);
	}
	break;
	case 23:
	if(choix_pk_2_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_2_3->largeurImage, choix_pk_2_3->hauteurImage, choix_pk_2_3->donneesRGB);
	}
	break;
	case 24:
	if(choix_pk_2_4 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_2_4->largeurImage, choix_pk_2_4->hauteurImage, choix_pk_2_4->donneesRGB);
	}
	break;
	case 25:
	if(choix_pk_3_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_3_1->largeurImage, choix_pk_3_1->hauteurImage, choix_pk_3_1->donneesRGB);
	}
	break;
	case 26:
	if(choix_pk_3_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_3_2->largeurImage, choix_pk_3_2->hauteurImage, choix_pk_3_2->donneesRGB);
	}
	break;
	case 27:
	if(choix_pk_3_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_3_3->largeurImage, choix_pk_3_3->hauteurImage, choix_pk_3_3->donneesRGB);
	}
	break;
	case 28:
	if(choix_pk_3_4 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_3_4->largeurImage, choix_pk_3_4->hauteurImage, choix_pk_3_4->donneesRGB);
	}
	break;
	case 29:
	if(choix_perso_1_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_1_1->largeurImage, choix_perso_1_1->hauteurImage, choix_perso_1_1->donneesRGB);
	}
	break;
	case 30:
	if(choix_perso_1_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_1_2->largeurImage, choix_perso_1_2->hauteurImage, choix_perso_1_2->donneesRGB);
	}
	break;
	case 31:
	if(choix_perso_1_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_1_3->largeurImage, choix_perso_1_3->hauteurImage, choix_perso_1_3->donneesRGB);
	}
	break;
	case 32:
	if(choix_perso_2_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_2_1->largeurImage, choix_perso_2_1->hauteurImage, choix_perso_2_1->donneesRGB);
	}
	break;
	case 33:
	if(choix_perso_2_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_2_2->largeurImage, choix_perso_2_2->hauteurImage, choix_perso_2_2->donneesRGB);
	}
	break;
	case 34:
	if(choix_perso_2_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_2_3->largeurImage, choix_perso_2_3->hauteurImage, choix_perso_2_3->donneesRGB);
	}
	break;
	case 35:
	if(combat_att1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat_att1->largeurImage, combat_att1->hauteurImage, combat_att1->donneesRGB);
	}
	break;
	case 36:
	if(combat_att2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat_att2->largeurImage, combat_att2->hauteurImage, combat_att2->donneesRGB);
	}
	break;
	case 37:
	if(combat_quitter != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat_quitter->largeurImage, combat_quitter->hauteurImage, combat_quitter->donneesRGB);
	}
	break;
	case 38:
	if(menu_pause != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, menu_pause->largeurImage, menu_pause->hauteurImage, menu_pause->donneesRGB);
	}
	break;
	case 39:
	if(pause_reprendre != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, pause_reprendre->largeurImage, pause_reprendre->hauteurImage, pause_reprendre->donneesRGB);
	}
	break;
	case 40:
	if(pause_sauvegarder != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, pause_sauvegarder->largeurImage, pause_sauvegarder->hauteurImage, pause_sauvegarder->donneesRGB);
	}
	break;
	case 41:
	if(pause_quitter != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, pause_quitter->largeurImage, pause_quitter->hauteurImage, pause_quitter->donneesRGB);
	}
	break;
	case 42: //case pour tout les boutons quitter.
		libereDonneesImageRGB(&accueil); //-> On libère les données images proprement puis on termine la boucle evenement.
		libereDonneesImageRGB(&menu);
		libereDonneesImageRGB(&choix_pk);
		libereDonneesImageRGB(&choix_perso);
		libereDonneesImageRGB(&variante_menu_1);
		libereDonneesImageRGB(&variante_menu_2); 
		libereDonneesImageRGB(&variante_menu_3);
		libereDonneesImageRGB(&persoFace1);
		libereDonneesImageRGB(&persoFace2);
		libereDonneesImageRGB(&persoFace3);
		libereDonneesImageRGB(&persoFace4);
		libereDonneesImageRGB(&persoFace5);
		libereDonneesImageRGB(&persoFace6);
		libereDonneesImageRGB(&salle1);
		libereDonneesImageRGB(&salle2);
		libereDonneesImageRGB(&salle3);
		libereDonneesImageRGB(&salle4);
		libereDonneesImageRGB(&salle5);
		libereDonneesImageRGB(&salle6);
		libereDonneesImageRGB(&salle7);
		libereDonneesImageRGB(&salle8);
		libereDonneesImageRGB(&combat);
		libereDonneesImageRGB(&choix_pk_1_1);
		libereDonneesImageRGB(&choix_pk_1_2);
		libereDonneesImageRGB(&choix_pk_1_3);
		libereDonneesImageRGB(&choix_pk_1_4);
		libereDonneesImageRGB(&choix_pk_2_1);
		libereDonneesImageRGB(&choix_pk_2_2);
		libereDonneesImageRGB(&choix_pk_2_3);
		libereDonneesImageRGB(&choix_pk_2_4);
		libereDonneesImageRGB(&choix_pk_3_1);
		libereDonneesImageRGB(&choix_pk_3_2);
		libereDonneesImageRGB(&choix_pk_3_3);
		libereDonneesImageRGB(&choix_pk_3_4);
		libereDonneesImageRGB(&choix_perso_1_1);
		libereDonneesImageRGB(&choix_perso_1_2);
		libereDonneesImageRGB(&choix_perso_1_3);
		libereDonneesImageRGB(&choix_perso_2_1);
		libereDonneesImageRGB(&choix_perso_2_2);
		libereDonneesImageRGB(&choix_perso_2_3);
		libereDonneesImageRGB(&combat_att1);
		libereDonneesImageRGB(&combat_att2);
		libereDonneesImageRGB(&combat_quitter);
		libereDonneesImageRGB(&menu_pause);
		libereDonneesImageRGB(&pause_quitter);
		libereDonneesImageRGB(&pause_reprendre);
		libereDonneesImageRGB(&pause_sauvegarder);
		termineBoucleEvenements(); 
	break;
	}
}

 /* Fonction permettant la gestion des clics de la souris en fonction du menu sur lequel on se trouve
 	et en fonction de l'élément survolé lors du clic par l'user. Cette fonction est appelé dans le case [BoutonSouris] 
 	du switch(evenement) dès qu'il y a un appui sur le bouton gauche de la souris. */

int gereClicBoutons(int etat, Pokemon *pokedex,Pokemon *starter, dresseur *perso){
	
	if (etat == 0) // Si on est sur l'écran titre :
	{
		etat = 1; // et qu'on clic ou qu'on appui sur entrée, on passe au menu.
	}
	else if(etat == 17) // si on clic sur l'un des pokemon on init sa structure et on change d'état (on passe au choix dresseur).
	{
		//Bulbizar
			initPk("Bulbizarre",pokedex,starter);
			etat = 6;
	}
	else if(etat == 21) //salameche
	{
		initPk("Salamèche",pokedex,starter);
		etat = 6;
	}
	else if(etat == 25) //carapuce
	{
		initPk("Carapuce",pokedex,starter);
		etat = 6;
	}
	else if(etat == 18) //germignon
	{
		initPk("Germignon",pokedex,starter);
		etat = 6;
	}
	else if(etat == 28) //moustillon
	{
		initPk("Moustillon",pokedex,starter);
		etat = 6;
	}
	else if(etat == 22) //hericendre
	{
		initPk("Héricendre",pokedex,starter);
		etat = 6;
	}
	else if(etat == 26) //kaiminus
	{
		initPk("Kaiminus",pokedex,starter);
		etat = 6;
	}
	else if(etat == 19) //tortipouss
	{
		initPk("Tortipouss",pokedex,starter);
		etat = 6;
	}
	else if(etat == 23) //ouisticram
	{
		initPk("Ouisticram",pokedex,starter);
		etat = 6;
	}
	else if(etat == 27) //tiplouf
	{
		initPk("Tiplouf",pokedex,starter);
		etat = 6;
	}
	else if(etat == 20) //vipelierre
	{
		initPk("Vipélierre",pokedex,starter);
		etat = 6;
	}
	else if(etat == 24) //gruikui
	{
		initPk("Gruikui",pokedex,starter);
		etat = 6;	
	}
	else if (etat == 3) // Si on est dans le menu de base sur le bouton "lancer une partie" : ->
	{
		etat = 2;	//-> et qu'on clic, on affiche l'image de l'état 2.
	}
	else if (etat == 4) // Si on est dans le menu de base sur le bouton "charger une partie" : ->
	{
		etat = 2; //-> et qu'on clic, on affiche l'image de l'état 2.
	}
	else if (etat == 5) // Si on est dans le menu de base sur le bouton "quitter" : ->
	{
		etat = 42; // renvoie au case '42' pour libéré les données images.
	}
	else if(etat == 29) // si on clic sur l'un des dresseurs on init sa structure et on change d'état (on affiche la salle 1).
	{
			//perso 1.1
				initDresseur("Perso 1.1",perso,starter);
				etat = 7;
		}
	else if(etat == 30) //perso 1.2
	{
		etat = 7;
		initDresseur("Perso 1.2",perso,starter);
	}
	else if(etat == 31) //perso 1.3
	{	
		etat = 7;
		initDresseur("Perso 1.3",perso,starter);
	}
	else if(etat == 32) //perso 2.1
	{
		etat = 7;
		initDresseur("Perso 2.1",perso,starter);
	}
	else if(etat == 33) //perso 2.2
	{
		etat = 7;
		initDresseur("Perso 2.2",perso,starter);
	}
	else if(etat == 34) //perso 2.3
	{
		etat = 7;
		initDresseur("Perso 2.3",perso,starter);
	}
	else if(etat == 35) //menu combat 1 
	{
		etat = 16; //menu combat bouton attaque 1
	}
	else if(etat == 36) //menu combat 2
	{
		etat = 16; //menu combat bouton attaque 2
	}
	else if(etat == 37) //menu combat 3
	{
		etat = 42; //menu combat bouton quitter (renvoie au case '42' pour libéré les données images.)
	}
	else if(etat == 39) // Si on est sur le menu pause ->
	{
		printf("reprendre"); //->et qu'on clic sur reprendre (!!!Pour l'instant printf)
	}
	else if(etat == 40) // Si on est sur le menu pause ->
	{
		printf("sauvegarder"); //->et qu'on clic sur sauvegarder (!!!Pour l'instant printf)
	}
	else if(etat == 41) // Si on est sur le menu pause ->
	{
		etat = 42; //et qu'on clic sur quitter on renvoie au case'42' qui libere la structure image et termine la boucle evenement.
	}
return etat;
}

/* Fonction  servant à définir si la souris survole un des éléments du menu, si oui, on affiche l'image variante
au survol de la souris. Cette fonction sera appelé dans le case [souris] du switch(evenement) qui gère les déplacements de la souris.
Il a fallu pour ce faire apppeler la fonction "activeGestionDeplacementPassifSouris()" pour suivre la souris en continu. */

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
	else if(etat==4) // si on est sur l'image variante2 du menu de base ->
	{
		if(!(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640))
		{
			etat = 1; //-> et que nous ne sommes pas sur le bouton "charger une partie", retour à l'image de l'état 1.
		}
	}
	else if(etat==3) // si on est sur l'image variante1 du menu de base ->
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903))
		{
			etat = 1; //-> et que nous ne sommes pas sur le bouton "lancer une partie", retour à l'image de l'état 1.
		}
	}
	else if(etat==5) // si on est sur l'image variante3 du menu de base ->
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375))
		{
			etat = 1; //-> et que nous ne sommes pas sur le bouton "quitter", retour à l'image de l'état 1.
		}
	}
	else if(etat == 2) //menu choix pokemons.
	{
		//Bulbizar
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 17;
		}
		//salameche
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 21;
		}
		//carapuce
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 25;
		}
		//germignon
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 18;
		}
		//hericendre
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 22;
		}
		//kaiminus
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 26;
		}
		//tortipouss
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 19;
		}
		//ouisticram
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 23;
		}
		//tiplouf
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 27;
		}
		//vipelierre
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 20;
		}
		//gruikui
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 24;
		};
		//moustillon
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 28;
		}
	}
	else if(etat == 6) //menu choix perso.
	{
		//perso 1.1
		if(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 29;
		}
		//perso 1.2
		if(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 30;
		}
		//perso 1.3
		if(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 31;
		}
		//perso 2.1
		if(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 32;
		} 
		//perso 2.2
		if(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 33;
		}
		//perso 2.3
		if(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 34;
		}
	}
	else if(etat == 15) // menu combat.
	{
		if(abscisseSouris() >= 96 && abscisseSouris() <= 608 && ordonneeSouris() >= 86 && ordonneeSouris() <= 212)
		{
			etat = 35; //bouton attaque 1
		}
		if(abscisseSouris() >= 658 && abscisseSouris() <= 1174 && ordonneeSouris() >= 87 && ordonneeSouris() <= 206)
		{
			etat = 36; //bouton attaque 2
		}
		if(abscisseSouris() >= 1223 && abscisseSouris() <= 1736 && ordonneeSouris() >= 89 && ordonneeSouris() <= 203)
		{
			etat = 37; //bouton quitter
		}
	}
	else if(etat == 38) //Menu Pause
	{
		if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903)
		{
			etat = 39; //bouton Reprendre
		}
		if(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640)
		{
			etat = 40; //bouton Sauvegarder
		}
		if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375)
		{
			etat = 41; //bouton Quitter
		}
	}

	/* Tout les else if qui suivent servent à revenir à l'image d'origine si on n'est plus en train de survoler l'élément. */

	else if(etat == 39)
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903))
		{
			etat = 38;
		}
	}
	else if(etat == 40)
	{
		if(!(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640))
		{
			etat = 38;
		}
	}
	else if(etat == 41)
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375))
		{
			etat = 38;
		}
	}
	else if(etat == 35)
	{
		if(!(abscisseSouris() >= 96 && abscisseSouris() <= 608 && ordonneeSouris() >= 86 && ordonneeSouris() <= 212))
		{
			etat = 15;
		}
	}
	else if(etat == 36)
	{
		if(!(abscisseSouris() >= 658 && abscisseSouris() <= 1174 && ordonneeSouris() >= 87 && ordonneeSouris() <= 206))
		{
			etat = 15;
		}
	}
	else if(etat == 37)
	{
		if(!(abscisseSouris() >= 1223 && abscisseSouris() <= 1736 && ordonneeSouris() >= 89 && ordonneeSouris() <= 203))
		{
			etat = 15;
		}
	}
	else if(etat == 29)
	{
		if(!(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605))
		{
			etat = 6;
		}
	}
	else if(etat == 30)
	{
		if(!(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605))
		{
			etat = 6;
		}
	}
	else if(etat == 31)
	{
		if(!(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605))
		{
			etat = 6;
		}
	}
	else if(etat == 32)
	{
		if(!(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369))
		{
			etat = 6;
		}
	}
	else if(etat == 33)
	{
		if(!(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369))
		{
			etat = 6;
		}
	}
	else if(etat == 34)
	{
		if(!(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369))
		{
			etat = 6;
		}
	}
	else if(etat == 17)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 2;
		}
	}
	else if(etat == 18)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 2;
		}
	}
	else if(etat == 19)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 2;
		}
	}
	else if(etat == 20)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 2;
		}
	}
	else if(etat == 21)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 2;
		}
	}
	else if(etat == 22)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 2;
		}
	}
	else if(etat == 23)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 2;
		}
	}
	else if(etat == 24)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 2;
		}
	}
	else if(etat == 25)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 2;
		}
	}
	else if(etat == 26)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 2;
		}
	}
	else if(etat == 27)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 2;
		}
	}
	else if(etat == 28)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 2;
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
