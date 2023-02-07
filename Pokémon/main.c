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

int main(int argc, char **argv)
{
    initialiseGfx(argc, argv); //Initialisation de l'acceleration graphique si elle existe

    // On ouvre la fenetre de notre application
	prepareFenetreGraphique("Pokemon : L'Ascension des Champions", LargeurFenetre, HauteurFenetre);
    modePleinEcran();

    /* Lance la boucle qui aiguille les evenements sur la fonction gestionEvenement ci-apres,
        qui elle-meme utilise fonctionAffichage ci-dessous */
    lanceBoucleEvenements();
    return 0;
}

/* La fonction de gestion des evenements, appelee automatiquement par le systeme
des qu'une evenement survient */
void gestionEvenement(EvenementGfx evenement)
{
    static int etat = 0; // on commence à état = 0 (ecran-titre)
    static bool pleinEcran = false; // Pour savoir si on est en mode plein ecran ou pas

    switch (evenement)
    {
        case Initialisation:
            {
            /* Le message "Initialisation" est envoye une seule fois, au debut du
            programme : il permet de fixer "image" a la valeur qu'il devra conserver
            jusqu'a la fin du programme : soit "image" reste a NULL si l'image n'a
            pas pu etre lue, soit "image" pointera sur une structure contenant
            les caracteristiques de l'image "imageNB.bmp" */
            // Configure le systeme pour generer un message Temporisation
            // toutes les 20 millisecondes
            initImage();
            demandeTemporisation(20);
            }
            break;
        case Temporisation:
            {
                rafraichisFenetre();
            }
            break;
        case Affichage:
            {
            // On part d'un fond d'ecran noir
            effaceFenetre (0, 0, 0);
            afficheImg_menus(etat);
            }
            break;

        case Clavier:
            //printf("%c : ASCII %d\n", caractereClavier(), caractereClavier());
            switch (caractereClavier())
            {
                case 'Q': /* Pour sortir quelque peu proprement du programme */
                case 'q':
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
                case 13:
                    etat=gereClicBoutons(etat);    
                    break;
            }
            break;

        case ClavierSpecial:
            //printf("ASCII %d\n", toucheClavier());
            break;

        case BoutonSouris:{
            if (etatBoutonSouris() == GaucheAppuye)
            {
                etat=gereClicBoutons(etat);
            }
            else if (etatBoutonSouris() == GaucheRelache)
            {
                //printf("Bouton gauche relache en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
            }
            }
            break;

        case Souris: // Si la souris est deplacee
            if(etatBoutonSouris()==1){
                
            }
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
