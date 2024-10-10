//-----------------------------------------------------------------------------------//
// Nom du projet 		: demo SLO1 2024-2025
// Nom du fichier 		: main.c
// Date de cr�ation 	: 19.09.2024
// Date de modification : ----
//
// Auteur 				: hayatache (Benjamin Schafroth)
//
// Version				: 0.x
//
// Description          : code pour calculateur de surface
// Remarques :            
//Contrainte :
//les variables longueur, largeur ou hauteur, rayon doivent être déclarées en entier !!!
//CDC minimal : dans la fonction main, uniquement instruction permettant de faire des calculs (sans affiche, sans demande de utilisateur)
//CDC avancé : toujours dans la fonction main reprendre le principe minimal, ajout des fcts permettant de faire des demandes utilisateurs (affichage + saisie clavier)
//CDC expert : reprendre le CDC avancé mais réaliser un fichier headerFile + un autre fichier source permettant d'avoir 4 fcts différentes		  
//----------------------------------------------------------------------------------//
#define _USE_MATH_DEFINES
//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveaut� du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf

// appel de librairie
#include <math.h>   
#include <corecrt_math_defines.h>
#include "fonction.h"
//utilisation du define


// prototype - WARNING a evit� ici


// variable globale (evit� de les utilis�s car rend le code moins sur)


// CONSTANTE - WARNING a evit� ici
#define Carre 0
#define Rectangle 1
#define Triangle 2
#define Cercle 3

// declaration des fonctions 

//-- fonction principale -> main
int main(void)
{
    //creation des define pour le choix de la surface


    //variable pour le choix du systeme
    int choix_surface = 0;

    //creation des variables pour les longueurs

    int longueur_base_m = 0;
    int longueur_hauteur_m = 0;
    int longueur_rayon_m = 0;

    //creation des variables pour les surfaces

    int surface_carre_m2 = 0;
    int surface_rectangle_m2 = 0;
    int surface_triangle_m2 = 0;
    int surface_cercle_m2 = 0;
    //creation des variables pour les math
    double pi = M_PI;

    choix_surface = user_shape_choice();
    switch (choix_surface) {
    case Carre:
        longueur_base_m = ask_length(Carre);
        calculation_des_surfaces(Carre, longueur_base_m, 0);
        break;
    case Rectangle:
        longueur_base_m = ask_length(Rectangle);
        longueur_hauteur_m = ask_height(Rectangle);
        calculation_des_surfaces(Rectangle, longueur_base_m, longueur_hauteur_m);
        break;
    case Triangle:
        longueur_base_m = ask_length(Triangle);
        longueur_hauteur_m = ask_height(Triangle);
        calculation_des_surfaces(Triangle, longueur_base_m, longueur_hauteur_m);
        break;
    case Cercle:
        longueur_rayon_m = ask_length(Cercle);
        calculation_des_surfaces(Cercle, longueur_base_m, 0);
        break;
    }


    
}