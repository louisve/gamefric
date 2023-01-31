#include "Librairie/GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "Librairie/BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "Librairie/ESLib.h" // Pour utiliser valeurAleatoire()
#include "Fonctions/affichage.h"
#include "Fonctions/sauvegarde.h"
#include "Fonctions/moteur.h" 
#include "Fonctions/pokedex.h"
#include "Fonctions/utils.h"

// Largeur et hauteur par defaut d'une image correspondant a nos criteres
#define LargeurFenetre 1920
#define HauteurFenetre 1080

// Fonction de trace de cercle
void cercle(float centreX, float centreY, float rayon);
/* La fonction de gestion des evenements, appelee automatiquement par le systeme
des qu'une evenement survient */

void gestionEvenement(EvenementGfx evenement);

int main(int argc, char **argv){
    // initialiseGfx(argc, argv);

    deplacementsperso();

    //Pokemon pokedex[NUM_POKEMON];

    // prepareFenetreGraphique("Pokemon : L'Ascension des Champions", LargeurFenetre, HauteurFenetre);
    // /* Lance la boucle qui aiguille les evenements sur la fonction gestionEvenement ci-apres,
    //     qui elle-meme utilise fonctionAffichage ci-dessous */
    // lanceBoucleEvenements();
    return 0;
}
/* Fonction de trace de cercle */
void cercle(float centreX, float centreY, float rayon)
{
    const int Pas = 20; // Nombre de secteurs pour tracer le cercle
    const double PasAngulaire = 2.*M_PI/Pas;
    int index;
    for (index = 0; index < Pas; ++index) // Pour chaque secteur
    {
        const double angle = 2.*M_PI*index/Pas; // on calcule l'angle de depart du secteur
        triangle(centreX, centreY,
                 centreX+rayon*cos(angle), centreY+rayon*sin(angle),
                 centreX+rayon*cos(angle+PasAngulaire), centreY+rayon*sin(angle+PasAngulaire));
            // On trace le secteur a l'aide d'un triangle => approximation d'un cercle
    }
}
/* La fonction de gestion des evenements, appelee automatiquement par le systeme
des qu'une evenement survient */
void gestionEvenement(EvenementGfx evenement)
{
    static bool pleinEcran = false; // Pour savoir si on est en mode plein ecran ou pas
    static DonneesImageRGB *Joueurs = NULL; // L'image a afficher au centre de l'ecran
   
    switch (evenement)
    {
        case Initialisation:

            // Configure le systeme pour generer un message Temporisation
            // toutes les 20 millisecondes
            demandeTemporisation(20);
            break;
        case Temporisation:
            
            break;
        case Affichage:
            // On part d'un fond d'ecran blanc
            effaceFenetre (255, 255, 255);
            
            break;
        case Clavier:
            printf("%c : ASCII %d\n", caractereClavier(), caractereClavier());
            switch (caractereClavier())
            {
                case 'Q': /* Pour sortir quelque peu proprement du programme */
                case 'q':
                    libereDonneesImageRGB(&image); /* On libere la structure image,
                    c'est plus propre, meme si on va sortir du programme juste apres */
                    termineBoucleEvenements();
                    break;
                case 'F':
                case 'f':
                    pleinEcran = !pleinEcran; // Changement de mode plein ecran
                    if (pleinEcran)
                        modePleinEcran();
                    else
                        redimensionneFenetre(LargeurFenetre, HauteurFenetre);
                    break;
                case 'R':
                case 'r':
                    // Configure le systeme pour generer un message Temporisation
                    // toutes les 20 millisecondes (rapide)
                    demandeTemporisation(20);
                    break;
                case 'L':
                case 'l':
                    // Configure le systeme pour generer un message Temporisation
                    // toutes les 100 millisecondes (lent)
                    demandeTemporisation(100);
                    break;
                case 'S':
                case 's':
                    // Configure le systeme pour ne plus generer de message Temporisation
                    demandeTemporisation(-1);
                    break;
                case 'b':
                case 'B':


                    break;
                case 'z':
                case 'Z':

                    break;

            }
            break;
        case ClavierSpecial:
            printf("ASCII %d\n", toucheClavier());
            break;
        case BoutonSouris:
            if (etatBoutonSouris() == GaucheAppuye)
            {
                
                //printf("Bouton gauche appuye en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
                // Si le bouton gauche de la souris est appuye, faire repartir
                // la balle de la souris
                //xBalle = abscisseSouris();
                //yBalle = ordonneeSouris();
            }
            else if (etatBoutonSouris() == GaucheRelache)
            {
                printf("Bouton gauche relache en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
            }
            break;
        case Souris: // Si la souris est deplacee
            break;
        case Inactivite: // Quand aucun message n'est disponible
            break;
        case Redimensionnement: // La taille de la fenetre a ete modifie ou on est passe en plein ecran
            // Donc le systeme nous en informe
            // printf("Largeur : %d\t", largeurFenetre());
            // printf("Hauteur : %d\n", hauteurFenetre());
            break;
    }
}
