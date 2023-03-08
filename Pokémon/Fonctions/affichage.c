#include "affichage.h"

//Initialisation des structures image

//Images de menu
static DonneesImageRGB *accueil = NULL;
static DonneesImageRGB *menu = NULL;
static DonneesImageRGB *variante_menu_1 = NULL;
static DonneesImageRGB *variante_menu_2 = NULL;
static DonneesImageRGB *variante_menu_3 = NULL;
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
static DonneesImageRGB *victoire_combat_survol = NULL;
static DonneesImageRGB *defaite_combat_rejouer = NULL;
static DonneesImageRGB *defaite_combat_quitter = NULL;
static DonneesImageRGB *ecran_fin = NULL;

//Images choix perso
static DonneesImageRGB *choix_perso = NULL;
static DonneesImageRGB *choix_perso_1_1 = NULL;
static DonneesImageRGB *choix_perso_1_2 = NULL;
static DonneesImageRGB *choix_perso_1_3 = NULL;
static DonneesImageRGB *choix_perso_2_1 = NULL;
static DonneesImageRGB *choix_perso_2_2 = NULL;
static DonneesImageRGB *choix_perso_2_3 = NULL;

//Images des starter 
static DonneesImageRGB *choix_pk = NULL;
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

//Images d'évo1
static DonneesImageRGB *choix_pk_evo1 = NULL;
static DonneesImageRGB *choix_pk_evo1_1_1 = NULL;
static DonneesImageRGB *choix_pk_evo1_1_2 = NULL;
static DonneesImageRGB *choix_pk_evo1_1_3 = NULL;
static DonneesImageRGB *choix_pk_evo1_1_4 = NULL;
static DonneesImageRGB *choix_pk_evo1_2_1 = NULL;
static DonneesImageRGB *choix_pk_evo1_2_2 = NULL;
static DonneesImageRGB *choix_pk_evo1_2_3 = NULL;
static DonneesImageRGB *choix_pk_evo1_2_4 = NULL;
static DonneesImageRGB *choix_pk_evo1_3_1 = NULL;
static DonneesImageRGB *choix_pk_evo1_3_2 = NULL;
static DonneesImageRGB *choix_pk_evo1_3_3 = NULL;
static DonneesImageRGB *choix_pk_evo1_3_4 = NULL;

//Images d'évo2
static DonneesImageRGB *choix_pk_evo2 = NULL;
static DonneesImageRGB *choix_pk_evo2_1_1 = NULL;
static DonneesImageRGB *choix_pk_evo2_1_2 = NULL;
static DonneesImageRGB *choix_pk_evo2_1_3 = NULL;
static DonneesImageRGB *choix_pk_evo2_1_4 = NULL;
static DonneesImageRGB *choix_pk_evo2_2_1 = NULL;
static DonneesImageRGB *choix_pk_evo2_2_2 = NULL;
static DonneesImageRGB *choix_pk_evo2_2_3 = NULL;
static DonneesImageRGB *choix_pk_evo2_2_4 = NULL;
static DonneesImageRGB *choix_pk_evo2_3_1 = NULL;
static DonneesImageRGB *choix_pk_evo2_3_2 = NULL;
static DonneesImageRGB *choix_pk_evo2_3_3 = NULL;
static DonneesImageRGB *choix_pk_evo2_3_4 = NULL;

//Images personnage face
static DonneesImageRGB *persoFace1 = NULL;
static DonneesImageRGB *persoFace2 = NULL;
static DonneesImageRGB *persoFace3 = NULL;
static DonneesImageRGB *persoFace4 = NULL;
static DonneesImageRGB *persoFace5 = NULL;
static DonneesImageRGB *persoFace6 = NULL;

//Image Personnage dos
static DonneesImageRGB *persoDos1 = NULL;
static DonneesImageRGB *persoDos2 = NULL;
static DonneesImageRGB *persoDos3 = NULL;
static DonneesImageRGB *persoDos4 = NULL;
static DonneesImageRGB *persoDos5 = NULL;
static DonneesImageRGB *persoDos6 = NULL;

//Image Personnage côté droit
static DonneesImageRGB *persoCoteDroit1 = NULL;
static DonneesImageRGB *persoCoteDroit2 = NULL;
static DonneesImageRGB *persoCoteDroit3 = NULL;
static DonneesImageRGB *persoCoteDroit4 = NULL;
static DonneesImageRGB *persoCoteDroit5 = NULL;
static DonneesImageRGB *persoCoteDroit6 = NULL;

//Image Personnage côté gauche
static DonneesImageRGB *persoCoteGauche1 = NULL;
static DonneesImageRGB *persoCoteGauche2 = NULL;
static DonneesImageRGB *persoCoteGauche3 = NULL;
static DonneesImageRGB *persoCoteGauche4 = NULL;
static DonneesImageRGB *persoCoteGauche5 = NULL;
static DonneesImageRGB *persoCoteGauche6 = NULL;

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

//Images Pokemons starter
static DonneesImageRGB *bulbizarre_dos = NULL;
static DonneesImageRGB *salameche = NULL;
static DonneesImageRGB *salameche_dos = NULL;
static DonneesImageRGB *carapuce_dos = NULL;
static DonneesImageRGB *vipeliere = NULL;
static DonneesImageRGB *vipeliere_dos = NULL;
static DonneesImageRGB *gruikui_dos = NULL;
static DonneesImageRGB *moustillon = NULL;
static DonneesImageRGB *moustillon_dos = NULL;
static DonneesImageRGB *germignon_dos = NULL;
static DonneesImageRGB *hericendre_dos = NULL;
static DonneesImageRGB *kaiminus_dos = NULL;
static DonneesImageRGB *tortipouss_dos = NULL;
static DonneesImageRGB *ouisticram_dos = NULL;
static DonneesImageRGB *tiplouf_dos = NULL;

//Images Pokemons évo 1
static DonneesImageRGB *bulbizarre_evo1_dos = NULL;
static DonneesImageRGB *salameche_evo1_dos = NULL;
static DonneesImageRGB *carapuce_evo1_dos = NULL;
static DonneesImageRGB *vipeliere_evo1_dos = NULL;
static DonneesImageRGB *gruikui_evo1_dos = NULL;
static DonneesImageRGB *moustillon_evo1_dos = NULL;
static DonneesImageRGB *germignon_evo1 = NULL;
static DonneesImageRGB *germignon_evo1_dos = NULL;
static DonneesImageRGB *hericendre_evo1_dos = NULL;
static DonneesImageRGB *kaiminus_evo1_dos = NULL;
static DonneesImageRGB *tortipouss_evo1_dos = NULL;
static DonneesImageRGB *ouisticram_evo1 = NULL;
static DonneesImageRGB *ouisticram_evo1_dos = NULL;
static DonneesImageRGB *tiplouf_evo1 = NULL;
static DonneesImageRGB *tiplouf_evo1_dos = NULL;

