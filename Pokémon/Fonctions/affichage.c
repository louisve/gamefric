#include "affichage.h"

//Initialisation des structures image

//Images de menu
static DonneesImageRGB *accueil = NULL;
static DonneesImageRGB *menu = NULL;
static DonneesImageRGB *choix_pk = NULL;
static DonneesImageRGB *variante_menu_1 = NULL;
static DonneesImageRGB *variante_menu_2 = NULL;
static DonneesImageRGB *variante_menu_3 = NULL;
static DonneesImageRGB *choix_perso = NULL;
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
static DonneesImageRGB *combat = NULL;
static DonneesImageRGB *victoire_combat = NULL;
static DonneesImageRGB *defaite_combat = NULL;

//Images personnage
static DonneesImageRGB *persoFace1 = NULL;
static DonneesImageRGB *persoFace2 = NULL;
static DonneesImageRGB *persoFace3 = NULL;
static DonneesImageRGB *persoFace4 = NULL;
static DonneesImageRGB *persoFace5 = NULL;
static DonneesImageRGB *persoFace6 = NULL;

//Images salles/niveau
static DonneesImageRGB *salle1 = NULL;
static DonneesImageRGB *salle2 = NULL;
static DonneesImageRGB *salle3 = NULL;
static DonneesImageRGB *salle4 = NULL;
static DonneesImageRGB *salle5 = NULL;
static DonneesImageRGB *salle6 = NULL;
static DonneesImageRGB *salle7 = NULL;
static DonneesImageRGB *salle8 = NULL;

//Images Boss
static DonneesImageRGB *salle1_marc = NULL;
static DonneesImageRGB *salle2_rachid = NULL;
static DonneesImageRGB *salle3_bastien = NULL;
static DonneesImageRGB *salle4_adriane = NULL;
static DonneesImageRGB *salle5_blue = NULL;
static DonneesImageRGB *salle6_iris = NULL;
static DonneesImageRGB *salle7_morgane = NULL;
static DonneesImageRGB *salle8_pierre = NULL;

//Images Pokemons
static DonneesImageRGB *bulbizarre = NULL;
static DonneesImageRGB *bulbizarre_dos = NULL;
static DonneesImageRGB *salameche = NULL;
static DonneesImageRGB *salameche_dos = NULL;
static DonneesImageRGB *carapuce = NULL;
static DonneesImageRGB *carapuce_dos = NULL;
static DonneesImageRGB *vipeliere = NULL;
static DonneesImageRGB *vipeliere_dos = NULL;
static DonneesImageRGB *gruikui = NULL;
static DonneesImageRGB *gruikui_dos = NULL;
static DonneesImageRGB *moustillon = NULL;
static DonneesImageRGB *moustillon_dos = NULL;
static DonneesImageRGB *germignon = NULL;
static DonneesImageRGB *germignon_dos = NULL;
static DonneesImageRGB *hericendre = NULL;
static DonneesImageRGB *hericendre_dos = NULL;
static DonneesImageRGB *kaiminus = NULL;
static DonneesImageRGB *kaiminus_dos = NULL;
static DonneesImageRGB *tortipouss = NULL;
static DonneesImageRGB *tortipouss_dos = NULL;
static DonneesImageRGB *ouisticram = NULL;
static DonneesImageRGB *ouisticram_dos = NULL;
static DonneesImageRGB *tiplouf = NULL;
static DonneesImageRGB *tiplouf_dos = NULL;

static DonneesImageRGB *bulbizarre_evo1 = NULL;
static DonneesImageRGB *bulbizarre_evo1_dos = NULL;
static DonneesImageRGB *salameche_evo1 = NULL;
static DonneesImageRGB *salameche_evo1_dos = NULL;
static DonneesImageRGB *carapuce_evo1 = NULL;
static DonneesImageRGB *carapuce_evo1_dos = NULL;
static DonneesImageRGB *vipeliere_evo1 = NULL;
static DonneesImageRGB *vipeliere_evo1_dos = NULL;
static DonneesImageRGB *gruikui_evo1 = NULL;
static DonneesImageRGB *gruikui_evo1_dos = NULL;
static DonneesImageRGB *moustillon_evo1 = NULL;
static DonneesImageRGB *moustillon_evo1_dos = NULL;
static DonneesImageRGB *germignon_evo1 = NULL;
static DonneesImageRGB *germignon_evo1_dos = NULL;
static DonneesImageRGB *hericendre_evo1 = NULL;
static DonneesImageRGB *hericendre_evo1_dos = NULL;
static DonneesImageRGB *kaiminus_evo1 = NULL;
static DonneesImageRGB *kaiminus_evo1_dos = NULL;
static DonneesImageRGB *tortipouss_evo1 = NULL;
static DonneesImageRGB *tortipouss_evo1_dos = NULL;
static DonneesImageRGB *ouisticram_evo1 = NULL;
static DonneesImageRGB *ouisticram_evo1_dos = NULL;
static DonneesImageRGB *tiplouf_evo1 = NULL;
static DonneesImageRGB *tiplouf_evo1_dos = NULL;

static DonneesImageRGB *bulbizarre_evo2 = NULL;
static DonneesImageRGB *bulbizarre_evo2_dos = NULL;
static DonneesImageRGB *salameche_evo2 = NULL;
static DonneesImageRGB *salameche_evo2_dos = NULL;
static DonneesImageRGB *carapuce_evo2 = NULL;
static DonneesImageRGB *carapuce_evo2_dos = NULL;
static DonneesImageRGB *vipeliere_evo2 = NULL;
static DonneesImageRGB *vipeliere_evo2_dos = NULL;
static DonneesImageRGB *gruikui_evo2 = NULL;
static DonneesImageRGB *gruikui_evo2_dos = NULL;
static DonneesImageRGB *moustillon_evo2 = NULL;
static DonneesImageRGB *moustillon_evo2_dos = NULL;
static DonneesImageRGB *germignon_evo2 = NULL;
static DonneesImageRGB *germignon_evo2_dos = NULL;
static DonneesImageRGB *hericendre_evo2 = NULL;
static DonneesImageRGB *hericendre_evo2_dos = NULL;
static DonneesImageRGB *kaiminus_evo2 = NULL;
static DonneesImageRGB *kaiminus_evo2_dos = NULL;
static DonneesImageRGB *tortipouss_evo2 = NULL;
static DonneesImageRGB *tortipouss_evo2_dos = NULL;
static DonneesImageRGB *ouisticram_evo2 = NULL;
static DonneesImageRGB *ouisticram_evo2_dos = NULL;
static DonneesImageRGB *tiplouf_evo2 = NULL;
static DonneesImageRGB *tiplouf_evo2_dos = NULL;

static int verif_victoire = 0;

// Création des fonctions

