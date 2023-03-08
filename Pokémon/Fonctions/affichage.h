#ifndef AFFICHAGE_H
#define AFFICHAGE_H

//Include des librairies

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "../Librairie/GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "../Librairie/BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "../Librairie/ESLib.h" // Pour utiliser valeurAleatoire()

//include des fichiers

#include "moteur.h"
#include "sauvegarde.h"
#include "utils.h"

// Define
#define x1_pv 1205
#define y1_pv 422
#define x2_pv 1763
#define y2_pv 470
#define taille_texte 40
#define marge_niveau 90

#define epaisseur_trait 4

#define x1_pv_adverse 296
#define y1_pv_adverse 877
#define x2_pv_adverse 746
#define y2_pv_adverse 904
#define taille_texte_adverse 30
#define marge_niveau_adverse 70


//Initialisation de fonctions/structures

void initImage(); 
int afficheImg_menus(int salle_actuelle,int etat,int *placex,int *placey, dresseur *perso, dresseur *tour, int *etatdp);
int gereClicBoutons(int *placey,int etat, Pokemon *pokedex,Pokemon *starter, dresseur *perso, dresseur *tour, attaque *tabAtk, int salle_actuelle, int *etat_combat, int *attaque_en_cours, long int *start);
int verif_survol_souris(int etat);
void affichePerso(int *placex, int *placey, int *etatdp, DonneesImageRGB *persoFace, DonneesImageRGB *persoDos, DonneesImageRGB *persoCoteDroit, DonneesImageRGB *persoCoteGauche);
void affichePersoChoisis(int *placex, int *placey, int *etatdp, dresseur *perso);
void interfaceCombat(dresseur *perso, dresseur *tour,DonneesImageRGB *bulbizarre_dos,DonneesImageRGB *salameche,DonneesImageRGB *salameche_dos,DonneesImageRGB *carapuce_dos,DonneesImageRGB *vipeliere,DonneesImageRGB *vipeliere_dos,DonneesImageRGB *gruikui_dos,DonneesImageRGB *moustillon,DonneesImageRGB *moustillon_dos,DonneesImageRGB *germignon_dos,DonneesImageRGB *hericendre_dos,DonneesImageRGB *kaiminus_dos,DonneesImageRGB *tortipouss_dos,DonneesImageRGB *ouisticram_dos,DonneesImageRGB *tiplouf_dos,DonneesImageRGB *bulbizarre_evo1_dos,DonneesImageRGB *salameche_evo1_dos,DonneesImageRGB *carapuce_evo1_dos,DonneesImageRGB *vipeliere_evo1_dos,DonneesImageRGB *gruikui_evo1_dos,DonneesImageRGB *moustillon_evo1_dos,DonneesImageRGB *germignon_evo1,DonneesImageRGB *germignon_evo1_dos,DonneesImageRGB *hericendre_evo1_dos,DonneesImageRGB *kaiminus_evo1_dos,DonneesImageRGB *tortipouss_evo1_dos,DonneesImageRGB *ouisticram_evo1,DonneesImageRGB *ouisticram_evo1_dos,DonneesImageRGB *tiplouf_evo1,DonneesImageRGB *tiplouf_evo1_dos,DonneesImageRGB *bulbizarre_evo2_dos,DonneesImageRGB *salameche_evo2_dos,DonneesImageRGB *carapuce_evo2_dos,DonneesImageRGB *vipeliere_evo2_dos,DonneesImageRGB *gruikui_evo2_dos,DonneesImageRGB *moustillon_evo2_dos,DonneesImageRGB *germignon_evo2_dos,DonneesImageRGB *hericendre_evo2_dos,DonneesImageRGB *kaiminus_evo2,DonneesImageRGB *kaiminus_evo2_dos,DonneesImageRGB *tortipouss_evo2,DonneesImageRGB *tortipouss_evo2_dos,DonneesImageRGB *ouisticram_evo2_dos,DonneesImageRGB *tiplouf_evo2_dos,DonneesImageRGB *salle1_marc,DonneesImageRGB *salle2_rachid,DonneesImageRGB *salle3_bastien,DonneesImageRGB *salle4_adriane,DonneesImageRGB *salle5_blue,DonneesImageRGB *salle6_iris,DonneesImageRGB *salle7_morgane,DonneesImageRGB *salle8_pierre, int salle_actuelle);
int checkSalle(int salle_actuelle, int etat);
void affichePv(dresseur perso);
void afficheRaccourcis();
void afficheAttaque(dresseur perso);

#endif