//Images Pokemons évo 2
static DonneesImageRGB *bulbizarre_evo2_dos = NULL;
static DonneesImageRGB *salameche_evo2_dos = NULL;
static DonneesImageRGB *carapuce_evo2_dos = NULL;
static DonneesImageRGB *vipeliere_evo2_dos = NULL;
static DonneesImageRGB *gruikui_evo2_dos = NULL;
static DonneesImageRGB *moustillon_evo2_dos = NULL;
static DonneesImageRGB *germignon_evo2_dos = NULL;
static DonneesImageRGB *hericendre_evo2_dos = NULL;
static DonneesImageRGB *kaiminus_evo2 = NULL;
static DonneesImageRGB *kaiminus_evo2_dos = NULL;
static DonneesImageRGB *tortipouss_evo2 = NULL;
static DonneesImageRGB *tortipouss_evo2_dos = NULL;
static DonneesImageRGB *ouisticram_evo2_dos = NULL;
static DonneesImageRGB *tiplouf_evo2_dos = NULL;

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
	combat_att1 = lisBMPRGB("bmp/Menus/combat/combat_att1.bmp");
	combat_att2 = lisBMPRGB("bmp/Menus/combat/combat_att2.bmp");
	combat_quitter = lisBMPRGB("bmp/Menus/combat/combat_quitter.bmp");
	menu_pause = lisBMPRGB("bmp/Menus/pause/menu_pause.bmp");
	pause_quitter = lisBMPRGB("bmp/Menus/pause/pause_quitter.bmp");
	pause_reprendre = lisBMPRGB("bmp/Menus/pause/pause_reprendre.bmp");
	pause_sauvegarder = lisBMPRGB("bmp/Menus/pause/pause_sauvegarder.bmp");
	combat = lisBMPRGB("bmp/Menus/combat/combat.bmp");
	victoire_combat = lisBMPRGB("bmp/Menus/combat/victoire_combat.bmp");
	defaite_combat = lisBMPRGB("bmp/Menus/combat/defaite_combat.bmp");
	victoire_combat_survol = lisBMPRGB("bmp/Menus/combat/victoire_combat_survol.bmp");
	defaite_combat_rejouer = lisBMPRGB("bmp/Menus/combat/defaite_combat_rejouer.bmp");
	defaite_combat_quitter = lisBMPRGB("bmp/Menus/combat/defaite_combat_quitter.bmp");
	ecran_fin = lisBMPRGB("bmp/Menus/ecran_fin.bmp");

	//Init des images de choix des persos
	choix_perso = lisBMPRGB("bmp/Menus/choix_perso.bmp");
	choix_perso_1_1 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_1.1.bmp");
	choix_perso_1_2 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_1.2.bmp");
	choix_perso_1_3 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_1.3.bmp");
	choix_perso_2_1 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_2.1.bmp");
	choix_perso_2_2 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_2.2.bmp");
	choix_perso_2_3 = lisBMPRGB("bmp/Menus/perso_survol/choix_perso_2.3.bmp");

	//Init des images de choix des pokémons
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

	//Init des images de choix d'évo1
	choix_pk_evo1 = lisBMPRGB("bmp/Menus/choix_pk_evo1.bmp");
	choix_pk_evo1_1_1 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_1.1.bmp");
	choix_pk_evo1_1_2 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_1.2.bmp");
	choix_pk_evo1_1_3 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_1.3.bmp");
	choix_pk_evo1_1_4 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_1.4.bmp");
	choix_pk_evo1_2_1 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_2.1.bmp");
	choix_pk_evo1_2_2 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_2.2.bmp");
	choix_pk_evo1_2_3 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_2.3.bmp");
	choix_pk_evo1_2_4 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_2.4.bmp");
	choix_pk_evo1_3_1 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_3.1.bmp");
	choix_pk_evo1_3_2 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_3.2.bmp");
	choix_pk_evo1_3_3 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_3.3.bmp");
	choix_pk_evo1_3_4 = lisBMPRGB("bmp/Menus/pk_evo1_survol/choix_pk_evo1_3.4.bmp");


	//Init des images de choix d'évo2
	choix_pk_evo2 = lisBMPRGB("bmp/Menus/choix_pk_evo2.bmp");
	choix_pk_evo2_1_1 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_1.1.bmp");
	choix_pk_evo2_1_2 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_1.2.bmp");
	choix_pk_evo2_1_3 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_1.3.bmp");
	choix_pk_evo2_1_4 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_1.4.bmp");
	choix_pk_evo2_2_1 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_2.1.bmp");
	choix_pk_evo2_2_2 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_2.2.bmp");
	choix_pk_evo2_2_3 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_2.3.bmp");
	choix_pk_evo2_2_4 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_2.4.bmp");
	choix_pk_evo2_3_1 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_3.1.bmp");
	choix_pk_evo2_3_2 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_3.2.bmp");
	choix_pk_evo2_3_3 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_3.3.bmp");
	choix_pk_evo2_3_4 = lisBMPRGB("bmp/Menus/pk_evo2_survol/choix_pk_evo2_3.4.bmp");

	//Init images persos face
	persoFace1 = lisBMPRGB("bmp/Perso/perso1/face_fixe.bmp");
	persoFace2 = lisBMPRGB("bmp/Perso/perso2/face_fixe.bmp");
	persoFace3 = lisBMPRGB("bmp/Perso/perso3/face_fixe.bmp");
	persoFace4 = lisBMPRGB("bmp/Perso/perso4/face_fixe.bmp");
	persoFace5 = lisBMPRGB("bmp/Perso/perso5/face_fixe.bmp");
	persoFace6 = lisBMPRGB("bmp/Perso/perso6/face_fixe.bmp");

	//Init images persos Dos
	persoDos1 = lisBMPRGB("bmp/Perso/perso1/dos_fixe.bmp");
	persoDos2 = lisBMPRGB("bmp/Perso/perso2/dos_fixe.bmp");
	persoDos3 = lisBMPRGB("bmp/Perso/perso3/dos_fixe.bmp");
	persoDos4 = lisBMPRGB("bmp/Perso/perso4/dos_fixe.bmp");
	persoDos5 = lisBMPRGB("bmp/Perso/perso5/dos_fixe.bmp");
	persoDos6 = lisBMPRGB("bmp/Perso/perso6/dos_fixe.bmp");

	//Init images persos côté droit
	persoCoteDroit1 = lisBMPRGB("bmp/Perso/perso1/profil2_fixe.bmp");
	persoCoteDroit2 = lisBMPRGB("bmp/Perso/perso2/profil2_fixe.bmp");
	persoCoteDroit3 = lisBMPRGB("bmp/Perso/perso3/profil2_fixe.bmp");
	persoCoteDroit4 = lisBMPRGB("bmp/Perso/perso4/profil2_fixe.bmp");
	persoCoteDroit5 = lisBMPRGB("bmp/Perso/perso5/profil2_fixe.bmp");
	persoCoteDroit6 = lisBMPRGB("bmp/Perso/perso6/profil2_fixe.bmp");

	//Init images persos côté gauche
	persoCoteGauche1 = lisBMPRGB("bmp/Perso/perso1/profil_fixe.bmp");
	persoCoteGauche2 = lisBMPRGB("bmp/Perso/perso2/profil_fixe.bmp");
	persoCoteGauche3 = lisBMPRGB("bmp/Perso/perso3/profil_fixe.bmp");
	persoCoteGauche4 = lisBMPRGB("bmp/Perso/perso4/profil_fixe.bmp");
	persoCoteGauche5 = lisBMPRGB("bmp/Perso/perso5/profil_fixe.bmp");
	persoCoteGauche6 = lisBMPRGB("bmp/Perso/perso6/profil_fixe.bmp");

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
	bulbizarre_dos = lisBMPRGB("bmp/pokemons/001_bulbizarre/001_bulbizarre_dos.bmp");
	salameche = lisBMPRGB("bmp/pokemons/002_salameche/002_salameche.bmp");
	salameche_dos = lisBMPRGB("bmp/pokemons/002_salameche/002_salameche_dos.bmp");
	carapuce_dos = lisBMPRGB("bmp/pokemons/003_carapuce/003_carapuce_dos.bmp");
	vipeliere = lisBMPRGB("bmp/pokemons/004_vipeliere/004_vipeliere.bmp");
	vipeliere_dos = lisBMPRGB("bmp/pokemons/004_vipeliere/004_vipeliere_dos.bmp");
	gruikui_dos = lisBMPRGB("bmp/pokemons/005_gruikui/005_gruikui_dos.bmp");
	moustillon = lisBMPRGB("bmp/pokemons/006_moustillon/006_moustillon.bmp");
	moustillon_dos = lisBMPRGB("bmp/pokemons/006_moustillon/006_moustillon_dos.bmp");
	germignon_dos = lisBMPRGB("bmp/pokemons/007_germignon/007_germignon_dos.bmp");
	hericendre_dos = lisBMPRGB("bmp/pokemons/008_hericendre/008_hericendre_dos.bmp");
	kaiminus_dos = lisBMPRGB("bmp/pokemons/009_kaiminus/009_kaiminus_dos.bmp");
	tortipouss_dos = lisBMPRGB("bmp/pokemons/010_tortipouss/010_tortipouss_dos.bmp");
	ouisticram_dos = lisBMPRGB("bmp/pokemons/011_ouisticram/011_ouisticram_dos.bmp");
	tiplouf_dos = lisBMPRGB("bmp/pokemons/012_tiplouf/012_tiplouf_dos.bmp");

	//Init images Pokemons évo 1
	bulbizarre_evo1_dos = lisBMPRGB("bmp/pokemons/001_bulbizarre/bulbizarre_evo1_dos.bmp");
	salameche_evo1_dos = lisBMPRGB("bmp/pokemons/002_salameche/salameche_evo1_dos.bmp");
	carapuce_evo1_dos = lisBMPRGB("bmp/pokemons/003_carapuce/carapuce_evo1_dos.bmp");
	vipeliere_evo1_dos = lisBMPRGB("bmp/pokemons/004_vipeliere/vipeliere_evo1_dos.bmp");
	gruikui_evo1_dos = lisBMPRGB("bmp/pokemons/005_gruikui/gruikui_evo1_dos.bmp");
	moustillon_evo1_dos = lisBMPRGB("bmp/pokemons/006_moustillon/moustillon_evo1_dos.bmp");
	germignon_evo1 = lisBMPRGB("bmp/pokemons/007_germignon/germignon_evo1.bmp");
	germignon_evo1_dos = lisBMPRGB("bmp/pokemons/007_germignon/germignon_evo1_dos.bmp");
	hericendre_evo1_dos = lisBMPRGB("bmp/pokemons/008_hericendre/hericendre_evo1_dos.bmp");
	kaiminus_evo1_dos = lisBMPRGB("bmp/pokemons/009_kaiminus/kaiminus_evo1_dos.bmp");
	tortipouss_evo1_dos = lisBMPRGB("bmp/pokemons/010_tortipouss/tortipouss_evo1_dos.bmp");
	ouisticram_evo1 = lisBMPRGB("bmp/pokemons/011_ouisticram/ouisticram_evo1.bmp");
	ouisticram_evo1_dos = lisBMPRGB("bmp/pokemons/011_ouisticram/ouisticram_evo1_dos.bmp");
	tiplouf_evo1 = lisBMPRGB("bmp/pokemons/012_tiplouf/tiplouf_evo1.bmp");
	tiplouf_evo1_dos = lisBMPRGB("bmp/pokemons/012_tiplouf/tiplouf_evo1_dos.bmp");

	//Init images Pokemons évo 2
	bulbizarre_evo2_dos = lisBMPRGB("bmp/pokemons/001_bulbizarre/bulbizarre_evo2_dos.bmp");
	salameche_evo2_dos = lisBMPRGB("bmp/pokemons/002_salameche/salameche_evo2_dos.bmp");
	carapuce_evo2_dos = lisBMPRGB("bmp/pokemons/003_carapuce/carapuce_evo2_dos.bmp");
	vipeliere_evo2_dos = lisBMPRGB("bmp/pokemons/004_vipeliere/vipeliere_evo2_dos.bmp");
	gruikui_evo2_dos = lisBMPRGB("bmp/pokemons/005_gruikui/gruikui_evo2_dos.bmp");
	moustillon_evo2_dos = lisBMPRGB("bmp/pokemons/006_moustillon/moustillon_evo2_dos.bmp");
	germignon_evo2_dos = lisBMPRGB("bmp/pokemons/007_germignon/germignon_evo2_dos.bmp");
	hericendre_evo2_dos = lisBMPRGB("bmp/pokemons/008_hericendre/hericendre_evo2_dos.bmp");
	kaiminus_evo2 = lisBMPRGB("bmp/pokemons/009_kaiminus/kaiminus_evo2.bmp");
	kaiminus_evo2_dos = lisBMPRGB("bmp/pokemons/009_kaiminus/kaiminus_evo2_dos.bmp");
	tortipouss_evo2 = lisBMPRGB("bmp/pokemons/010_tortipouss/tortipouss_evo2.bmp");
	tortipouss_evo2_dos = lisBMPRGB("bmp/pokemons/010_tortipouss/tortipouss_evo2_dos.bmp");
	ouisticram_evo2_dos = lisBMPRGB("bmp/pokemons/011_ouisticram/ouisticram_evo2_dos.bmp");
	tiplouf_evo2_dos = lisBMPRGB("bmp/pokemons/012_tiplouf/tiplouf_evo2_dos.bmp");

}

/* Fonction qui affiche l'image du menu adéquat en fonction de l'état, cette fonction sera appelé en boucle dans le 
	case [Affichage:] du switch(evenement) afin de créer une interractivité avec l'utilisateur.  */