/*Fonction d'affectation des images à la structure image. */
void initImage(){

	//Init images menus
	accueil = lisBMPRGB("bmp/Menus/accueil.bmp");					
	menu = lisBMPRGB("bmp/Menus/menu.bmp");
	choix_pk = lisBMPRGB("bmp/Menus/choix_pk.bmp");
	variante_menu_1 = lisBMPRGB("bmp/Menus/menu_variante_1.bmp");
	variante_menu_2 = lisBMPRGB("bmp/Menus/menu_variante_2.bmp");
	variante_menu_3 = lisBMPRGB("bmp/Menus/menu_variante_3.bmp");
	choix_perso = lisBMPRGB("bmp/Menus/choix_perso.bmp");
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
	combat = lisBMPRGB("bmp/Menus/combat/combat.bmp");
	victoire_combat = lisBMPRGB("bmp/Menus/victoire_combat.bmp");
	defaite_combat = lisBMPRGB("bmp/Menus/defaite_combat.bmp");

	//Init images persos
	persoFace1 = lisBMPRGB("bmp/Perso/perso1/face_fixe.bmp");
	persoFace2 = lisBMPRGB("bmp/Perso/perso2/face_fixe.bmp");
	persoFace3 = lisBMPRGB("bmp/Perso/perso3/face_fixe.bmp");
	persoFace4 = lisBMPRGB("bmp/Perso/perso4/face_fixe.bmp");
	persoFace5 = lisBMPRGB("bmp/Perso/perso5/face_fixe.bmp");
	persoFace6 = lisBMPRGB("bmp/Perso/perso6/face_fixe.bmp");

	//init images salles
	salle1 = lisBMPRGB("bmp/Etages/salle1.bmp");
	salle2 = lisBMPRGB("bmp/Etages/salle2.bmp");
    salle3 = lisBMPRGB("bmp/Etages/salle3.bmp");
    salle4 = lisBMPRGB("bmp/Etages/salle4.bmp");
    salle5 = lisBMPRGB("bmp/Etages/salle5.bmp");
    salle6 = lisBMPRGB("bmp/Etages/salle6.bmp");
    salle7 = lisBMPRGB("bmp/Etages/salle7.bmp");
	salle8 = lisBMPRGB("bmp/Etages/salle8.bmp");	

	//Init images Boss
	salle1_marc = lisBMPRGB("bmp/Boss/salle1_marc.bmp");
	salle2_rachid = lisBMPRGB("bmp/Boss/salle2_rachid.bmp");
	salle3_bastien = lisBMPRGB("bmp/Boss/salle3_bastien.bmp");
	salle4_adriane = lisBMPRGB("bmp/Boss/salle4_adriane.bmp");
	salle5_blue= lisBMPRGB("bmp/Boss/salle5_blue.bmp");
	salle6_iris= lisBMPRGB("bmp/Boss/salle6_iris.bmp");
	salle7_morgane= lisBMPRGB("bmp/Boss/salle7_morgane.bmp");
	salle8_pierre= lisBMPRGB("bmp/Boss/salle8_pierre.bmp");

	//Init images Pokemons
	bulbizarre = lisBMPRGB("bmp/pokemons/001_bulbizarre/001_bulbizarre.bmp");
	bulbizarre_dos = lisBMPRGB("bmp/pokemons/001_bulbizarre/001_bulbizarre_dos.bmp");
	salameche = lisBMPRGB("bmp/pokemons/002_salameche/002_salameche.bmp");
	salameche_dos = lisBMPRGB("bmp/pokemons/002_salameche/002_salameche_dos.bmp");
	carapuce = lisBMPRGB("bmp/pokemons/003_carapuce/003_carapuce.bmp");
	carapuce_dos = lisBMPRGB("bmp/pokemons/003_carapuce/003_carapuce_dos.bmp");
	vipeliere = lisBMPRGB("bmp/pokemons/004_vipeliere/004_vipeliere.bmp");
	vipeliere_dos = lisBMPRGB("bmp/pokemons/004_vipeliere/004_vipeliere_dos.bmp");
	gruikui = lisBMPRGB("bmp/pokemons/005_gruikui/005_gruikui.bmp");
	gruikui_dos = lisBMPRGB("bmp/pokemons/005_gruikui/005_gruikui_dos.bmp");
	moustillon = lisBMPRGB("bmp/pokemons/006_moustillon/006_moustillon.bmp");
	moustillon_dos = lisBMPRGB("bmp/pokemons/006_moustillon/006_moustillon_dos.bmp");
	germignon = lisBMPRGB("bmp/pokemons/007_germignon/007_germignon.bmp");
	germignon_dos = lisBMPRGB("bmp/pokemons/007_germignon/007_germignon_dos.bmp");
	hericendre = lisBMPRGB("bmp/pokemons/008_hericendre/008_hericendre.bmp");
	hericendre_dos = lisBMPRGB("bmp/pokemons/008_hericendre/008_hericendre_dos.bmp");
	kaiminus = lisBMPRGB("bmp/pokemons/009_kaiminus/009_kaiminus.bmp");
	kaiminus_dos = lisBMPRGB("bmp/pokemons/009_kaiminus/009_kaiminus_dos.bmp");
	tortipouss = lisBMPRGB("bmp/pokemons/010_tortipouss/010_tortipouss.bmp");
	tortipouss_dos = lisBMPRGB("bmp/pokemons/010_tortipouss/010_tortipouss_dos.bmp");
	ouisticram = lisBMPRGB("bmp/pokemons/011_ouisticram/011_ouisticram.bmp");
	ouisticram_dos = lisBMPRGB("bmp/pokemons/011_ouisticram/011_ouisticram_dos.bmp");
	tiplouf = lisBMPRGB("bmp/pokemons/012_tiplouf/012_tiplouf.bmp");
	tiplouf_dos = lisBMPRGB("bmp/pokemons/012_tiplouf/012_tiplouf_dos.bmp");

	bulbizarre_evo1 = lisBMPRGB("bmp/pokemons/001_bulbizarre/bulbizarre_evo1.bmp");
	bulbizarre_evo1_dos = lisBMPRGB("bmp/pokemons/001_bulbizarre/bulbizarre_evo1_dos.bmp");
	salameche_evo1 = lisBMPRGB("bmp/pokemons/002_salameche/salameche_evo1.bmp");
	salameche_evo1_dos = lisBMPRGB("bmp/pokemons/002_salameche/salameche_evo1_dos.bmp");
	carapuce_evo1 = lisBMPRGB("bmp/pokemons/003_carapuce/carapuce_evo1.bmp");
	carapuce_evo1_dos = lisBMPRGB("bmp/pokemons/003_carapuce/carapuce_evo1_dos.bmp");
	vipeliere_evo1 = lisBMPRGB("bmp/pokemons/004_vipeliere/vipeliere_evo1.bmp");
	vipeliere_evo1_dos = lisBMPRGB("bmp/pokemons/004_vipeliere/vipeliere_evo1_dos.bmp");
	gruikui_evo1 = lisBMPRGB("bmp/pokemons/005_gruikui/gruikui_evo1.bmp");
	gruikui_evo1_dos = lisBMPRGB("bmp/pokemons/005_gruikui/gruikui_evo1_dos.bmp");
	moustillon_evo1 = lisBMPRGB("bmp/pokemons/006_moustillon/moustillon_evo1.bmp");
	moustillon_evo1_dos = lisBMPRGB("bmp/pokemons/006_moustillon/moustillon_evo1_dos.bmp");
	germignon_evo1 = lisBMPRGB("bmp/pokemons/007_germignon/germignon_evo1.bmp");
	germignon_evo1_dos = lisBMPRGB("bmp/pokemons/007_germignon/germignon_evo1_dos.bmp");
	hericendre_evo1 = lisBMPRGB("bmp/pokemons/008_hericendre/hericendre_evo1.bmp");
	hericendre_evo1_dos = lisBMPRGB("bmp/pokemons/008_hericendre/hericendre_evo1_dos.bmp");
	kaiminus_evo1 = lisBMPRGB("bmp/pokemons/009_kaiminus/kaiminus_evo1.bmp");
	kaiminus_evo1_dos = lisBMPRGB("bmp/pokemons/009_kaiminus/kaiminus_evo1_dos.bmp");
	tortipouss_evo1 = lisBMPRGB("bmp/pokemons/010_tortipouss/tortipouss_evo1.bmp");
	tortipouss_evo1_dos = lisBMPRGB("bmp/pokemons/010_tortipouss/tortipouss_evo1_dos.bmp");
	ouisticram_evo1 = lisBMPRGB("bmp/pokemons/011_ouisticram/ouisticram_evo1.bmp");
	ouisticram_evo1_dos = lisBMPRGB("bmp/pokemons/011_ouisticram/ouisticram_evo1_dos.bmp");
	tiplouf_evo1 = lisBMPRGB("bmp/pokemons/012_tiplouf/tiplouf_evo1.bmp");
	tiplouf_evo1_dos = lisBMPRGB("bmp/pokemons/012_tiplouf/tiplouf_evo1_dos.bmp");

	bulbizarre_evo2 = lisBMPRGB("bmp/pokemons/001_bulbizarre/bulbizarre_evo2.bmp");
	bulbizarre_evo2_dos = lisBMPRGB("bmp/pokemons/001_bulbizarre/bulbizarre_evo2_dos.bmp");
	salameche_evo2 = lisBMPRGB("bmp/pokemons/002_salameche/salameche_evo2.bmp");
	salameche_evo2_dos = lisBMPRGB("bmp/pokemons/002_salameche/salameche_evo2_dos.bmp");
	carapuce_evo2 = lisBMPRGB("bmp/pokemons/003_carapuce/carapuce_evo2.bmp");
	carapuce_evo2_dos = lisBMPRGB("bmp/pokemons/003_carapuce/carapuce_evo2_dos.bmp");
	vipeliere_evo2 = lisBMPRGB("bmp/pokemons/004_vipeliere/vipeliere_evo2.bmp");
	vipeliere_evo2_dos = lisBMPRGB("bmp/pokemons/004_vipeliere/vipeliere_evo2_dos.bmp");
	gruikui_evo2 = lisBMPRGB("bmp/pokemons/005_gruikui/gruikui_evo2.bmp");
	gruikui_evo2_dos = lisBMPRGB("bmp/pokemons/005_gruikui/gruikui_evo2_dos.bmp");
	moustillon_evo2 = lisBMPRGB("bmp/pokemons/006_moustillon/moustillon_evo2.bmp");
	moustillon_evo2_dos = lisBMPRGB("bmp/pokemons/006_moustillon/moustillon_evo2_dos.bmp");
	germignon_evo2 = lisBMPRGB("bmp/pokemons/007_germignon/germignon_evo2.bmp");
	germignon_evo2_dos = lisBMPRGB("bmp/pokemons/007_germignon/germignon_evo2_dos.bmp");
	hericendre_evo2 = lisBMPRGB("bmp/pokemons/008_hericendre/hericendre_evo2.bmp");
	hericendre_evo2_dos = lisBMPRGB("bmp/pokemons/008_hericendre/hericendre_evo2_dos.bmp");
	kaiminus_evo2 = lisBMPRGB("bmp/pokemons/009_kaiminus/kaiminus_evo2.bmp");
	kaiminus_evo2_dos = lisBMPRGB("bmp/pokemons/009_kaiminus/kaiminus_evo2_dos.bmp");
	tortipouss_evo2 = lisBMPRGB("bmp/pokemons/010_tortipouss/tortipouss_evo2.bmp");
	tortipouss_evo2_dos = lisBMPRGB("bmp/pokemons/010_tortipouss/tortipouss_evo2_dos.bmp");
	ouisticram_evo2 = lisBMPRGB("bmp/pokemons/011_ouisticram/ouisticram_evo2.bmp");
	ouisticram_evo2_dos = lisBMPRGB("bmp/pokemons/011_ouisticram/ouisticram_evo2_dos.bmp");
	tiplouf_evo2 = lisBMPRGB("bmp/pokemons/012_tiplouf/tiplouf_evo2.bmp");
	tiplouf_evo2_dos = lisBMPRGB("bmp/pokemons/012_tiplouf/tiplouf_evo2_dos.bmp");

}

