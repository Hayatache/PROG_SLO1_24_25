//include de toute les librairies utile dans le projet
#include "fonction.h"
#include <math.h>   
#include <corecrt_math_defines.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#define Carre 0
#define Rectangle 1
#define Triangle 2
#define Cercle 3
//fonction qui affiche toute la sequence de base de l'affichage
void affichage_de_base() {

}

//fonction qui recupere ce que l'utilisateur veux faire
int user_shape_choice() {
    int choice;
    printf("choisissez quel surface vous voulez calculez \n \t pour un carre entre 0 \n \t pour un rectangle entre 1 \n \t pour un triangle entre 2 \n \t pour un cercle entre 3 \n");
    while (1 == 1) {
        printf("choix :");
        scanf("%d", &choice);
        if (choice == 0 || choice == 1 || choice == 2 || choice == 3) {
            return choice;
        }
        else {
            printf("la valeur entre n'est pas acceptable.");
        }
    }
}

//fonction qui fera le calcule de toute les surfaces. les infos doivent etre transmise en m�tre.

int ask_length(int shape) {
    float length=0;
    switch (shape) {
    case Carre:
        printf("entrer la longueur du cote de votre carre : ");
            scanf("%d", &length);
        break;
    case Rectangle:
        printf("entrer la largeur de votre rectangle : ");
            scanf("%d", &length);
        break;
    case Triangle:
        printf("entrer la longueur de la base de votre triangle : ");
            scanf("%d", &length);
        break;
    case Cercle:
        printf("entrer le rayon de votre cercle : ");
            scanf("%d", &length);
        break;
    }
    return length;
}

int ask_height(int shape) {
    float height=0;
    switch (shape) {
    case Rectangle:
        printf("\nentrer la hauteur de votre rectangle :");
        scanf("%d", &height);
        break;
    case Triangle:
        printf("\nentrer la hauteur de votre triangle :");
        scanf("%d", &height);
        break;
    }
    return height;
}

void calculation_des_surfaces(int shape, float length, float height) {
    //choix du calcule
    float surface=0;
    double pi = M_PI;
    switch (shape) {
    case Carre:
        surface = length * length;
        break;
    case Rectangle:
        surface = length * height;
        break;
    case Triangle:
        surface = (length * height) / 2;
        break;
    case Cercle:
        surface = M_PI * (length * length);
        break;
    }
    printf("la surface de la forme vaut : %d m2", surface);
}