int afficheImg_menus(int salle_actuelle,int etat,int *placex,int *placey, dresseur *perso, dresseur *tour, int *etatdp){

switch(etat){

	// Affiche l'écran d'acceuil
	case 0:
	if (accueil != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, accueil->largeurImage, accueil->hauteurImage, accueil->donneesRGB);
	}
	break;

	// Affiche le premier menu (lancer,charger,quitter)
	case 1:
	if (menu != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, menu->largeurImage, menu->hauteurImage, menu->donneesRGB);
	}
	break;

	// Affiche le menu de choix du starter
	case 2:
	if (choix_pk != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk->largeurImage, choix_pk->hauteurImage, choix_pk->donneesRGB);
	}
	break;

	// Affiche l'image en survol du premier menu, bouton 1 (lancer)
	case 3:
	if (variante_menu_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, variante_menu_1->largeurImage, variante_menu_1->hauteurImage, variante_menu_1->donneesRGB);
	}
	break;

	// Affiche l'image en survol du premier menu, bouton 2 (charger)
	case 4:
	if (variante_menu_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, variante_menu_2->largeurImage, variante_menu_2->hauteurImage, variante_menu_2->donneesRGB);
	}
	break;

	// Affiche l'image en survol du premier menu, bouton 3 (quitter)
	case 5:
	if (variante_menu_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, variante_menu_3->largeurImage, variante_menu_3->hauteurImage, variante_menu_3->donneesRGB);
	}
	break;

	// Affiche le menu de choix du personnage
	case 6:
	if (choix_perso != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso->largeurImage, choix_perso->hauteurImage, choix_perso->donneesRGB);
	}
	break;

	// Affiche la 1ère salle
	case 7:
	if (salle1 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle1->largeurImage, salle1->hauteurImage, salle1->donneesRGB);
		affichePersoChoisis(placex, placey, etatdp, perso);
		afficheRaccourcis();
		
	}
	salle_actuelle = 1;
	perso->etage = salle_actuelle;
	break;

	// Affiche la 2ème salle
	case 8:
	if (salle2 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle2->largeurImage, salle2->hauteurImage, salle2->donneesRGB);
		affichePersoChoisis(placex, placey, etatdp, perso);
		afficheRaccourcis();
	}
	salle_actuelle = 2;
	perso->etage = salle_actuelle;
	break;

	// Affiche la 3ème salle
	case 9:
	if (salle3 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle3->largeurImage, salle3->hauteurImage, salle3->donneesRGB);
		affichePersoChoisis(placex, placey, etatdp, perso);
		afficheRaccourcis();
	}
	salle_actuelle = 3;
	perso->etage = salle_actuelle;
	break;

	// Affiche la 4ème salle
	case 10:
	if (salle4 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle4->largeurImage, salle4->hauteurImage, salle4->donneesRGB);
		affichePersoChoisis(placex, placey, etatdp, perso);
		afficheRaccourcis();
	}
	salle_actuelle = 4;
	perso->etage = salle_actuelle;
	break;

	// Affiche la 5ème salle
	case 11:
	if (salle5 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle5->largeurImage, salle5->hauteurImage, salle5->donneesRGB);
		affichePersoChoisis(placex, placey, etatdp, perso);
		afficheRaccourcis();
	}
	salle_actuelle = 5;
	perso->etage = salle_actuelle;
	break;

	// Affiche la 6ème salle
	case 12:
	if (salle6 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle6->largeurImage, salle6->hauteurImage, salle6->donneesRGB);
		affichePersoChoisis(placex, placey, etatdp, perso);
		afficheRaccourcis();
	}
	salle_actuelle = 6;
	perso->etage = salle_actuelle;
	break;

	// Affiche la 7ème salle
	case 13:
	if (salle7 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle7->largeurImage, salle7->hauteurImage, salle7->donneesRGB);
		affichePersoChoisis(placex, placey, etatdp, perso);
		afficheRaccourcis();
	}
	salle_actuelle = 7;
	perso->etage = salle_actuelle;
	break;

	// Affiche la 8ème salle
	case 14:
	if (salle8 != NULL) {
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, salle8->largeurImage, salle8->hauteurImage, salle8->donneesRGB);
		affichePersoChoisis(placex, placey, etatdp, perso);
	}
	salle_actuelle = 8;
	perso->etage = salle_actuelle;
	break;

	// Affiche l'interface de combat
	case 15:
	if(combat != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat->largeurImage, combat->hauteurImage, combat->donneesRGB);
		interfaceCombat(perso,tour,bulbizarre_dos,salameche,salameche_dos,carapuce_dos,vipeliere,vipeliere_dos,gruikui_dos,moustillon,moustillon_dos,germignon_dos,hericendre_dos,kaiminus_dos,tortipouss_dos,ouisticram_dos,tiplouf_dos,bulbizarre_evo1_dos,salameche_evo1_dos,carapuce_evo1_dos,vipeliere_evo1_dos,gruikui_evo1_dos,moustillon_evo1_dos,germignon_evo1,germignon_evo1_dos,hericendre_evo1_dos,kaiminus_evo1_dos,tortipouss_evo1_dos,ouisticram_evo1,ouisticram_evo1_dos,tiplouf_evo1,tiplouf_evo1_dos,bulbizarre_evo2_dos,salameche_evo2_dos,carapuce_evo2_dos,vipeliere_evo2_dos,gruikui_evo2_dos,moustillon_evo2_dos,germignon_evo2_dos,hericendre_evo2_dos,kaiminus_evo2,kaiminus_evo2_dos,tortipouss_evo2,tortipouss_evo2_dos,ouisticram_evo2_dos,tiplouf_evo2_dos,salle1_marc,salle2_rachid,salle3_bastien,salle4_adriane,salle5_blue,salle6_iris,salle7_morgane,salle8_pierre,salle_actuelle);
	}
	break;

	// Case de test -> surrement à effacer
	case 16:
		effaceFenetre (0, 0, 0);
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 1.1)
	case 17:
	if(choix_pk_1_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_1_1->largeurImage, choix_pk_1_1->hauteurImage, choix_pk_1_1->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 1.2)
	case 18:
	if(choix_pk_1_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_1_2->largeurImage, choix_pk_1_2->hauteurImage, choix_pk_1_2->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 1.3)
	case 19:
	if(choix_pk_1_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_1_3->largeurImage, choix_pk_1_3->hauteurImage, choix_pk_1_3->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 1.4)
	case 20:
	if(choix_pk_1_4 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_1_4->largeurImage, choix_pk_1_4->hauteurImage, choix_pk_1_4->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 2.1)
	case 21:
	if(choix_pk_2_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_2_1->largeurImage, choix_pk_2_1->hauteurImage, choix_pk_2_1->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 2.2)
	case 22:
	if(choix_pk_2_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_2_2->largeurImage, choix_pk_2_2->hauteurImage, choix_pk_2_2->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 2.3)
	case 23:
	if(choix_pk_2_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_2_3->largeurImage, choix_pk_2_3->hauteurImage, choix_pk_2_3->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 2.4)
	case 24:
	if(choix_pk_2_4 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_2_4->largeurImage, choix_pk_2_4->hauteurImage, choix_pk_2_4->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 3.1)
	case 25:
	if(choix_pk_3_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_3_1->largeurImage, choix_pk_3_1->hauteurImage, choix_pk_3_1->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 3.2)
	case 26:
	if(choix_pk_3_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_3_2->largeurImage, choix_pk_3_2->hauteurImage, choix_pk_3_2->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 3.3)
	case 27:
	if(choix_pk_3_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_3_3->largeurImage, choix_pk_3_3->hauteurImage, choix_pk_3_3->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du starter (pk 3.4)
	case 28:
	if(choix_pk_3_4 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_pk_3_4->largeurImage, choix_pk_3_4->hauteurImage, choix_pk_3_4->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du personnage (perso 1.1)
	case 29:
	if(choix_perso_1_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_1_1->largeurImage, choix_perso_1_1->hauteurImage, choix_perso_1_1->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du personnage (perso 1.2)
	case 30:
	if(choix_perso_1_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_1_2->largeurImage, choix_perso_1_2->hauteurImage, choix_perso_1_2->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du personnage (perso 1.3)
	case 31:
	if(choix_perso_1_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_1_3->largeurImage, choix_perso_1_3->hauteurImage, choix_perso_1_3->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du personnage (perso 2.1)
	case 32:
	if(choix_perso_2_1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_2_1->largeurImage, choix_perso_2_1->hauteurImage, choix_perso_2_1->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du personnage (perso 2.2)
	case 33:
	if(choix_perso_2_2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_2_2->largeurImage, choix_perso_2_2->hauteurImage, choix_perso_2_2->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de choix du personnage (perso 2.3)
	case 34:
	if(choix_perso_2_3 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, choix_perso_2_3->largeurImage, choix_perso_2_3->hauteurImage, choix_perso_2_3->donneesRGB);
	}
	break;

	// Affiche l'image en survol de l'interface de combat (attaque 1)
	case 35:
	if(combat_att1 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat_att1->largeurImage, combat_att1->hauteurImage, combat_att1->donneesRGB);
		interfaceCombat(perso,tour,bulbizarre_dos,salameche,salameche_dos,carapuce_dos,vipeliere,vipeliere_dos,gruikui_dos,moustillon,moustillon_dos,germignon_dos,hericendre_dos,kaiminus_dos,tortipouss_dos,ouisticram_dos,tiplouf_dos,bulbizarre_evo1_dos,salameche_evo1_dos,carapuce_evo1_dos,vipeliere_evo1_dos,gruikui_evo1_dos,moustillon_evo1_dos,germignon_evo1,germignon_evo1_dos,hericendre_evo1_dos,kaiminus_evo1_dos,tortipouss_evo1_dos,ouisticram_evo1,ouisticram_evo1_dos,tiplouf_evo1,tiplouf_evo1_dos,bulbizarre_evo2_dos,salameche_evo2_dos,carapuce_evo2_dos,vipeliere_evo2_dos,gruikui_evo2_dos,moustillon_evo2_dos,germignon_evo2_dos,hericendre_evo2_dos,kaiminus_evo2,kaiminus_evo2_dos,tortipouss_evo2,tortipouss_evo2_dos,ouisticram_evo2_dos,tiplouf_evo2_dos,salle1_marc,salle2_rachid,salle3_bastien,salle4_adriane,salle5_blue,salle6_iris,salle7_morgane,salle8_pierre,salle_actuelle);
	}
	break;

	// Affiche l'image en survol de l'interface de combat (attaque 2)
	case 36:
	if(combat_att2 != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat_att2->largeurImage, combat_att2->hauteurImage, combat_att2->donneesRGB);
		interfaceCombat(perso,tour,bulbizarre_dos,salameche,salameche_dos,carapuce_dos,vipeliere,vipeliere_dos,gruikui_dos,moustillon,moustillon_dos,germignon_dos,hericendre_dos,kaiminus_dos,tortipouss_dos,ouisticram_dos,tiplouf_dos,bulbizarre_evo1_dos,salameche_evo1_dos,carapuce_evo1_dos,vipeliere_evo1_dos,gruikui_evo1_dos,moustillon_evo1_dos,germignon_evo1,germignon_evo1_dos,hericendre_evo1_dos,kaiminus_evo1_dos,tortipouss_evo1_dos,ouisticram_evo1,ouisticram_evo1_dos,tiplouf_evo1,tiplouf_evo1_dos,bulbizarre_evo2_dos,salameche_evo2_dos,carapuce_evo2_dos,vipeliere_evo2_dos,gruikui_evo2_dos,moustillon_evo2_dos,germignon_evo2_dos,hericendre_evo2_dos,kaiminus_evo2,kaiminus_evo2_dos,tortipouss_evo2,tortipouss_evo2_dos,ouisticram_evo2_dos,tiplouf_evo2_dos,salle1_marc,salle2_rachid,salle3_bastien,salle4_adriane,salle5_blue,salle6_iris,salle7_morgane,salle8_pierre,salle_actuelle);
	}
	break;

	// Affiche l'image en survol de l'interface de combat (quitter)
	case 37:
	if(combat_quitter != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, combat_quitter->largeurImage, combat_quitter->hauteurImage, combat_quitter->donneesRGB);
		interfaceCombat(perso,tour,bulbizarre_dos,salameche,salameche_dos,carapuce_dos,vipeliere,vipeliere_dos,gruikui_dos,moustillon,moustillon_dos,germignon_dos,hericendre_dos,kaiminus_dos,tortipouss_dos,ouisticram_dos,tiplouf_dos,bulbizarre_evo1_dos,salameche_evo1_dos,carapuce_evo1_dos,vipeliere_evo1_dos,gruikui_evo1_dos,moustillon_evo1_dos,germignon_evo1,germignon_evo1_dos,hericendre_evo1_dos,kaiminus_evo1_dos,tortipouss_evo1_dos,ouisticram_evo1,ouisticram_evo1_dos,tiplouf_evo1,tiplouf_evo1_dos,bulbizarre_evo2_dos,salameche_evo2_dos,carapuce_evo2_dos,vipeliere_evo2_dos,gruikui_evo2_dos,moustillon_evo2_dos,germignon_evo2_dos,hericendre_evo2_dos,kaiminus_evo2,kaiminus_evo2_dos,tortipouss_evo2,tortipouss_evo2_dos,ouisticram_evo2_dos,tiplouf_evo2_dos,salle1_marc,salle2_rachid,salle3_bastien,salle4_adriane,salle5_blue,salle6_iris,salle7_morgane,salle8_pierre,salle_actuelle);
	}
	break;

	// Affiche le menu de pause
	case 38:
	if(menu_pause != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, menu_pause->largeurImage, menu_pause->hauteurImage, menu_pause->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de pause (reprendre)
	case 39:
	if(pause_reprendre != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, pause_reprendre->largeurImage, pause_reprendre->hauteurImage, pause_reprendre->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de pause (sauvegarder)
	case 40:
	if(pause_sauvegarder != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, pause_sauvegarder->largeurImage, pause_sauvegarder->hauteurImage, pause_sauvegarder->donneesRGB);
	}
	break;

	// Affiche l'image en survol du menu de pause (quitter)
	case 41:
	if(pause_quitter != NULL)
	{
		effaceFenetre (0, 0, 0);
		ecrisImage(0, 0, pause_quitter->largeurImage, pause_quitter->hauteurImage, pause_quitter->donneesRGB);
	}
	break;

	// Affiche l'écran de victoire d'un combat
	case 42:
		if(victoire_combat != NULL){
			ecrisImage(0, 0, victoire_combat->largeurImage, victoire_combat->hauteurImage, victoire_combat->donneesRGB);
		}
		*placey = 700;
		
	break;

	// Affiche l'écran de défaite d'un combat
	case 43:
		if(defaite_combat != NULL){
			ecrisImage(0, 0, defaite_combat->largeurImage, defaite_combat->hauteurImage, defaite_combat->donneesRGB);
		}
	break;

	//Case pour tout les boutons quitter.
	//-> On libère les données images proprement puis on termine la boucle evenement.
	case 44:
		
		//Liberation des menus
		libereDonneesImageRGB(&accueil); 
		libereDonneesImageRGB(&menu);
		libereDonneesImageRGB(&variante_menu_1);
		libereDonneesImageRGB(&variante_menu_2); 
		libereDonneesImageRGB(&variante_menu_3);
		libereDonneesImageRGB(&combat);
		libereDonneesImageRGB(&combat_att1);
		libereDonneesImageRGB(&combat_att2);
		libereDonneesImageRGB(&combat_quitter);
		libereDonneesImageRGB(&menu_pause);
		libereDonneesImageRGB(&pause_quitter);
		libereDonneesImageRGB(&pause_reprendre);
		libereDonneesImageRGB(&pause_sauvegarder);
		libereDonneesImageRGB(&victoire_combat);
		libereDonneesImageRGB(&defaite_combat);
		libereDonneesImageRGB(&victoire_combat_survol);
		libereDonneesImageRGB(&defaite_combat_rejouer);
		libereDonneesImageRGB(&defaite_combat_quitter);

		//Libération des images du menu perso
		libereDonneesImageRGB(&choix_perso);
		libereDonneesImageRGB(&choix_perso_1_1);
		libereDonneesImageRGB(&choix_perso_1_2);
		libereDonneesImageRGB(&choix_perso_1_3);
		libereDonneesImageRGB(&choix_perso_2_1);
		libereDonneesImageRGB(&choix_perso_2_2);
		libereDonneesImageRGB(&choix_perso_2_3);

		//Libération des images du menu starter
		libereDonneesImageRGB(&choix_pk);
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
		libereDonneesImageRGB(&bulbizarre_dos);
		libereDonneesImageRGB(&salameche);
		libereDonneesImageRGB(&salameche_dos);
		libereDonneesImageRGB(&carapuce_dos);
		libereDonneesImageRGB(&vipeliere);
		libereDonneesImageRGB(&vipeliere_dos);
		libereDonneesImageRGB(&gruikui_dos);
		libereDonneesImageRGB(&moustillon);
		libereDonneesImageRGB(&moustillon_dos);
		libereDonneesImageRGB(&germignon_dos);
		libereDonneesImageRGB(&hericendre_dos);
		libereDonneesImageRGB(&kaiminus_dos);
		libereDonneesImageRGB(&tortipouss_dos);
		libereDonneesImageRGB(&ouisticram_dos);
		libereDonneesImageRGB(&tiplouf_dos);

		//Libération de la première évolution des pokemons
		libereDonneesImageRGB(&bulbizarre_evo1_dos);
		libereDonneesImageRGB(&salameche_evo1_dos);
		libereDonneesImageRGB(&carapuce_evo1_dos);
		libereDonneesImageRGB(&vipeliere_evo1_dos);
		libereDonneesImageRGB(&gruikui_evo1_dos);
		libereDonneesImageRGB(&moustillon_evo1_dos);
		libereDonneesImageRGB(&germignon_evo1);
		libereDonneesImageRGB(&germignon_evo1_dos);
		libereDonneesImageRGB(&hericendre_evo1_dos);
		libereDonneesImageRGB(&kaiminus_evo1_dos);
		libereDonneesImageRGB(&tortipouss_evo1_dos);
		libereDonneesImageRGB(&ouisticram_evo1);
		libereDonneesImageRGB(&ouisticram_evo1_dos);
		libereDonneesImageRGB(&tiplouf_evo1);
		libereDonneesImageRGB(&tiplouf_evo1_dos);

		//Libération de la deuxième évolution des pokemons
		libereDonneesImageRGB(&bulbizarre_evo2_dos);
		libereDonneesImageRGB(&salameche_evo2_dos);
		libereDonneesImageRGB(&carapuce_evo2_dos);
		libereDonneesImageRGB(&vipeliere_evo2_dos);
		libereDonneesImageRGB(&gruikui_evo2_dos);
		libereDonneesImageRGB(&moustillon_evo2_dos);
		libereDonneesImageRGB(&germignon_evo2_dos);
		libereDonneesImageRGB(&hericendre_evo2_dos);
		libereDonneesImageRGB(&kaiminus_evo2);
		libereDonneesImageRGB(&kaiminus_evo2_dos);
		libereDonneesImageRGB(&tortipouss_evo2);
		libereDonneesImageRGB(&tortipouss_evo2_dos);
		libereDonneesImageRGB(&ouisticram_evo2_dos);
		libereDonneesImageRGB(&tiplouf_evo2_dos);

		
		termineBoucleEvenements(); 
	
	// Survol bouton de victoire
	case 45:
		if (victoire_combat_survol != NULL) // Si l'image a pu etre lue
		{
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, victoire_combat_survol->largeurImage, victoire_combat_survol->hauteurImage, victoire_combat_survol->donneesRGB); // On affiche l'image
		}
	break;
	
	// Survol bouton rejouer de defaite
	case 46:
		if (defaite_combat_rejouer != NULL) // Si l'image a pu etre lue
		{
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, defaite_combat_rejouer->largeurImage, defaite_combat_rejouer->hauteurImage, defaite_combat_rejouer->donneesRGB); // On affiche l'image
		}
	break;
	
	// Survol bouton quitter de defaite
	case 47:
		if (defaite_combat_quitter != NULL) // Si l'image a pu etre lue
		{
			effaceFenetre (0, 0, 0);
			ecrisImage(0, 0, defaite_combat_quitter->largeurImage, defaite_combat_quitter->hauteurImage, defaite_combat_quitter->donneesRGB); // On affiche l'image
		}
	break;

	// Image de choix d'évo 1
	case 48:
		if(choix_pk_evo1 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1->largeurImage, choix_pk_evo1->hauteurImage, choix_pk_evo1->donneesRGB);
		}
	break;

	//Survol evo1 1.1
	case 49:
		if(choix_pk_evo1_1_1 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_1_1->largeurImage, choix_pk_evo1_1_1->hauteurImage, choix_pk_evo1_1_1->donneesRGB);
		}
	break;

	//Survol evo1 1.2
	case 50:
		if(choix_pk_evo1_1_2 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_1_2->largeurImage, choix_pk_evo1_1_2->hauteurImage, choix_pk_evo1_1_2->donneesRGB);
		}
	break;

	//Survol evo1 1.3
	case 51:
		if(choix_pk_evo1_1_3 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_1_3->largeurImage, choix_pk_evo1_1_3->hauteurImage, choix_pk_evo1_1_3->donneesRGB);
		}
	break;

	//Survol evo1 1.4
	case 52:
		if(choix_pk_evo1_1_4 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_1_4->largeurImage, choix_pk_evo1_1_4->hauteurImage, choix_pk_evo1_1_4->donneesRGB);
		}
	break;

	//Survol evo1 2.1
	case 53:
		if(choix_pk_evo1_2_1 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_2_1->largeurImage, choix_pk_evo1_2_1->hauteurImage, choix_pk_evo1_2_1->donneesRGB);
		}
	break;

	//Survol evo1 2.2
	case 54:
		if(choix_pk_evo1_2_2 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_2_2->largeurImage, choix_pk_evo1_2_2->hauteurImage, choix_pk_evo1_2_2->donneesRGB);
		}
	break;

	//Survol evo1 2.3
	case 55:
		if(choix_pk_evo1_2_3 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_2_3->largeurImage, choix_pk_evo1_2_3->hauteurImage, choix_pk_evo1_2_3->donneesRGB);
		}
	break;

	//Survol evo1 2.4
	case 56:
		if(choix_pk_evo1_2_4 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_2_4->largeurImage, choix_pk_evo1_2_4->hauteurImage, choix_pk_evo1_2_4->donneesRGB);
		}
	break;

	//Survol evo1 3.1
	case 57:
		if(choix_pk_evo1_3_1 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_3_1->largeurImage, choix_pk_evo1_3_1->hauteurImage, choix_pk_evo1_3_1->donneesRGB);
		}
	break;

	//Survol evo1 3.2
	case 58:
		if(choix_pk_evo1_3_2 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_3_2->largeurImage, choix_pk_evo1_3_2->hauteurImage, choix_pk_evo1_3_2->donneesRGB);
		}
	break;

	//Survol evo1 3.3
	case 59:
		if(choix_pk_evo1_3_3 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_3_3->largeurImage, choix_pk_evo1_3_3->hauteurImage, choix_pk_evo1_3_3->donneesRGB);
		}
	break;

	//Survol evo1 3.4
	case 60:
		if(choix_pk_evo1_3_4 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo1_3_4->largeurImage, choix_pk_evo1_3_4->hauteurImage, choix_pk_evo1_3_4->donneesRGB);
		}
	break;
	case 61:
		if (ecran_fin != NULL) // Si l'image a pu etre lue
			{
				effaceFenetre (0, 0, 0);
				ecrisImage(0, 0, ecran_fin->largeurImage, ecran_fin->hauteurImage, ecran_fin->donneesRGB); // On affiche l'image
			}
	break;

	// Image de choix d'évo 2
	case 62:
		if(choix_pk_evo2 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2->largeurImage, choix_pk_evo2->hauteurImage, choix_pk_evo2->donneesRGB);
		}
	break;

	//Survol evo2 1.1
	case 63:
		if(choix_pk_evo2_1_1 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_1_1->largeurImage, choix_pk_evo2_1_1->hauteurImage, choix_pk_evo2_1_1->donneesRGB);
		}
	break;

	//Survol evo2 1.2
	case 64:
		if(choix_pk_evo2_1_2 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_1_2->largeurImage, choix_pk_evo2_1_2->hauteurImage, choix_pk_evo2_1_2->donneesRGB);
		}
	break;

	//Survol evo2 1.3
	case 65:
		if(choix_pk_evo2_1_3 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_1_3->largeurImage, choix_pk_evo2_1_3->hauteurImage, choix_pk_evo2_1_3->donneesRGB);
		}
	break;

	//Survol evo2 1.4
	case 66:
		if(choix_pk_evo2_1_4 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_1_4->largeurImage, choix_pk_evo2_1_4->hauteurImage, choix_pk_evo2_1_4->donneesRGB);
		}
	break;

	//Survol evo2 2.1
	case 67:
		if(choix_pk_evo2_2_1 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_2_1->largeurImage, choix_pk_evo2_2_1->hauteurImage, choix_pk_evo2_2_1->donneesRGB);
		}
	break;

	//Survol evo2 2.2
	case 68:
		if(choix_pk_evo2_2_2 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_2_2->largeurImage, choix_pk_evo2_2_2->hauteurImage, choix_pk_evo2_2_2->donneesRGB);
		}
	break;

	//Survol evo2 2.3
	case 69:
		if(choix_pk_evo2_2_3 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_2_3->largeurImage, choix_pk_evo2_2_3->hauteurImage, choix_pk_evo2_2_3->donneesRGB);
		}
	break;

	//Survol evo2 2.4
	case 70:
		if(choix_pk_evo2_2_4 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_2_4->largeurImage, choix_pk_evo2_2_4->hauteurImage, choix_pk_evo2_2_4->donneesRGB);
		}
	break;

	//Survol evo2 3.1
	case 71:
		if(choix_pk_evo2_3_1 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_3_1->largeurImage, choix_pk_evo2_3_1->hauteurImage, choix_pk_evo2_3_1->donneesRGB);
		}
	break;

	//Survol evo2 3.2
	case 72:
		if(choix_pk_evo2_3_2 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_3_2->largeurImage, choix_pk_evo2_3_2->hauteurImage, choix_pk_evo2_3_2->donneesRGB);
		}
	break;

	//Survol evo2 3.3
	case 73:
		if(choix_pk_evo2_3_3 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_3_3->largeurImage, choix_pk_evo2_3_3->hauteurImage, choix_pk_evo2_3_3->donneesRGB);
		}
	break;

	//Survol evo2 3.4
	case 74:
		if(choix_pk_evo2_3_4 != NULL){ // Si l'image est lue
			effaceFenetre(0, 0, 0);
			ecrisImage(0, 0, choix_pk_evo2_3_4->largeurImage, choix_pk_evo2_3_4->hauteurImage, choix_pk_evo2_3_4->donneesRGB);
		}
	break;

	}