/* Fonction qui affiche l'image du menu adéquat en fonction de l'état, cette fonction sera appelé en boucle dans le 
	case [Affichage:] du switch(evenement) afin de créer une interractivité avec l'utilisateur.  */

int afficheImg_menus(int salle_actuelle,int etat,int *placex,int *placey, dresseur *perso, dresseur *tour ){

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
	salle_actuelle = 1;
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
	salle_actuelle = 2;
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
	salle_actuelle = 3;
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
	salle_actuelle = 4;
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
	salle_actuelle = 5;
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
	salle_actuelle = 6;
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
	salle_actuelle = 7;
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
	salle_actuelle = 8;
	break;
	case 15:
	if(combat != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat->largeurImage, combat->hauteurImage, combat->donneesRGB);
		affichageCombat(perso,tour,bulbizarre,bulbizarre_dos,salameche,salameche_dos,carapuce,carapuce_dos,vipeliere,vipeliere_dos,gruikui,gruikui_dos,moustillon,moustillon_dos,germignon,germignon_dos,hericendre,hericendre_dos,kaiminus,kaiminus_dos,tortipouss,tortipouss_dos,ouisticram,ouisticram_dos,tiplouf,tiplouf_dos,bulbizarre_evo1,bulbizarre_evo1_dos,salameche_evo1,salameche_evo1_dos,carapuce_evo1,carapuce_evo1_dos,vipeliere_evo1,vipeliere_evo1_dos,gruikui_evo1,gruikui_evo1_dos,moustillon_evo1,moustillon_evo1_dos,germignon_evo1,germignon_evo1_dos,hericendre_evo1,hericendre_evo1_dos,kaiminus_evo1,kaiminus_evo1_dos,tortipouss_evo1,tortipouss_evo1_dos,ouisticram_evo1,ouisticram_evo1_dos,tiplouf_evo1,tiplouf_evo1_dos,bulbizarre_evo2,bulbizarre_evo2_dos,salameche_evo2,salameche_evo2_dos,carapuce_evo2,carapuce_evo2_dos,vipeliere_evo2,vipeliere_evo2_dos,gruikui_evo2,gruikui_evo2_dos,moustillon_evo1,moustillon_evo2_dos,germignon_evo2,germignon_evo2_dos,hericendre_evo2,hericendre_evo2_dos,kaiminus_evo2,kaiminus_evo2_dos,tortipouss_evo2,tortipouss_evo2_dos,ouisticram_evo2,ouisticram_evo2_dos,tiplouf_evo2,tiplouf_evo2_dos,salle1_marc,salle2_rachid,salle3_bastien,salle4_adriane,salle5_blue,salle6_iris,salle7_morgane,salle8_pierre,salle_actuelle);
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
		affichageCombat(perso,tour,bulbizarre,bulbizarre_dos,salameche,salameche_dos,carapuce,carapuce_dos,vipeliere,vipeliere_dos,gruikui,gruikui_dos,moustillon,moustillon_dos,germignon,germignon_dos,hericendre,hericendre_dos,kaiminus,kaiminus_dos,tortipouss,tortipouss_dos,ouisticram,ouisticram_dos,tiplouf,tiplouf_dos,bulbizarre_evo1,bulbizarre_evo1_dos,salameche_evo1,salameche_evo1_dos,carapuce_evo1,carapuce_evo1_dos,vipeliere_evo1,vipeliere_evo1_dos,gruikui_evo1,gruikui_evo1_dos,moustillon_evo1,moustillon_evo1_dos,germignon_evo1,germignon_evo1_dos,hericendre_evo1,hericendre_evo1_dos,kaiminus_evo1,kaiminus_evo1_dos,tortipouss_evo1,tortipouss_evo1_dos,ouisticram_evo1,ouisticram_evo1_dos,tiplouf_evo1,tiplouf_evo1_dos,bulbizarre_evo2,bulbizarre_evo2_dos,salameche_evo2,salameche_evo2_dos,carapuce_evo2,carapuce_evo2_dos,vipeliere_evo2,vipeliere_evo2_dos,gruikui_evo2,gruikui_evo2_dos,moustillon_evo1,moustillon_evo2_dos,germignon_evo2,germignon_evo2_dos,hericendre_evo2,hericendre_evo2_dos,kaiminus_evo2,kaiminus_evo2_dos,tortipouss_evo2,tortipouss_evo2_dos,ouisticram_evo2,ouisticram_evo2_dos,tiplouf_evo2,tiplouf_evo2_dos,salle1_marc,salle2_rachid,salle3_bastien,salle4_adriane,salle5_blue,salle6_iris,salle7_morgane,salle8_pierre,salle_actuelle);

	}
	break;
	case 36:
	if(combat_att2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat_att2->largeurImage, combat_att2->hauteurImage, combat_att2->donneesRGB);
		affichageCombat(perso,tour,bulbizarre,bulbizarre_dos,salameche,salameche_dos,carapuce,carapuce_dos,vipeliere,vipeliere_dos,gruikui,gruikui_dos,moustillon,moustillon_dos,germignon,germignon_dos,hericendre,hericendre_dos,kaiminus,kaiminus_dos,tortipouss,tortipouss_dos,ouisticram,ouisticram_dos,tiplouf,tiplouf_dos,bulbizarre_evo1,bulbizarre_evo1_dos,salameche_evo1,salameche_evo1_dos,carapuce_evo1,carapuce_evo1_dos,vipeliere_evo1,vipeliere_evo1_dos,gruikui_evo1,gruikui_evo1_dos,moustillon_evo1,moustillon_evo1_dos,germignon_evo1,germignon_evo1_dos,hericendre_evo1,hericendre_evo1_dos,kaiminus_evo1,kaiminus_evo1_dos,tortipouss_evo1,tortipouss_evo1_dos,ouisticram_evo1,ouisticram_evo1_dos,tiplouf_evo1,tiplouf_evo1_dos,bulbizarre_evo2,bulbizarre_evo2_dos,salameche_evo2,salameche_evo2_dos,carapuce_evo2,carapuce_evo2_dos,vipeliere_evo2,vipeliere_evo2_dos,gruikui_evo2,gruikui_evo2_dos,moustillon_evo1,moustillon_evo2_dos,germignon_evo2,germignon_evo2_dos,hericendre_evo2,hericendre_evo2_dos,kaiminus_evo2,kaiminus_evo2_dos,tortipouss_evo2,tortipouss_evo2_dos,ouisticram_evo2,ouisticram_evo2_dos,tiplouf_evo2,tiplouf_evo2_dos,salle1_marc,salle2_rachid,salle3_bastien,salle4_adriane,salle5_blue,salle6_iris,salle7_morgane,salle8_pierre,salle_actuelle);

	}
	break;
	case 37:
	if(combat_quitter != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat_quitter->largeurImage, combat_quitter->hauteurImage, combat_quitter->donneesRGB);
		affichageCombat(perso,tour,bulbizarre,bulbizarre_dos,salameche,salameche_dos,carapuce,carapuce_dos,vipeliere,vipeliere_dos,gruikui,gruikui_dos,moustillon,moustillon_dos,germignon,germignon_dos,hericendre,hericendre_dos,kaiminus,kaiminus_dos,tortipouss,tortipouss_dos,ouisticram,ouisticram_dos,tiplouf,tiplouf_dos,bulbizarre_evo1,bulbizarre_evo1_dos,salameche_evo1,salameche_evo1_dos,carapuce_evo1,carapuce_evo1_dos,vipeliere_evo1,vipeliere_evo1_dos,gruikui_evo1,gruikui_evo1_dos,moustillon_evo1,moustillon_evo1_dos,germignon_evo1,germignon_evo1_dos,hericendre_evo1,hericendre_evo1_dos,kaiminus_evo1,kaiminus_evo1_dos,tortipouss_evo1,tortipouss_evo1_dos,ouisticram_evo1,ouisticram_evo1_dos,tiplouf_evo1,tiplouf_evo1_dos,bulbizarre_evo2,bulbizarre_evo2_dos,salameche_evo2,salameche_evo2_dos,carapuce_evo2,carapuce_evo2_dos,vipeliere_evo2,vipeliere_evo2_dos,gruikui_evo2,gruikui_evo2_dos,moustillon_evo1,moustillon_evo2_dos,germignon_evo2,germignon_evo2_dos,hericendre_evo2,hericendre_evo2_dos,kaiminus_evo2,kaiminus_evo2_dos,tortipouss_evo2,tortipouss_evo2_dos,ouisticram_evo2,ouisticram_evo2_dos,tiplouf_evo2,tiplouf_evo2_dos,salle1_marc,salle2_rachid,salle3_bastien,salle4_adriane,salle5_blue,salle6_iris,salle7_morgane,salle8_pierre,salle_actuelle);

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
	case 42:
		if(victoire_combat != NULL){
			ecrisImage(0, 0, victoire_combat->largeurImage, victoire_combat->hauteurImage, victoire_combat->donneesRGB);
		}
		*placey = 700;
		etat = 7;
		
	break;

	case 43:
		if(defaite_combat != NULL){
			ecrisImage(0, 0, defaite_combat->largeurImage, defaite_combat->hauteurImage, defaite_combat->donneesRGB);
		}

		*placey = 700;
		etat = 7;
	break;
	case 44: //case pour tout les boutons quitter.
	//-> On libère les données images proprement puis on termine la boucle evenement.
		
		//Liberation des menus
		libereDonneesImageRGB(&accueil); 
		libereDonneesImageRGB(&menu);
		libereDonneesImageRGB(&choix_pk);
		libereDonneesImageRGB(&choix_perso);
		libereDonneesImageRGB(&variante_menu_1);
		libereDonneesImageRGB(&variante_menu_2); 
		libereDonneesImageRGB(&variante_menu_3);
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

		//Libération des persos
		libereDonneesImageRGB(&persoFace1);
		libereDonneesImageRGB(&persoFace2);
		libereDonneesImageRGB(&persoFace3);
		libereDonneesImageRGB(&persoFace4);
		libereDonneesImageRGB(&persoFace5);
		libereDonneesImageRGB(&persoFace6);

		//Libération des salles
		libereDonneesImageRGB(&salle1);
		libereDonneesImageRGB(&salle2);
		libereDonneesImageRGB(&salle3);
		libereDonneesImageRGB(&salle4);
		libereDonneesImageRGB(&salle5);
		libereDonneesImageRGB(&salle6);
		libereDonneesImageRGB(&salle7);
		libereDonneesImageRGB(&salle8);

		//Libération des boss
		libereDonneesImageRGB(&salle1_marc);
		libereDonneesImageRGB(&salle2_rachid);
		libereDonneesImageRGB(&salle3_bastien);
		libereDonneesImageRGB(&salle4_adriane);
		libereDonneesImageRGB(&salle5_blue);
		libereDonneesImageRGB(&salle6_iris);
		libereDonneesImageRGB(&salle7_morgane);
		libereDonneesImageRGB(&salle8_pierre);

		//Libération des pokemons
		libereDonneesImageRGB(&bulbizarre);
		libereDonneesImageRGB(&bulbizarre_dos);
		libereDonneesImageRGB(&salameche);
		libereDonneesImageRGB(&salameche_dos);
		libereDonneesImageRGB(&carapuce);
		libereDonneesImageRGB(&carapuce_dos);
		libereDonneesImageRGB(&vipeliere);
		libereDonneesImageRGB(&vipeliere_dos);
		libereDonneesImageRGB(&gruikui);
		libereDonneesImageRGB(&gruikui_dos);
		libereDonneesImageRGB(&moustillon);
		libereDonneesImageRGB(&moustillon_dos);
		libereDonneesImageRGB(&germignon);
		libereDonneesImageRGB(&germignon_dos);
		libereDonneesImageRGB(&hericendre);
		libereDonneesImageRGB(&hericendre_dos);
		libereDonneesImageRGB(&kaiminus);
		libereDonneesImageRGB(&kaiminus_dos);
		libereDonneesImageRGB(&tortipouss);
		libereDonneesImageRGB(&tortipouss_dos);
		libereDonneesImageRGB(&ouisticram);
		libereDonneesImageRGB(&ouisticram_dos);
		libereDonneesImageRGB(&tiplouf);
		libereDonneesImageRGB(&tiplouf_dos);

		//Libération de la première évolution des pokemons
		libereDonneesImageRGB(&bulbizarre_evo1);
		libereDonneesImageRGB(&bulbizarre_evo1_dos);
		libereDonneesImageRGB(&salameche_evo1);
		libereDonneesImageRGB(&salameche_evo1_dos);
		libereDonneesImageRGB(&carapuce_evo1);
		libereDonneesImageRGB(&carapuce_evo1_dos);
		libereDonneesImageRGB(&vipeliere_evo1);
		libereDonneesImageRGB(&vipeliere_evo1_dos);
		libereDonneesImageRGB(&gruikui_evo1);
		libereDonneesImageRGB(&gruikui_evo1_dos);
		libereDonneesImageRGB(&moustillon_evo1);
		libereDonneesImageRGB(&moustillon_evo1_dos);
		libereDonneesImageRGB(&germignon_evo1);
		libereDonneesImageRGB(&germignon_evo1_dos);
		libereDonneesImageRGB(&hericendre_evo1);
		libereDonneesImageRGB(&hericendre_evo1_dos);
		libereDonneesImageRGB(&kaiminus_evo1);
		libereDonneesImageRGB(&kaiminus_evo1_dos);
		libereDonneesImageRGB(&tortipouss_evo1);
		libereDonneesImageRGB(&tortipouss_evo1_dos);
		libereDonneesImageRGB(&ouisticram_evo1);
		libereDonneesImageRGB(&ouisticram_evo1_dos);
		libereDonneesImageRGB(&tiplouf_evo1);
		libereDonneesImageRGB(&tiplouf_evo1_dos);

		//Libération de la deuxième évolution des pokemons
		libereDonneesImageRGB(&bulbizarre_evo2);
		libereDonneesImageRGB(&bulbizarre_evo2_dos);
		libereDonneesImageRGB(&salameche_evo2);
		libereDonneesImageRGB(&salameche_evo2_dos);
		libereDonneesImageRGB(&carapuce_evo2);
		libereDonneesImageRGB(&carapuce_evo2_dos);
		libereDonneesImageRGB(&vipeliere_evo2);
		libereDonneesImageRGB(&vipeliere_evo2_dos);
		libereDonneesImageRGB(&gruikui_evo2);
		libereDonneesImageRGB(&gruikui_evo2_dos);
		libereDonneesImageRGB(&moustillon_evo2);
		libereDonneesImageRGB(&moustillon_evo2_dos);
		libereDonneesImageRGB(&germignon_evo2);
		libereDonneesImageRGB(&germignon_evo2_dos);
		libereDonneesImageRGB(&hericendre_evo2);
		libereDonneesImageRGB(&hericendre_evo2_dos);
		libereDonneesImageRGB(&kaiminus_evo2);
		libereDonneesImageRGB(&kaiminus_evo2_dos);
		libereDonneesImageRGB(&tortipouss_evo2);
		libereDonneesImageRGB(&tortipouss_evo2_dos);
		libereDonneesImageRGB(&ouisticram_evo2);
		libereDonneesImageRGB(&ouisticram_evo2_dos);
		libereDonneesImageRGB(&tiplouf_evo2);
		libereDonneesImageRGB(&tiplouf_evo2_dos);

		
		termineBoucleEvenements(); 
	break;
	}

