
#ifndef fonction_H
#define fonction_H

//fonction qui affiche toute la sequence de base de l'affichage
void affichage_de_base();

//fonction qui recupere ce que l'utilisateur veux faire
int user_shape_choice();
int ask_length(int shape);
int ask_height(int shape);


//fonction qui fera le calcule de toute les surfaces. les infos doivent etre transmise en m tre.
void calculation_des_surfaces(int shape, int length, int height);

#endif