return salle_actuelle;
}

 /* Fonction permettant la gestion des cliques de la souris en fonction du menu sur lequel on se trouve
 	et en fonction de l'élément survolé lors du clique par l'user. Cette fonction est appelé dans le case [BoutonSouris] 
 	du switch(evenement) dès qu'il y a un appui sur le bouton gauche de la souris. */

int gereClicBoutons(int *placey,int etat, Pokemon *pokedex,Pokemon *starter, dresseur *perso, dresseur *tour, attaque *tabAtk, int salle_actuelle, int *etat_combat, int *attaque_en_cours, long int *start){
	
	// Si on est sur l'écran d'acceuil et qu'on appuie sur entrée : on affiche le menu 1
	if (etat == 0)
	{
		etat = 1;
	}

	// Si on est dans le choix pk et qu'on clique sur Bulbizarre, on initie starter à Bulbizarre puis on passe au choix du perso
	else if(etat == 17)
	{
		initPk("Bulbizarre",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Salamèche, on initie starter à Salamèche puis on passe au choix du perso
	else if(etat == 21)
	{
		initPk("Salameche",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Carapuce, on initie starter à Carapuce puis on passe au choix du perso
	else if(etat == 25)
	{
		initPk("Carapuce",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Germignon, on initie starter à Germignon puis on passe au choix du perso
	else if(etat == 18)
	{
		initPk("Germignon",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Moustillon, on initie starter à Moustillon puis on passe au choix du perso
	else if(etat == 28)
	{
		initPk("Moustillon",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Héricendre, on initie starter à Héricendre puis on passe au choix du perso
	else if(etat == 22)
	{
		initPk("Hericendre",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Kaiminus, on initie starter à Kaiminus puis on passe au choix du perso
	else if(etat == 26)
	{
		initPk("Kaiminus",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Tortipouss, on initie starter à Tortipouss puis on passe au choix du perso
	else if(etat == 19)
	{
		initPk("Tortipouss",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Ouisticram, on initie starter à Ouisticram puis on passe au choix du perso
	else if(etat == 23)
	{
		initPk("Ouisticram",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Tiplouf, on initie starter à Tiplouf puis on passe au choix du perso
	else if(etat == 27)
	{
		initPk("Tiplouf",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Vipélierre, on initie starter à Vipélierre puis on passe au choix du perso
	else if(etat == 20)
	{
		initPk("Vipelierre",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;
	}

	// Si on est dans le choix pk et qu'on clique sur Gruikui, on initie starter à Gruikui puis on passe au choix du perso
	else if(etat == 24)
	{
		initPk("Gruikui",pokedex,starter,tabAtk, salle_actuelle);
		etat = 6;	
	}

	/*EVOLUTION 1*/
	/*Les cas dans les 100 lignes en dessous servent à connaitre le clic sur quel evo on a cliqué*/


	// Si on est dans le choix pk et qu'on clique sur Bulbizarre, on initie starter à Bulbizarre puis on puis on retourne en salle 3
	else if(etat == 49)
	{
		initPk("Bulbizarre",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Herbizarre");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Salamèche, on initie starter à Salamèche puis on puis on retourne en salle 3
	else if(etat == 53)
	{
		initPk("Salameche",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Reptincel");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Carapuce, on initie starter à Carapuce puis puis on retourne en salle 3
	else if(etat == 57)
	{
		initPk("Carapuce",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Carabaffe");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Germignon, on initie starter à Germignon puis puis on retourne en salle 3
	else if(etat == 50)
	{
		initPk("Germignon",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Macronium");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Moustillon, on initie starter à Moustillon puis on retourne en salle 3
	else if(etat == 60)
	{
		initPk("Moustillon",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Mateloutre");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Héricendre, on initie starter à Héricendre puis on retourne en salle 3
	else if(etat == 54)
	{
		initPk("Hericendre",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Feurisson");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Kaiminus, on initie starter à Kaiminus puis on retourne en salle 3
	else if(etat == 58)
	{
		initPk("Kaiminus",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Crocrodil");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Tortipouss, on initie starter à Tortipouss puis on retourne en salle 3
	else if(etat == 51)
	{
		initPk("Tortipouss",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Boskara");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Ouisticram, on initie starter à Ouisticram puis on retourne en salle 3
	else if(etat == 55)
	{
		initPk("Ouisticram",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Chimpenfeu");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Tiplouf, on initie starter à Tiplouf puis on retourne en salle 3
	else if(etat == 59)
	{
		initPk("Tiplouf",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Prinplouf");
		etat = 9;
	}

	// Si on est dans le choix pk et qu'on clique sur Vipélierre, on initie starter à Vipélierre puis on retourne en salle 3
	else if(etat == 52)
	{
		initPk("Vipelierre",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Lianaja");
		etat = 9;
	}
	// Si on est dans le choix pk et qu'on clique sur Gruikui, on initie starter à Gruikui puis on retourne en salle 3
	else if(etat == 56)
	{
		initPk("Gruikui",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Grotichon");
		etat = 9;	
	}

	/*EVOLUTION 2*/
	/*Les cas dans 100 lignes en dessous servent à connaitre le clic sur quel evo on a cliqué*/

	// Si on est dans le choix pk et qu'on clique sur Bulbizarre, on initie starter à Bulbizarre puis on puis on retourne en salle 3
	else if(etat == 63)
	{
		initPk("Bulbizarre",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Florizarre");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Salamèche, on initie starter à Salamèche puis on puis on retourne en salle 3
	else if(etat == 67)
	{
		initPk("Salameche",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Dracaufeu");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Carapuce, on initie starter à Carapuce puis puis on retourne en salle 3
	else if(etat == 71)
	{
		initPk("Carapuce",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Tortank");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Germignon, on initie starter à Germignon puis puis on retourne en salle 3
	else if(etat == 64)
	{
		initPk("Germignon",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Meganium");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Moustillon, on initie starter à Moustillon puis on retourne en salle 3
	else if(etat == 74)
	{
		initPk("Moustillon",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Clamiral");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Héricendre, on initie starter à Héricendre puis on retourne en salle 3
	else if(etat == 68)
	{
		initPk("Hericendre",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Typhlosion");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Kaiminus, on initie starter à Kaiminus puis on retourne en salle 3
	else if(etat == 72)
	{
		initPk("Kaiminus",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Aligatueur");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Tortipouss, on initie starter à Tortipouss puis on retourne en salle 3
	else if(etat == 65)
	{
		initPk("Tortipouss",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Torterra");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Ouisticram, on initie starter à Ouisticram puis on retourne en salle 3
	else if(etat == 69)
	{
		initPk("Ouisticram",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Simiabraz");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Tiplouf, on initie starter à Tiplouf puis on retourne en salle 3
	else if(etat == 73)
	{
		initPk("Tiplouf",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Pingoleon");
		etat = 12;
	}

	// Si on est dans le choix pk et qu'on clique sur Vipélierre, on initie starter à Vipélierre puis on retourne en salle 3
	else if(etat == 66)
	{
		initPk("Vipelierre",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Majaspic");
		etat = 12;
	}
	// Si on est dans le choix pk et qu'on clique sur Gruikui, on initie starter à Gruikui puis on retourne en salle 3
	else if(etat == 70)
	{
		initPk("Gruikui",pokedex,starter,tabAtk, salle_actuelle+1);
		perso->starter = *starter;
		strcpy(perso->starter.nom, "Roitiflam");
		etat = 12;	
	}

	// Si on est dans le premier menu et qu'on clique sur "lancer une partie" : on affiche le choix du pokemon
	else if (etat == 3)
	{
		etat = 2;
		remove("save_partie.dat");
	}

	// Si on est dans le premier menu et qu'on clique sur "charger une partie" : on affiche le choix du pokemon
		// A CHANGER ! AJOUTER LA SAUVEGARDE 
	else if (etat == 4)
	{
		int fichier = recup_sauvegarde_dresseur(perso);
		
		if(fichier == 1){
			etat = 2;
		}

		else{
			if(perso->etage == 1){
				etat = 7;
			}
			else if(perso->etage == 2){
				etat = 8;
			}
			else if(perso->etage == 3){
				etat = 9;
			} 
			else if(perso->etage == 4){
				etat = 10;
			} 
			else if(perso->etage == 5){
				etat = 11;
			} 
			else if(perso->etage == 6){
				etat = 12;
			}  
			else if(perso->etage == 7){
				etat = 13;
			} 
			else if(perso->etage == 8){
				etat = 14;
			}
		}
	}

	// Si on est dans le premier menu et qu'on clique sur "quitter" : on va dans le case quitter (44)
	else if (etat == 5)
	{
		etat = 44;
	}

	// Si on est dans le choix perso et qu'on clique sur perso 1.1, on initie perso à perso 1.1 puis on affiche la salle 1
	else if(etat == 29)
	{
		initDresseur("Perso 1.1",perso,starter);
		etat = 7;
	}

	// Si on est dans le choix perso et qu'on clique sur perso 1.2, on initie perso à perso 1.2 puis on affiche la salle 1
	else if(etat == 30)
	{
		etat = 7;
		initDresseur("Perso 1.2",perso,starter);
	}

	// Si on est dans le choix perso et qu'on clique sur perso 1.3, on initie perso à perso 1.3 puis on affiche la salle 1
	else if(etat == 31)
	{	
		etat = 7;
		initDresseur("Perso 1.3",perso,starter);
	}

	// Si on est dans le choix perso et qu'on clique sur perso 2.1, on initie perso à perso 2.1 puis on affiche la salle 1
	else if(etat == 32) 
	{
		etat = 7;
		initDresseur("Perso 2.1",perso,starter);
	}

	// Si on est dans le choix perso et qu'on clique sur perso 2.2, on initie perso à perso 2.2 puis on affiche la salle 1
	else if(etat == 33) 
	{
		etat = 7;
		initDresseur("Perso 2.2",perso,starter);
	}

	// Si on est dans le choix perso et qu'on clique sur perso 2.3, on initie perso à perso 2.3 puis on affiche la salle 1
	else if(etat == 34) 
	{
		etat = 7;
		initDresseur("Perso 2.3",perso,starter);
	}

	// Si on est dans l'interface de combat, sur le bouton attaque 1
	else if(etat == 35)
	{	
		if( *etat_combat == 0 && *attaque_en_cours == 0){
			Baston(perso->starter.att[0], perso, tour, *etat_combat, salle_actuelle);
			*attaque_en_cours = 1;
			*start = clock();
		}

		etat = verifVictoireAffichage(etat, perso);
		if(etat == 42){
			perso->starter.niveau += 5;
        	perso->starter.pv = calculPvMax(*perso);
		}
	}

	// Si on est dans l'interface de combat, sur le bouton attaque 2
	else if(etat == 36)
	{	
		if( *etat_combat == 0 && *attaque_en_cours == 0){
			Baston(perso->starter.att[1], perso, tour, *etat_combat, salle_actuelle);
			*attaque_en_cours = 1;
			*start = clock();
		}

		etat = verifVictoireAffichage(etat, perso);
		if(etat == 42){
			perso->starter.niveau += 5;
        	perso->starter.pv = calculPvMax(*perso);
		}
	}

	// Si on est dans l'interface de combat, sur le bouton quitter : on fait reculer la position du personnage et on affiche la salle actuelle
	else if(etat == 37)
	{
		*placey = 500;
		perso->starter.pv = calculPvMax(*perso);
		tour[salle_actuelle - 1].starter.pv = calculPvMax(tour[salle_actuelle - 1]);
		perso->win = 0;
		etat = checkSalle(salle_actuelle,etat);

	}

	// Si on est sur le menu pause et qu'on clique sur "reprendre" : on affiche la salle actuelle
	else if(etat == 39)
	{
		etat = checkSalle(salle_actuelle,etat);	
	}

	// Si on est sur le menu pause et qu'on clique sur "sauvegarder" : on sauvegarder
		//SAUVEGARDE A AJOUTER
	else if(etat == 40)
	{
		sauvegarde_dresseur(perso);
	}

	// Si on est sur le menu pause et qu'on clique sur "quitter" : on renvoie au case quitter (44)
	else if(etat == 41)
	{
		etat = 44;
	}

	// Si on est sur l'écran de victoire et qu'on clique sur le bouton : on avance le personnage et affiche la salle actuelle
	else if(etat == 45){
		*placey = 700;
		if(salle_actuelle == 3){
			etat = 48;
		}
		else if(salle_actuelle == 6){
			etat = 62;
		}
		else{
			etat = checkSalle(salle_actuelle,etat);
		}
		
	}

	// Si on est sur l'écran de défaite et qu'on clique sur "Rejouer le combat" : on re initialise les pv et on affiche l'interface de combat
	else if(etat == 46){
		perso->starter.pv = calculPvMax(*perso);
		tour[salle_actuelle - 1].starter.pv = calculPvMax(tour[salle_actuelle - 1]);
		perso->win = 0;
		etat = 15;
	}

	// Si on est sur l'écran de défaite et qu'on clique sur "quitter" : on re initialise les pv, recule le personnage et on affiche la salle actuelle
	else if(etat == 47){
		*placey = 500;
		perso->starter.pv = calculPvMax(*perso);
		tour[salle_actuelle - 1].starter.pv = calculPvMax(tour[salle_actuelle - 1]);
		perso->win = 0;
		etat = checkSalle(salle_actuelle,etat);
	}
	
	return etat;
}

/* Fonction  servant à définir si la souris survole un des éléments du menu, si oui, on affiche l'image variante
au survol de la souris. Cette fonction sera appelé dans le case [souris] du switch(evenement) qui gère les déplacements de la souris.
Il a fallu pour ce faire apppeler la fonction "activeGestionDeplacementPassifSouris()" pour suivre la souris en continu. */

int verif_survol_souris(int etat){

	// Si on est sur le 1er menu
	if (etat==1)
	{
		// Et qu'on survol le bouton "charger une partie" : on affiche l'image associée
		if(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640)
		{ 
			etat = 4;
		}

		// Et qu'on survol le bouton "lancer une partie" : on affiche l'image associée
		else if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903)
		{
			etat = 3;
		}

		// Et qu'on survol le bouton "quitter" : on affiche l'image associée
		else if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375)
		{
			etat = 5;
		}
	}

	// Si on est sur l'image de survol du bouton 1 menu 1 (lancer une partie) mais qu'on ne survole plus le bouton, on affiche le menu de base
	else if(etat==4)
	{
		if(!(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640))
		{
			etat = 1;
		}
	}

	// Si on est sur l'image de survol du bouton 2 menu 1 (charger une partie) mais qu'on ne survole plus le bouton, on affiche le menu de base
	else if(etat==3)
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903))
		{
			etat = 1;
		}
	}

	// Si on est sur l'image de survol du bouton 3 menu 1 (quitter) mais qu'on ne survole plus le bouton, on affiche le menu de base
	else if(etat==5)
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375))
		{
			etat = 1;
		}
	}

	// Si on est sur le menu du choix du starter
	else if(etat == 2)
	{
		// Et qu'on survole Bulbizarre : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 17;
		}

		// Et qu'on survole Salamèche : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 21;
		}

		// Et qu'on survole Carapuce : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 25;
		}

		// Et qu'on survole Germignon : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 18;
		}

		// Et qu'on survole Héricendre : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 22;
		}

		// Et qu'on survole Kaiminus : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 26;
		}

		// Et qu'on survole Tortipouss : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 19;
		}

		// Et qu'on survole Ouisticram : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 23;
		}

		// Et qu'on survole Tiplouf : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 27;
		}

		// Et qu'on survole Vipélierre : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 20;
		}

		// Et qu'on survole Gruikui : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 24;
		};

		// Et qu'on survole Moustillon : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 28;
		}
	}

	// Si on est sur le menu du choix de personnage
	else if(etat == 6)
	{
		// Et qu'on survole perso 1.1 : on affiche l'image associée
		if(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 29;
		}

		// Et qu'on survole perso 1.2 : on affiche l'image associée
		if(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 30;
		}

		// Et qu'on survole perso 1.3 : on affiche l'image associée
		if(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605) 
		{
			etat = 31;
		}

		// Et qu'on survole perso 2.1 : on affiche l'image associée
		if(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 32;
		} 

		// Et qu'on survole perso 2.2 : on affiche l'image associée
		if(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 33;
		}

		// Et qu'on survole perso 2.3 : on affiche l'image associée
		if(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369) 
		{
			etat = 34;
		}
	}

	// Si on est sur l'interface de combat 
	else if(etat == 15)
	{
		// Et qu'on survole "attaque 1" :  on affiche l'image associée
		if(abscisseSouris() >= 96 && abscisseSouris() <= 608 && ordonneeSouris() >= 86 && ordonneeSouris() <= 212)
		{
			etat = 35;
		}

		// Et qu'on survole "attaque 2" :  on affiche l'image associée
		if(abscisseSouris() >= 658 && abscisseSouris() <= 1174 && ordonneeSouris() >= 87 && ordonneeSouris() <= 206)
		{
			etat = 36;
		}

		// Et qu'on survole "quitter" :  on affiche l'image associée
		if(abscisseSouris() >= 1223 && abscisseSouris() <= 1736 && ordonneeSouris() >= 89 && ordonneeSouris() <= 203)
		{
			etat = 37;
		}
	}

	// Si on est sur le menu en pause (échap)
	else if(etat == 38)
	{
		// Et qu'on survole "reprendre" : on affiche l'image associée
		if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903)
		{
			etat = 39;
		}

		// Et qu'on survole "sauvegarder" : on affiche l'image associée
		if(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640)
		{
			etat = 40;
		}

		// Et qu'on survole "quitter" : on affiche l'image associée
		if(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375)
		{
			etat = 41;
		}
	}

	// Si on est sur l'écran de victoire et qu'on survole le bouton : on affiche l'image associée
	else if(etat == 42){
		if((abscisseSouris() >= 640 && abscisseSouris() <= 1288 && ordonneeSouris() >= 82 && ordonneeSouris() <= 240)) 
		{
			etat = 45;
		}
	}

	// Si on est sur l'écran de victoire
	else if(etat == 43){

		// Et qu'on survole "rejouer le combat" : on affiche l'image associée
		if((abscisseSouris() >= 600 && abscisseSouris() <= 1230 && ordonneeSouris() >= 82 && ordonneeSouris() <= 237)) 
		{
			etat = 46;
		}

		// Et qu'on survole "quitter" : on affiche l'image associée
		if((abscisseSouris() >= 1244 && abscisseSouris() <= 1884 && ordonneeSouris() >= 82 && ordonneeSouris() <= 237)) 
		{
			etat = 47;
		}
	}

	/*EVOLUTION 1*/
	//Si on est sur le menu de choix d'évolution 1
	else if(etat == 48)
	{
		// Et qu'on survole l'évolution 1 de Bulbizarre : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 49;
		}

		// Et qu'on survole l'évolution 1 de Salamèche : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 53;
		}

		// Et qu'on survole l'évolution 1 de Carapuce : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 57;
		}

		// Et qu'on survole l'évolution 1 de Germignon : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 50;
		}

		// Et qu'on survole l'évolution 1 de Héricendre : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 54;
		}

		// Et qu'on survole l'évolution 1 de Kaiminus : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 58;
		}

		// Et qu'on survole l'évolution 1 de Tortipouss : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 51;
		}

		// Et qu'on survole l'évolution 1 de Ouisticram : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 55;
		}

		// Et qu'on survole l'évolution 1 de Tiplouf : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 59;
		}

		// Et qu'on survole l'évolution 1 de Vipélierre : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 52;
		}

		// Et qu'on survole l'évolution 1 de Gruikui : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 56;
		};

		// Et qu'on survole l'évolution 1 de Moustillon : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 60;
		}

	}

	/*EVOLUTION 2*/
	//Si on est sur le menu de choix d'évolution 1
	else if(etat == 62)
	{
		// Et qu'on survole l'évolution 1 de Bulbizarre : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 63;
		}

		// Et qu'on survole l'évolution 1 de Salamèche : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 67;
		}

		// Et qu'on survole l'évolution 1 de Carapuce : on affiche l'image associée
		if(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 71;
		}

		// Et qu'on survole l'évolution 1 de Germignon : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 64;
		}

		// Et qu'on survole l'évolution 1 de Héricendre : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 68;
		}

		// Et qu'on survole l'évolution 1 de Kaiminus : on affiche l'image associée
		if(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 72;
		}

		// Et qu'on survole l'évolution 1 de Tortipouss : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 65;
		}

		// Et qu'on survole l'évolution 1 de Ouisticram : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 69;
		}

		// Et qu'on survole l'évolution 1 de Tiplouf : on affiche l'image associée
		if(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 73;
		}

		// Et qu'on survole l'évolution 1 de Vipélierre : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717) 
		{
			etat = 66;
		}

		// Et qu'on survole l'évolution 1 de Gruikui : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520) 
		{
			etat = 70;
		};

		// Et qu'on survole l'évolution 1 de Moustillon : on affiche l'image associée
		if(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350) 
		{
			etat = 74;
		}

	}

	/* Tout les else if qui suivent servent à revenir à l'image d'origine si on n'est plus en train de survoler l'élément. */

	// Si on est sur l'image en survol du menu de pause mais qu'on ne survole plus "reprendre", on affiche le menu de base
	else if(etat == 39)
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 705 && ordonneeSouris() <= 903))
		{
			etat = 38;
		}
	}

	// Si on est sur l'image en survol du menu de pause mais qu'on ne survole plus "sauvegarder", on affiche le menu de base
	else if(etat == 40)
	{
		if(!(abscisseSouris() >= 486 && abscisseSouris() <= 1437 && ordonneeSouris() >= 439 && ordonneeSouris() <= 640))
		{
			etat = 38;
		}
	}

	// Si on est sur l'image en survol du menu de pause mais qu'on ne survole plus "quitter", on affiche le menu de base
	else if(etat == 41)
	{
		if(!(abscisseSouris() >= 484 && abscisseSouris() <= 1437 && ordonneeSouris() >= 172 && ordonneeSouris() <= 375))
		{
			etat = 38;
		}
	}

	// Si on est sur l'image en survol de l'interface de combat (attaque 1) mais qu'on ne survole plus le bouton, on affiche l'image de base
	else if(etat == 35)
	{
		if(!(abscisseSouris() >= 96 && abscisseSouris() <= 608 && ordonneeSouris() >= 86 && ordonneeSouris() <= 212))
		{
			etat = 15;
		}
	}

	// Si on est sur l'image en survol de l'interface de combat (attaque 2) mais qu'on ne survole plus le bouton, on affiche l'image de base
	else if(etat == 36)
	{
		if(!(abscisseSouris() >= 658 && abscisseSouris() <= 1174 && ordonneeSouris() >= 87 && ordonneeSouris() <= 206))
		{
			etat = 15;
		}
	}

	// Si on est sur l'image en survol de l'interface de combat (attaque 2) mais qu'on ne survole plus le bouton, on affiche l'image de base
	else if(etat == 37)
	{
		if(!(abscisseSouris() >= 1223 && abscisseSouris() <= 1736 && ordonneeSouris() >= 89 && ordonneeSouris() <= 203))
		{
			etat = 15;
		}
	}

	// Si on est sur l'image en survol du menu de choix du personnage (perso 1.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 29)
	{
		if(!(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605))
		{
			etat = 6;
		}
	}

	// Si on est sur l'image en survol du menu de choix du personnage (perso 1.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 30)
	{
		if(!(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605))
		{
			etat = 6;
		}
	}

	// Si on est sur l'image en survol du menu de choix du personnage (perso 1.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 31)
	{
		if(!(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 419 && ordonneeSouris() <= 605))
		{
			etat = 6;
		}
	}

	// Si on est sur l'image en survol du menu de choix du personnage (perso 2.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 32)
	{
		if(!(abscisseSouris() >= 842 && abscisseSouris() <= 1000 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369))
		{
			etat = 6;
		}
	}

	// Si on est sur l'image en survol du menu de choix du personnage (perso 2.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 33)
	{
		if(!(abscisseSouris() >= 1184 && abscisseSouris() <= 1335 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369))
		{
			etat = 6;
		}
	}

	// Si on est sur l'image en survol du menu de choix du personnage (perso 2.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 34)
	{
		if(!(abscisseSouris() >= 1521 && abscisseSouris() <= 1670 && ordonneeSouris() >= 190 && ordonneeSouris() <= 369))
		{
			etat = 6;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 1.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 17)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 1.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 18)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 1.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 19)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 1.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 20)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 2.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 21)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 2.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 22)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 2.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 23)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 2.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 24)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 3.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 25)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 3.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 26)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 3.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 27)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 2;
		}
	}

	// Si on est sur l'image en survol du menu de choix du starter (pk 3.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 28)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 2;
		}
	}

	/*EVOLUTION 1*/

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 1.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 49)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix du d'evo1 (pk 1.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 50)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 1.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 51)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 1.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 52)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 2.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 53)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 2.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 54)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 2.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 55)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 2.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 56)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 3.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 57)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 3.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 58)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 3.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 59)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 48;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 3.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 60)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 48;
		}
	}

	/*EVOLUTIN 2*/
	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 1.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 63)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix du d'evo1 (pk 1.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 64)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 1.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 65)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 1.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 66)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 547 && ordonneeSouris() <= 717)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 2.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 67)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 2.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 68)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 2.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 69)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 2.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 70)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 373 && ordonneeSouris() <= 520)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 3.1) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 71)
	{
		if(!(abscisseSouris() >= 759 && abscisseSouris() <= 923 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 3.2) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 72)
	{
		if(!(abscisseSouris() >= 1064 && abscisseSouris() <= 1203 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 3.3) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 73)
	{
		if(!(abscisseSouris() >= 1342 && abscisseSouris() <= 1481 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 62;
		}
	}

	// Si on est sur l'image en survol du menu de choix d'evo1 (pk 3.4) mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 74)
	{
		if(!(abscisseSouris() >= 1629 && abscisseSouris() <= 1769 && ordonneeSouris() >= 188 && ordonneeSouris() <= 350)) 
		{
			etat = 62;
		}
	}



	//Si on est sur le bouton de l'écran de victoire mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 45){
		if(!(abscisseSouris() >= 640 && abscisseSouris() <= 1288 && ordonneeSouris() >= 82 && ordonneeSouris() <= 240)) 
		{
			etat = 42;
		}
	}

	//Si on est sur "rejouer" de l'écran de défaite mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 46){
		if(!(abscisseSouris() >= 600 && abscisseSouris() <= 1230 && ordonneeSouris() >= 82 && ordonneeSouris() <= 237)) 
		{
			etat = 43;
		}
	}
	
	//Si on est sur "quitter" de l'écran de victoire mais qu'on ne le survole plus, on affiche l'image de base
	else if(etat == 47){
		if(!(abscisseSouris() >= 1244 && abscisseSouris() <= 1884 && ordonneeSouris() >= 82 && ordonneeSouris() <= 237)) 
		{
			etat = 43;
		}
	}

return etat;
}

/*Fonction qui permet d'afficher le personnage je pense qu'elle est temporaire
plus tard le perso sera peut-etre afficher dans une autre fonction
*/

// Afficher un personnage passé en paramètre
void affichePerso(int *placex, int *placey, int *etatdp, DonneesImageRGB *persoFace, DonneesImageRGB *persoDos, DonneesImageRGB *persoCoteDroit, DonneesImageRGB *persoCoteGauche){
	
	if(persoFace != NULL && *etatdp == 2){
		ecrisImage(*placex, *placey, persoFace->largeurImage, persoFace->hauteurImage, persoFace->donneesRGB);
	}
	else if(persoDos != NULL && (*etatdp == 0 || *etatdp == 1)){
		ecrisImage(*placex, *placey, persoDos->largeurImage, persoDos->hauteurImage, persoDos->donneesRGB);
	}
	else if(persoCoteDroit != NULL && *etatdp == 4){
		ecrisImage(*placex, *placey, persoCoteDroit->largeurImage, persoCoteDroit->hauteurImage, persoCoteDroit->donneesRGB);
	}
	else if(persoCoteGauche != NULL && *etatdp == 3){
		ecrisImage(*placex, *placey, persoCoteGauche->largeurImage, persoCoteGauche->hauteurImage, persoCoteGauche->donneesRGB);
	}
}

// Appelle affichePerso avec le personnage choisit
void affichePersoChoisis(int *placex, int *placey, int *etatdp, dresseur *perso){

	if(strcmp(perso->nom,"Perso 1.1") == 0){
			affichePerso(placex, placey, etatdp, persoFace1, persoDos1, persoCoteDroit1, persoCoteGauche1);
		}
		else if(strcmp(perso->nom,"Perso 1.2") == 0){
			affichePerso(placex, placey, etatdp, persoFace2, persoDos2, persoCoteDroit2, persoCoteGauche2);
		}
		else if(strcmp(perso->nom,"Perso 1.3") == 0){
			affichePerso(placex, placey, etatdp, persoFace3, persoDos3, persoCoteDroit3, persoCoteGauche3);
		}
		else if(strcmp(perso->nom,"Perso 2.1") == 0){
			affichePerso(placex, placey, etatdp, persoFace4, persoDos4, persoCoteDroit4, persoCoteGauche4);
		}
		else if(strcmp(perso->nom,"Perso 2.2") == 0){
			affichePerso(placex, placey, etatdp, persoFace5, persoDos5, persoCoteDroit5, persoCoteGauche5);
		}
		else if(strcmp(perso->nom,"Perso 2.3") == 0){
			affichePerso(placex, placey, etatdp, persoFace6, persoDos6, persoCoteDroit6, persoCoteGauche6);
		}
}

//Affiche l'interface de combat avec le pokemon choisit et le boss et son pokemon lié à la salle actuelle
void interfaceCombat(dresseur *perso, dresseur *tour,DonneesImageRGB *bulbizarre_dos,DonneesImageRGB *salameche,DonneesImageRGB *salameche_dos,DonneesImageRGB *carapuce_dos,DonneesImageRGB *vipeliere,DonneesImageRGB *vipeliere_dos,DonneesImageRGB *gruikui_dos,DonneesImageRGB *moustillon,DonneesImageRGB *moustillon_dos,DonneesImageRGB *germignon_dos,DonneesImageRGB *hericendre_dos,DonneesImageRGB *kaiminus_dos,DonneesImageRGB *tortipouss_dos,DonneesImageRGB *ouisticram_dos,DonneesImageRGB *tiplouf_dos,DonneesImageRGB *bulbizarre_evo1_dos,DonneesImageRGB *salameche_evo1_dos,DonneesImageRGB *carapuce_evo1_dos,DonneesImageRGB *vipeliere_evo1_dos,DonneesImageRGB *gruikui_evo1_dos,DonneesImageRGB *moustillon_evo1_dos,DonneesImageRGB *germignon_evo1,DonneesImageRGB *germignon_evo1_dos,DonneesImageRGB *hericendre_evo1_dos,DonneesImageRGB *kaiminus_evo1_dos,DonneesImageRGB *tortipouss_evo1_dos,DonneesImageRGB *ouisticram_evo1,DonneesImageRGB *ouisticram_evo1_dos,DonneesImageRGB *tiplouf_evo1,DonneesImageRGB *tiplouf_evo1_dos,DonneesImageRGB *bulbizarre_evo2_dos,DonneesImageRGB *salameche_evo2_dos,DonneesImageRGB *carapuce_evo2_dos,DonneesImageRGB *vipeliere_evo2_dos,DonneesImageRGB *gruikui_evo2_dos,DonneesImageRGB *moustillon_evo2_dos,DonneesImageRGB *germignon_evo2_dos,DonneesImageRGB *hericendre_evo2_dos,DonneesImageRGB *kaiminus_evo2,DonneesImageRGB *kaiminus_evo2_dos,DonneesImageRGB *tortipouss_evo2,DonneesImageRGB *tortipouss_evo2_dos,DonneesImageRGB *ouisticram_evo2_dos,DonneesImageRGB *tiplouf_evo2_dos,DonneesImageRGB *salle1_marc,DonneesImageRGB *salle2_rachid,DonneesImageRGB *salle3_bastien,DonneesImageRGB *salle4_adriane,DonneesImageRGB *salle5_blue,DonneesImageRGB *salle6_iris,DonneesImageRGB *salle7_morgane,DonneesImageRGB *salle8_pierre, int salle_actuelle){
	
	// Affiche le boss et son pokemon associé
	if(salle_actuelle == 1){
		if(moustillon != NULL){
		ecrisImage(1030, 650,  moustillon->largeurImage, moustillon->hauteurImage, moustillon->donneesRGB);
		}
		if(salle1_marc != NULL){
			ecrisImage(1350, 570, salle1_marc->largeurImage, salle1_marc->hauteurImage, salle1_marc->donneesRGB);
		}
	}

	else if(salle_actuelle == 2){
		if(vipeliere != NULL){
		ecrisImage(1030, 650,  vipeliere->largeurImage, vipeliere->hauteurImage, vipeliere->donneesRGB);
		}
		if(salle2_rachid != NULL){
			ecrisImage(1350, 570, salle2_rachid->largeurImage, salle2_rachid->hauteurImage, salle2_rachid->donneesRGB);
		}
	}
	
	else if(salle_actuelle == 3){
		if(salameche != NULL){
		ecrisImage(1030, 650,  salameche->largeurImage, salameche->hauteurImage, salameche->donneesRGB);
		}

		if(salle3_bastien != NULL){
			ecrisImage(1350, 570, salle3_bastien->largeurImage, salle3_bastien->hauteurImage, salle3_bastien->donneesRGB);
		}
	}

	else if(salle_actuelle == 4){
		if(ouisticram_evo1 != NULL){
		ecrisImage(1030, 650,  ouisticram_evo1->largeurImage, ouisticram_evo1->hauteurImage, ouisticram_evo1->donneesRGB);
		}
		if(salle4_adriane != NULL){
			ecrisImage(1350, 570, salle4_adriane->largeurImage, salle4_adriane->hauteurImage, salle4_adriane->donneesRGB);
		}
	}

	else if(salle_actuelle == 5){
		if(tiplouf_evo1 != NULL){
		ecrisImage(1030, 650,  tiplouf_evo1->largeurImage, tiplouf_evo1->hauteurImage, tiplouf_evo1->donneesRGB);
		}

		if(salle5_blue != NULL){
			ecrisImage(1350, 570, salle5_blue->largeurImage, salle5_blue->hauteurImage, salle5_blue->donneesRGB);
		}
	}

	else if(salle_actuelle == 6){
		if(germignon_evo1 != NULL){
		ecrisImage(1030, 650,  germignon_evo1->largeurImage, germignon_evo1->hauteurImage, germignon_evo1->donneesRGB);
		}
		if(salle6_iris != NULL){
			ecrisImage(1350, 570, salle6_iris->largeurImage, salle6_iris->hauteurImage, salle6_iris->donneesRGB);
		}
	}

	else if(salle_actuelle == 7){
		if(tortipouss_evo2 != NULL){
		ecrisImage(1030, 650,  tortipouss_evo2->largeurImage, tortipouss_evo2->hauteurImage, tortipouss_evo2->donneesRGB);
		}

		if(salle7_morgane != NULL){
			ecrisImage(1350, 570, salle7_morgane->largeurImage, salle7_morgane->hauteurImage, salle7_morgane->donneesRGB);
		}
	}

	else if(salle_actuelle == 8){
		if(kaiminus_evo2 != NULL){
		ecrisImage(1030, 650,  kaiminus_evo2->largeurImage, kaiminus_evo2->hauteurImage, kaiminus_evo2->donneesRGB);
		}
		if(salle8_pierre != NULL){
			ecrisImage(1350, 570, salle8_pierre->largeurImage, salle8_pierre->hauteurImage, salle8_pierre->donneesRGB);
		}
	}


	// Affiche le pokemon choisit au bon stade (starter,evo1,evo2)
	if(strcmp(perso->starter.nom,"Bulbizarre")== 0){
		if(bulbizarre_dos != NULL){
			ecrisImage(391, 397, bulbizarre_dos->largeurImage, bulbizarre_dos->hauteurImage, bulbizarre_dos->donneesRGB);
		}
		
	}
	if(strcmp(perso->starter.nom,"Herbizarre")== 0){
		if(bulbizarre_evo1_dos != NULL){
			ecrisImage(391, 397, bulbizarre_evo1_dos->largeurImage, bulbizarre_evo1_dos->hauteurImage, bulbizarre_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Florizarre")== 0){
		if(bulbizarre_evo2_dos != NULL){
			ecrisImage(391, 397, bulbizarre_evo2_dos->largeurImage, bulbizarre_evo2_dos->hauteurImage, bulbizarre_evo2_dos->donneesRGB);
		}
	}
	
	if(strcmp(perso->starter.nom,"Salameche")== 0){
		if(salameche_dos != NULL){
			ecrisImage(391, 397, salameche_dos->largeurImage, salameche_dos->hauteurImage, salameche_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Reptincel")== 0){
		if(salameche_evo1_dos != NULL){
			ecrisImage(391, 397, salameche_evo1_dos->largeurImage, salameche_evo1_dos->hauteurImage, salameche_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Dracaufeu")== 0){
		if(salameche_evo2_dos != NULL){
			ecrisImage(391, 397, salameche_evo2_dos->largeurImage, salameche_evo2_dos->hauteurImage, salameche_evo2_dos->donneesRGB);
		}
	}

	if(strcmp(perso->starter.nom,"Carapuce") == 0){
		if(carapuce_dos != NULL){
			ecrisImage(391, 397, carapuce_dos->largeurImage, carapuce_dos->hauteurImage, carapuce_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Carabaffe")== 0){
		if(carapuce_evo1_dos != NULL){
			ecrisImage(391, 397, carapuce_evo1_dos->largeurImage, carapuce_evo1_dos->hauteurImage, carapuce_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Tortank")== 0){
		if(carapuce_evo2_dos != NULL){
			ecrisImage(391, 397, carapuce_evo2_dos->largeurImage, carapuce_evo2_dos->hauteurImage, carapuce_evo2_dos->donneesRGB);
		}
	}

	if(strcmp(perso->starter.nom,"Vipelierre") == 0){
		if(vipeliere_dos != NULL){
			ecrisImage(391, 397, vipeliere_dos->largeurImage, vipeliere_dos->hauteurImage, vipeliere_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Lianaja")== 0){
		if(vipeliere_evo1_dos != NULL){
			ecrisImage(391, 397, vipeliere_evo1_dos->largeurImage, vipeliere_evo1_dos->hauteurImage, vipeliere_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Majaspic")== 0){
		if(vipeliere_evo2_dos != NULL){
			ecrisImage(391, 397, vipeliere_evo2_dos->largeurImage, vipeliere_evo2_dos->hauteurImage, vipeliere_evo2_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Gruikui") == 0){
		if(gruikui_dos != NULL){
			ecrisImage(391, 397, gruikui_dos->largeurImage, gruikui_dos->hauteurImage, gruikui_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Grotichon")== 0){
		if(gruikui_evo1_dos != NULL){
			ecrisImage(391, 397, gruikui_evo1_dos->largeurImage, gruikui_evo1_dos->hauteurImage, gruikui_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Roitiflam")== 0){
		if(gruikui_evo2_dos != NULL){
			ecrisImage(391, 397, gruikui_evo2_dos->largeurImage, gruikui_evo2_dos->hauteurImage, gruikui_evo2_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Moustillon") == 0){
		if(moustillon_dos != NULL){
			ecrisImage(391, 397, moustillon_dos->largeurImage, moustillon_dos->hauteurImage, moustillon_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Mateloutre")== 0){
		if(moustillon_evo1_dos != NULL){
			ecrisImage(391, 397, moustillon_evo1_dos->largeurImage, moustillon_evo1_dos->hauteurImage, moustillon_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Clamiral")== 0){
		if(moustillon_evo2_dos != NULL){
			ecrisImage(391, 397, moustillon_evo2_dos->largeurImage, moustillon_evo2_dos->hauteurImage, moustillon_evo2_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Germignon") == 0){
		if(germignon_dos != NULL){
			ecrisImage(391, 397, germignon_dos->largeurImage, germignon_dos->hauteurImage, germignon_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Macronium")== 0){
		if(germignon_evo1_dos != NULL){
			ecrisImage(391, 397, germignon_evo1_dos->largeurImage, germignon_evo1_dos->hauteurImage, germignon_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Meganium")== 0){
		if(germignon_evo2_dos != NULL){
			ecrisImage(391, 397, germignon_evo2_dos->largeurImage, germignon_evo2_dos->hauteurImage, germignon_evo2_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Hericendre") == 0){
		if(hericendre_dos != NULL){
			ecrisImage(391, 397, hericendre_dos->largeurImage, hericendre_dos->hauteurImage, hericendre_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Feurisson")== 0){
		if(hericendre_evo1_dos != NULL){
			ecrisImage(391, 397, hericendre_evo1_dos->largeurImage, hericendre_evo1_dos->hauteurImage, hericendre_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Typhlosion")== 0){
		if(hericendre_evo2_dos != NULL){
			ecrisImage(391, 397, hericendre_evo2_dos->largeurImage, hericendre_evo2_dos->hauteurImage, hericendre_evo2_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Kaiminus") == 0){
		if(kaiminus_dos != NULL){
			ecrisImage(391, 397, kaiminus_dos->largeurImage, kaiminus_dos->hauteurImage, kaiminus_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Crocrodil")== 0){
		if(kaiminus_evo1_dos != NULL){
			ecrisImage(391, 397, kaiminus_evo1_dos->largeurImage, kaiminus_evo1_dos->hauteurImage, kaiminus_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Aligatueur")== 0){
		if(kaiminus_evo2_dos != NULL){
			ecrisImage(391, 397, kaiminus_evo2_dos->largeurImage, kaiminus_evo2_dos->hauteurImage, kaiminus_evo2_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Tortipouss") == 0){
		if(tortipouss_dos != NULL){
			ecrisImage(391, 397, tortipouss_dos->largeurImage, tortipouss_dos->hauteurImage, tortipouss_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Boskara")== 0){
		if(tortipouss_evo1_dos != NULL){
			ecrisImage(391, 397, tortipouss_evo1_dos->largeurImage, tortipouss_evo1_dos->hauteurImage, tortipouss_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Torterra")== 0){
		if(tortipouss_evo2_dos != NULL){
			ecrisImage(391, 397, tortipouss_evo2_dos->largeurImage, tortipouss_evo2_dos->hauteurImage, tortipouss_evo2_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Ouisticram") == 0){
		if(ouisticram_dos != NULL){
			ecrisImage(391, 397, ouisticram_dos->largeurImage, ouisticram_dos->hauteurImage, ouisticram_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Chimpenfeu")== 0){
		if(ouisticram_evo1_dos != NULL){
			ecrisImage(391, 397, ouisticram_evo1_dos->largeurImage, ouisticram_evo1_dos->hauteurImage, ouisticram_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Simiabraz")== 0){
		if(ouisticram_evo2_dos != NULL){
			ecrisImage(391, 397, ouisticram_evo2_dos->largeurImage, ouisticram_evo2_dos->hauteurImage, ouisticram_evo2_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Tiplouf") == 0){
		if(tiplouf_dos != NULL){
			ecrisImage(391, 397, tiplouf_dos->largeurImage, tiplouf_dos->hauteurImage, tiplouf_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Prinplouf")== 0){
		if(tiplouf_evo1_dos != NULL){
			ecrisImage(391, 397, tiplouf_evo1_dos->largeurImage, tiplouf_evo1_dos->hauteurImage, tiplouf_evo1_dos->donneesRGB);
		}
	}
	if(strcmp(perso->starter.nom,"Pingoleon")== 0){
		if(tiplouf_evo2_dos != NULL){
			ecrisImage(391, 397, tiplouf_evo2_dos->largeurImage, tiplouf_evo2_dos->hauteurImage, tiplouf_evo2_dos->donneesRGB);
		}
	}
	affichePv(*perso);
	affichePv(tour[salle_actuelle - 1]);
	afficheAttaque(*perso);
}

//Fonction qui sert à afficher le nom d'attaque en fonction du pokémon choisit
void afficheAttaque(dresseur perso){
	epaisseurDeTrait(6);
	afficheChaine(perso.starter.att[0].nom,58,150,115);
	afficheChaine(perso.starter.att[1].nom,58,690,115);

}

//Verifie dans quelle salle on est pour renvoyer dans le case associé à la salle
int checkSalle(int salle_actuelle, int etat){
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
	return etat;
}


void affichePv(dresseur perso){

	int x1, x2, y1, y2, taille, marge;
	if (strcmp(perso.statut, "Boss") == 0){
		x1 = x1_pv_adverse;
		x2 = x2_pv_adverse;
		y1 = y1_pv_adverse;
		y2 = y2_pv_adverse;
		taille = taille_texte_adverse;
		marge = marge_niveau_adverse;
	}
	else{
		x1 = x1_pv;
		x2 = x2_pv;
		y1 = y1_pv;
		y2 = y2_pv;
		taille = taille_texte;
		marge = marge_niveau;
	}

	couleurCourante(255,255,255);
	rectangle(x1, y1, x2, y2);

	//Jauge
	if((perso.starter.pv / calculPvMax(perso)*100) >= 50){
		couleurCourante(0,255,0);
	}
	else if ((perso.starter.pv / calculPvMax(perso)*100) < 50 && (perso.starter.pv / calculPvMax(perso)*100) >= 25){
		couleurCourante(255,160,0);
	}
	else{
		couleurCourante(255,0,0);
	}
	rectangle(x1, y1, x1 + ((perso.starter.pv * (x2 - x1)) / calculPvMax(perso)), y2);
	

	couleurCourante(0,0,0);
	//Contour
	epaisseurDeTrait(epaisseur_trait);
	ligne(x1 - epaisseur_trait, y1 - epaisseur_trait/2, x2 + epaisseur_trait, y1 - epaisseur_trait/2); // ligne du bas
	ligne(x1 - epaisseur_trait/2, y1 - epaisseur_trait/2, x1 - epaisseur_trait/2, y2 + epaisseur_trait/2); // ligne a gauche
	ligne(x2 + epaisseur_trait/2, y1 - epaisseur_trait/2, x2 + epaisseur_trait/2, y2 + epaisseur_trait/2); //ligne a droite
	ligne(x1 - epaisseur_trait, y2 + epaisseur_trait/2, x2 + epaisseur_trait, y2 + epaisseur_trait/2); //ligne du haut

	//Affiche texte PV
	epaisseurDeTrait(taille/5);
	afficheChaine("PV", taille, x2 + taille/2, y1 + (y2-y1-taille)/2);

	//Affiche Niveau Pokemon
	epaisseurDeTrait(taille/7);
	char niveau[10] = "", tmp[10] = "";
	sprintf(tmp, "%0.f", perso.starter.niveau);
	strcat(niveau, "Niv.");
	strcat(niveau, tmp);
	if(perso.starter.niveau >= 10){
		marge += 20;
	}
	afficheChaine(niveau, taille-5, x2 - marge, y2 + taille/2);

	//Affiche Nom Pokemon
	afficheChaine(perso.starter.nom, taille, x1 + taille/4, y2 + taille/2);
}

void afficheRaccourcis(){
	epaisseurDeTrait(2);
	couleurCourante(0,0,0);
	afficheChaine("Pour afficher le menu de pause : Echap",20,34,196);
	afficheChaine("Pour quitter : Q",20,34,227);
}