return salle_actuelle;
}

 /* Fonction permettant la gestion des clics de la souris en fonction du menu sur lequel on se trouve
 	et en fonction de l'élément survolé lors du clic par l'user. Cette fonction est appelé dans le case [BoutonSouris] 
 	du switch(evenement) dès qu'il y a un appui sur le bouton gauche de la souris. */

int gereClicBoutons(int etat, Pokemon *pokedex,Pokemon *starter, dresseur *perso, dresseur *tour, attaque *tabAtk, int salle_actuelle){
	
	if (etat == 0) // Si on est sur l'écran titre :
	{
		etat = 1; // et qu'on clic ou qu'on appui sur entrée, on passe au menu.
	}
	else if(etat == 17) // si on clic sur l'un des pokemon on init sa structure et on change d'état (on passe au choix dresseur).
	{
		//Bulbizar
		initPk("Bulbizarre",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 21) //salameche
	{
		initPk("Salamèche",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 25) //carapuce
	{
		initPk("Carapuce",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 18) //germignon
	{
		initPk("Germignon",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 28) //moustillon
	{
		initPk("Moustillon",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 22) //hericendre
	{
		initPk("Héricendre",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 26) //kaiminus
	{
		initPk("Kaiminus",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 19) //tortipouss
	{
		initPk("Tortipouss",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 23) //ouisticram
	{
		initPk("Ouisticram",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 27) //tiplouf
	{
		initPk("Tiplouf",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 20) //vipelierre
	{
		initPk("Vipélierre",pokedex,starter,tabAtk);
		etat = 6;
	}
	else if(etat == 24) //gruikui
	{
		initPk("Gruikui",pokedex,starter,tabAtk);
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
		etat = 44; // renvoie au case '42' pour libéré les données images.
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
		verif_victoire = Baston(perso->starter.att[0], perso, tour);
		if (verif_victoire == 0){
			etat = 15; //menu combat bouton attaque 2
		}
		else if (verif_victoire == 1){
			//Vous avez gagné 
			etat = 42;
			printf("Vous avez gagné\n");
		}
		else if (verif_victoire == 2){
			//Vous avez perdu
			etat = 43;
			printf("Vous avez perdu\n");
		}
	}
	else if(etat == 36) //menu combat 2
	{
		verif_victoire = Baston(perso->starter.att[1], perso, tour);
		printf("%d\n",verif_victoire);
		if (verif_victoire == 0){
			etat = 15; //menu combat bouton attaque 2
		}
		else if (verif_victoire == 1){
			//Vous avez gagné 
			etat = 42;
			printf("Vous avez gagné\n");
		}
		else if (verif_victoire == 2){
			//Vous avez perdu
			etat = 43;
			printf("Vous avez perdu\n");
		}
	}
	else if(etat == 37) //menu combat 3 : quitter renvoie dans la salle actuelle
	{
		if(salle_actuelle == 1){
			etat = 7;
		}
		else if(salle_actuelle == 2){
			etat = 8;
		}
		else if(salle_actuelle == 3){
			etat = 9;
		}
		else if(salle_actuelle == 4){
			etat = 10;
		}
		else if(salle_actuelle == 5){
			etat = 11;
		}
		else if(salle_actuelle == 6){
			etat = 12;
		}
		else if(salle_actuelle == 7){
			etat = 13;
		}
		else{
			etat = 14;
		}
	}
	else if(etat == 39) // Si on est sur le menu pause ->
	{
		if(salle_actuelle == 1){
			etat = 7;
		}
		else if(salle_actuelle == 2){
			etat = 8;
		}
		else if(salle_actuelle == 3){
			etat = 9;
		}
		else if(salle_actuelle == 4){
			etat = 10;
		}
		else if(salle_actuelle == 5){
			etat = 11;
		}
		else if(salle_actuelle == 6){
			etat = 12;
		}
		else if(salle_actuelle == 7){
			etat = 13;
		}
		else{
			etat = 14;
		}

		printf("reprendre"); //->et qu'on clic sur reprendre (!!!Pour l'instant printf)
		
	}
	else if(etat == 40) // Si on est sur le menu pause ->
	{
		printf("sauvegarder"); //->et qu'on clic sur sauvegarder (!!!Pour l'instant printf)
	}
	else if(etat == 41) // Si on est sur le menu pause ->
	{
		etat = 44; //et qu'on clic sur quitter on renvoie au case'42' qui libere la structure image et termine la boucle evenement.
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

//Interface de combat
void affichageCombat(dresseur *perso, dresseur *tour,DonneesImageRGB *bulbizarre,DonneesImageRGB *bulbizarre_dos,DonneesImageRGB *salameche,DonneesImageRGB *salameche_dos,DonneesImageRGB *carapuce,DonneesImageRGB *carapuce_dos,DonneesImageRGB *vipeliere,DonneesImageRGB *vipeliere_dos,DonneesImageRGB *gruikui,DonneesImageRGB *gruikui_dos,DonneesImageRGB *moustillon,DonneesImageRGB *moustillon_dos,DonneesImageRGB *germignon,DonneesImageRGB *germignon_dos,DonneesImageRGB *hericendre,DonneesImageRGB *hericendre_dos,DonneesImageRGB *kaiminus,DonneesImageRGB *kaiminus_dos,DonneesImageRGB *tortipouss,DonneesImageRGB *tortipouss_dos,DonneesImageRGB *ouisticram,DonneesImageRGB *ouisticram_dos,DonneesImageRGB *tiplouf,DonneesImageRGB *tiplouf_dos,DonneesImageRGB *bulbizarre_evo1,DonneesImageRGB *bulbizarre_evo1_dos,DonneesImageRGB *salameche_evo1,DonneesImageRGB *salameche_evo1_dos,DonneesImageRGB *carapuce_evo1,DonneesImageRGB *carapuce_evo1_dos,DonneesImageRGB *vipeliere_evo1,DonneesImageRGB *vipeliere_evo1_dos,DonneesImageRGB *gruikui_evo1,DonneesImageRGB *gruikui_evo1_dos,DonneesImageRGB *moustillon_evo1,DonneesImageRGB *moustillon_evo1_dos,DonneesImageRGB *germignon_evo1,DonneesImageRGB *germignon_evo1_dos,DonneesImageRGB *hericendre_evo1,DonneesImageRGB *hericendre_evo1_dos,DonneesImageRGB *kaiminus_evo1,DonneesImageRGB *kaiminus_evo1_dos,DonneesImageRGB *tortipouss_evo1,DonneesImageRGB *tortipouss_evo1_dos,DonneesImageRGB *ouisticram_evo1,DonneesImageRGB *ouisticram_evo1_dos,DonneesImageRGB *tiplouf_evo1,DonneesImageRGB *tiplouf_evo1_dos,DonneesImageRGB *bulbizarre_evo2,DonneesImageRGB *bulbizarre_evo2_dos,DonneesImageRGB *salameche_evo2,DonneesImageRGB *salameche_evo2_dos,DonneesImageRGB *carapuce_evo2,DonneesImageRGB *carapuce_evo2_dos,DonneesImageRGB *vipeliere_evo2,DonneesImageRGB *vipeliere_evo2_dos,DonneesImageRGB *gruikui_evo2,DonneesImageRGB *gruikui_evo2_dos,DonneesImageRGB *moustillon_evo2,DonneesImageRGB *moustillon_evo2_dos,DonneesImageRGB *germignon_evo2,DonneesImageRGB *germignon_evo2_dos,DonneesImageRGB *hericendre_evo2,DonneesImageRGB *hericendre_evo2_dos,DonneesImageRGB *kaiminus_evo2,DonneesImageRGB *kaiminus_evo2_dos,DonneesImageRGB *tortipouss_evo2,DonneesImageRGB *tortipouss_evo2_dos,DonneesImageRGB *ouisticram_evo2,DonneesImageRGB *ouisticram_evo2_dos,DonneesImageRGB *tiplouf_evo2,DonneesImageRGB *tiplouf_evo2_dos,DonneesImageRGB *salle1_marc,DonneesImageRGB *salle2_rachid,DonneesImageRGB *salle3_bastien,DonneesImageRGB *salle4_adriane,DonneesImageRGB *salle5_blue,DonneesImageRGB *salle6_iris,DonneesImageRGB *salle7_morgane,DonneesImageRGB *salle8_pierre, int salle_actuelle){
	if(salle_actuelle == 1){
		if(moustillon != NULL){
		ecrisImage(1050, 650,  moustillon->largeurImage, moustillon->hauteurImage, moustillon->donneesRGB);
		}
		if(salle1_marc != NULL){
			ecrisImage(1350, 600, salle1_marc->largeurImage, salle1_marc->hauteurImage, salle1_marc->donneesRGB);
		}
	}

	else if(salle_actuelle == 2){
		if(vipeliere != NULL){
		ecrisImage(1050, 650,  vipeliere->largeurImage, vipeliere->hauteurImage, vipeliere->donneesRGB);
		}
		if(salle2_rachid != NULL){
			ecrisImage(1350, 600, salle2_rachid->largeurImage, salle2_rachid->hauteurImage, salle2_rachid->donneesRGB);
		}
	}
	
	else if(salle_actuelle == 3){
		if(salameche != NULL){
		ecrisImage(1050, 650,  salameche->largeurImage, salameche->hauteurImage, salameche->donneesRGB);
		}

		if(salle3_bastien != NULL){
			ecrisImage(1350, 600, salle3_bastien->largeurImage, salle3_bastien->hauteurImage, salle3_bastien->donneesRGB);
		}
	}

	else if(salle_actuelle == 4){
		if(ouisticram_evo1 != NULL){
		ecrisImage(1050, 650,  ouisticram_evo1->largeurImage, ouisticram_evo1->hauteurImage, ouisticram_evo1->donneesRGB);
		}
		if(salle4_adriane != NULL){
			ecrisImage(1350, 600, salle4_adriane->largeurImage, salle4_adriane->hauteurImage, salle4_adriane->donneesRGB);
		}
	}

	else if(salle_actuelle == 5){
		if(tiplouf_evo1 != NULL){
		ecrisImage(1050, 650,  tiplouf_evo1->largeurImage, tiplouf_evo1->hauteurImage, tiplouf_evo1->donneesRGB);
		}

		if(salle5_blue != NULL){
			ecrisImage(1350, 600, salle5_blue->largeurImage, salle5_blue->hauteurImage, salle5_blue->donneesRGB);
		}
	}

	else if(salle_actuelle == 6){
		if(germignon_evo1 != NULL){
		ecrisImage(1050, 650,  germignon_evo1->largeurImage, germignon_evo1->hauteurImage, germignon_evo1->donneesRGB);
		}
		if(salle6_iris != NULL){
			ecrisImage(1350, 600, salle6_iris->largeurImage, salle6_iris->hauteurImage, salle6_iris->donneesRGB);
		}
	}

	else if(salle_actuelle == 7){
		if(tortipouss_evo2 != NULL){
		ecrisImage(1050, 650,  tortipouss_evo2->largeurImage, tortipouss_evo2->hauteurImage, tortipouss_evo2->donneesRGB);
		}

		if(salle7_morgane != NULL){
			ecrisImage(1350, 600, salle7_morgane->largeurImage, salle7_morgane->hauteurImage, salle7_morgane->donneesRGB);
		}
	}

	else if(salle_actuelle == 8){
		if(kaiminus_evo2 != NULL){
		ecrisImage(1050, 650,  kaiminus_evo2->largeurImage, kaiminus_evo2->hauteurImage, kaiminus_evo2->donneesRGB);
		}
		if(salle8_pierre != NULL){
			ecrisImage(1350, 600, salle8_pierre->largeurImage, salle8_pierre->hauteurImage, salle8_pierre->donneesRGB);
		}
	}

	if(strcmp(perso->starter.nom,"Bulbizarre")== 0){
		if(perso->starter.stade == 0){
			if(bulbizarre_dos != NULL){
				ecrisImage(391, 397, bulbizarre_dos->largeurImage, bulbizarre_dos->hauteurImage, bulbizarre_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(bulbizarre_evo1_dos != NULL){
				ecrisImage(391, 397, bulbizarre_evo1_dos->largeurImage, bulbizarre_evo1_dos->hauteurImage, bulbizarre_evo1_dos->donneesRGB);
			}
		}

		else{
			if(bulbizarre_evo2_dos != NULL){
				ecrisImage(391, 397, bulbizarre_evo2_dos->largeurImage, bulbizarre_evo2_dos->hauteurImage, bulbizarre_evo2_dos->donneesRGB);
			}
		}
	}

	else if(strcmp(perso->starter.nom,"Salamèche")== 0){
		if(perso->starter.stade == 0){
			if(salameche_dos != NULL){
				ecrisImage(391, 397, salameche_dos->largeurImage, salameche_dos->hauteurImage, salameche_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(salameche_evo1_dos != NULL){
				ecrisImage(391, 397, salameche_evo1_dos->largeurImage, salameche_evo1_dos->hauteurImage, salameche_evo1_dos->donneesRGB);
			}
		}

		else{
			if(salameche_evo2_dos != NULL){
				ecrisImage(391, 397, salameche_evo2_dos->largeurImage, salameche_evo2_dos->hauteurImage, salameche_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Carapuce")== 0){
		if(perso->starter.stade == 0){
			if(carapuce_dos != NULL){
				ecrisImage(391, 397, carapuce_dos->largeurImage, carapuce_dos->hauteurImage, carapuce_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(carapuce_evo1_dos != NULL){
				ecrisImage(391, 397, carapuce_evo1_dos->largeurImage, carapuce_evo1_dos->hauteurImage, carapuce_evo1_dos->donneesRGB);
			}
		}

		else{
			if(carapuce_evo2_dos != NULL){
				ecrisImage(391, 397, carapuce_evo2_dos->largeurImage, carapuce_evo2_dos->hauteurImage, carapuce_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Vipélierre")== 0){
		if(perso->starter.stade == 0){
			if(vipeliere_dos != NULL){
				ecrisImage(391, 397, vipeliere_dos->largeurImage, vipeliere_dos->hauteurImage, vipeliere_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(vipeliere_evo1_dos != NULL){
				ecrisImage(391, 397, vipeliere_evo1_dos->largeurImage, vipeliere_evo1_dos->hauteurImage, vipeliere_evo1_dos->donneesRGB);
			}
		}

		else{
			if(vipeliere_evo2_dos != NULL){
				ecrisImage(391, 397, vipeliere_evo2_dos->largeurImage, vipeliere_evo2_dos->hauteurImage, vipeliere_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Gruikui")== 0){
		if(perso->starter.stade == 0){
			if(gruikui_dos != NULL){
				ecrisImage(391, 397, gruikui_dos->largeurImage, gruikui_dos->hauteurImage, gruikui_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(gruikui_evo1_dos != NULL){
				ecrisImage(391, 397, gruikui_evo1_dos->largeurImage, gruikui_evo1_dos->hauteurImage, gruikui_evo1_dos->donneesRGB);
			}
		}

		else{
			if(gruikui_evo2_dos != NULL){
				ecrisImage(391, 397, gruikui_evo2_dos->largeurImage, gruikui_evo2_dos->hauteurImage, gruikui_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Moustillon")== 0){
		if(perso->starter.stade == 0){
			if(moustillon_dos != NULL){
				ecrisImage(391, 397, moustillon_dos->largeurImage, moustillon_dos->hauteurImage, moustillon_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(moustillon_evo1_dos != NULL){
				ecrisImage(391, 397, moustillon_evo1_dos->largeurImage, moustillon_evo1_dos->hauteurImage, moustillon_evo1_dos->donneesRGB);
			}
		}

		else{
			if(moustillon_evo2_dos != NULL){
				ecrisImage(391, 397, moustillon_evo2_dos->largeurImage, moustillon_evo2_dos->hauteurImage, moustillon_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Germignon")== 0){
		if(perso->starter.stade == 0){
			if(germignon_dos != NULL){
				ecrisImage(391, 397, germignon_dos->largeurImage, germignon_dos->hauteurImage, germignon_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(germignon_evo1_dos != NULL){
				ecrisImage(391, 397, germignon_evo1_dos->largeurImage, germignon_evo1_dos->hauteurImage, germignon_evo1_dos->donneesRGB);
			}
		}

		else{
			if(germignon_evo2_dos != NULL){
				ecrisImage(391, 397, germignon_evo2_dos->largeurImage, germignon_evo2_dos->hauteurImage, germignon_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Hericendre")== 0){
		if(perso->starter.stade == 0){
			if(hericendre_dos != NULL){
				ecrisImage(391, 397, hericendre_dos->largeurImage, hericendre_dos->hauteurImage, hericendre_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(hericendre_evo1_dos != NULL){
				ecrisImage(391, 397, hericendre_evo1_dos->largeurImage, hericendre_evo1_dos->hauteurImage, hericendre_evo1_dos->donneesRGB);
			}
		}

		else{
			if(hericendre_evo2_dos != NULL){
				ecrisImage(391, 397, hericendre_evo2_dos->largeurImage, hericendre_evo2_dos->hauteurImage, hericendre_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Kaiminus")== 0){
		if(perso->starter.stade == 0){
			if(kaiminus_dos != NULL){
				ecrisImage(391, 397, kaiminus_dos->largeurImage, kaiminus_dos->hauteurImage, kaiminus_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(kaiminus_evo1_dos != NULL){
				ecrisImage(391, 397, kaiminus_evo1_dos->largeurImage, kaiminus_evo1_dos->hauteurImage, kaiminus_evo1_dos->donneesRGB);
			}
		}

		else{
			if(kaiminus_evo2_dos != NULL){
				ecrisImage(391, 397, kaiminus_evo2_dos->largeurImage, kaiminus_evo2_dos->hauteurImage, kaiminus_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Tortipouss")== 0){
		if(perso->starter.stade == 0){
			if(tortipouss_dos != NULL){
				ecrisImage(391, 397, tortipouss_dos->largeurImage, tortipouss_dos->hauteurImage, tortipouss_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(tortipouss_evo1_dos != NULL){
				ecrisImage(391, 397, tortipouss_evo1_dos->largeurImage, tortipouss_evo1_dos->hauteurImage, tortipouss_evo1_dos->donneesRGB);
			}
		}

		else{
			if(tortipouss_evo2_dos != NULL){
				ecrisImage(391, 397, tortipouss_evo2_dos->largeurImage, tortipouss_evo2_dos->hauteurImage, tortipouss_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Ouisticram")== 0){
		if(perso->starter.stade == 0){
			if(ouisticram_dos != NULL){
				ecrisImage(391, 397, ouisticram_dos->largeurImage, ouisticram_dos->hauteurImage, ouisticram_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(ouisticram_evo1_dos != NULL){
				ecrisImage(391, 397, ouisticram_evo1_dos->largeurImage, ouisticram_evo1_dos->hauteurImage, ouisticram_evo1_dos->donneesRGB);
			}
		}

		else{
			if(ouisticram_evo2_dos != NULL){
				ecrisImage(391, 397, ouisticram_evo2_dos->largeurImage, ouisticram_evo2_dos->hauteurImage, ouisticram_evo2_dos->donneesRGB);
			}
		}

	}
	else if(strcmp(perso->starter.nom,"Tiplouf")== 0){
		if(perso->starter.stade == 0){
			if(tiplouf_dos != NULL){
				ecrisImage(391, 397, tiplouf_dos->largeurImage, tiplouf_dos->hauteurImage, tiplouf_dos->donneesRGB);
			}
		}

		else if(perso->starter.stade == 1){
			if(tiplouf_evo1_dos != NULL){
				ecrisImage(391, 397, tiplouf_evo1_dos->largeurImage, tiplouf_evo1_dos->hauteurImage, tiplouf_evo1_dos->donneesRGB);
			}
		}

		else{
			if(tiplouf_evo2_dos != NULL){
				ecrisImage(391, 397, tiplouf_evo2_dos->largeurImage, tiplouf_evo2_dos->hauteurImage, tiplouf_evo2_dos->donneesRGB);
			}
		}

	}
}
