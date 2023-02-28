#include "Librairie/GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "Librairie/BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "Librairie/ESLib.h" // Pour utiliser valeurAleatoire()
#include "Fonctions/affichage.h"
#include "Fonctions/sauvegarde.h"
#include "Fonctions/moteur.h" 
#include "Fonctions/pokedex.h"
#include "Fonctions/utils.h"

// definition des constantes correspondant à nos criteres.
#define LargeurFenetre 1920
#define HauteurFenetre 1080
#define largeurPerso 50
#define hauteurPerso 60


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
    static bool pleinEcran = true; // Pour savoir si on est en mode plein ecran ou pas
    activeGestionDeplacementPassifSouris(); //Pour suivre la souris en continu.
    //Position initial du perso doivent être initialiser ici pour être utilisé dans les autres fichiers
    static int x = 960 - largeurPerso/2;
    static int y = 285 - hauteurPerso/2;
    static int *placex = &x;
    static int *placey = &y;
    static Pokemon *pokedex;
    static attaque *tabAtk;
    static dresseur *tour;
    static Pokemon starter;
    static Pokemon *pstarter = &starter;
    static dresseur perso;
    static dresseur *pperso = &perso;
    static int salle_actuelle = 0;
    static int dp = 0;
    static int *etatdp = &dp;
    static int verif_victoire = 0;
    

    switch (evenement)
    {
        case Initialisation:
            {
            initImage();
            pokedex = malloc(NUM_POKEMON*sizeof(Pokemon));
            pokedex = readPokedex();
            tabAtk = malloc(NUM_ATTAQUE*sizeof(attaque));
            tabAtk = readAttaque();
            tour = initTour(pokedex,tabAtk);
            pstarter = malloc(sizeof(Pokemon));
            demandeTemporisation(20); //tempo toutes les 20ms.
            }
            break;
        case Temporisation:
            {
                rafraichisFenetre(); //Lance le case [Affichage] en boucle.
            }
            break;
        case Affichage:
            {
            // On part d'un fond d'ecran noir
            effaceFenetre (0, 0, 0);
            salle_actuelle = afficheImg_menus(salle_actuelle,etat,placex,placey,pperso,tour, etatdp);
            }
            break;

        case Clavier:
            //printf("%c : ASCII %d\n", caractereClavier(), caractereClavier());
            switch (caractereClavier())
            {
                case 'Q': /* Pour sortir quelque peu proprement du programme */
                case 'q':
                    etat = 44; // Renvoie au case'42' qui libere la structure image et termine la boucle evenement.
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
                case 13: //code ascii de la touche "entrée".
                    if(etat == 0)
                    {
                        etat = gereClicBoutons(placey,etat,pokedex,pstarter,pperso,tour,tabAtk,salle_actuelle, verif_victoire);
                    }    
                    break;
                case 27: //code ascii de la touche "echap".
                    if(etat != 0 && etat != 1 && etat != 3 && etat != 4 && etat != 5 ) // Si on est pas sur l'acceuil ou le menu principal->
                    {
                        etat = 38; //-> Alors on peut passer à l'état 38 (écran pause) si la touche échap est préssé.
                    }
                break;

                case 't':
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
                break;
            }
            break;

        case ClavierSpecial:
         switch(toucheClavier())
            {
                case 13: //Pour se déplacer vers le haut grâce à la flèche du haut
                    etat = ControleDeplacementsHaut(placey, placex, etat, etatdp, verif_victoire);
                    break;
                case 14: //Pour se déplacer vers le bas grâce à la flèche du bas
                    etat = ControleDeplacementsBas(placey, placex, etat, etatdp);
                    break;
                case 15: //Pour se déplacer vers la gauche grâce à la flèche de gauche
                    etat = ControleDeplacementsGauche(placey, placex, etat, etatdp);
                    break;
                case 16: //Pour se déplacer vers la droite grâce à la flèche de droite
                    etat = ControleDeplacementsDroite(placey, placex, etat, etatdp);
                    break;
            }
            break;

        case BoutonSouris:{
            if (etatBoutonSouris() == GaucheAppuye)
            {
                etat = gereClicBoutons(placey,etat,pokedex,pstarter,pperso,tour,tabAtk,salle_actuelle, verif_victoire);
            }
            else if (etatBoutonSouris() == GaucheRelache)
            {
                //printf("Bouton gauche relache en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
            }
            }
            break;

        case Souris: // Si la souris est deplacee
            {
                etat = verif_survol_souris(etat);
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
