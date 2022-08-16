#include <stdio.h>
#include <stdlib.h>
#include "grid.h"
//#include <MLV_window.h>
#include "MLV/MLV_all.h" // /usr/share/doc/mlv/examples/beginner/


void debug(char matrice[][NBC]){
	for(int e=0; e<NBL;e++){
		//for(int i=0; i<NBC;i++){
			printf("%s \n",matrice[e]);
		//}
		//printf("\n");
	}
}

/*
Écrivez une fonction compute_size() qui prend en paramètre deux entiers w, h qui représentent respectivement la largeur et la hauteur d'une fenêtre graphique. La fonction calcule alors la plus grande valeur a possible pour représenter toute la grille avec des carrés de coté a de sorte qu'elle tienne entièrement dans la fenêtre. Indice : les deux contraintes à respecter sont w >= nbc x a et h >= nbl x a. Le coté a est donc le minimum entre deux valeurs que vous pouvez calculer indépendamment.

*/

double compute_size(double w, double h){ /* w (width) est la longueur et h (height) est la hauteur*/
	 double a=1; //Taille d'un coté du carré. On considère que la valeur minimale de a est 1.
	 double a_longeur=0;
	 double a_hauteur=0;	
	int fin=0;
	while(w >= NBC*a && h >= NBL*a && fin!=1){ /*Il faut toujours que la longeur et la hauteur soit égale ou supérieur aux dimensions de la grille initiale de mots*/

		a_longeur=w/NBC;
		a_hauteur=h/NBL;
		if(a_longeur==a_hauteur){
			a=a_longeur;
		}else{
			a=0;
		}

		fin=1;
	}
	return a;
	//Fonction à vérifier.
}

/*
À l'aide de la bibliothèque MLV, écrivez la fonction draw_grid() qui prend en paramètre la grille et qui l'affiche dans une fenêtre graphique. Les cases seront des carrés de coté calculé avec la fonction compute_size() (vous avec dans la bibliothèque à votre disposition les fonctions MLV_get_window_height() et MLV_get_window_width() pour récupérer les dimensions de la fenêtre). Attention, les coordonnées (0,0) sont en haut à gauche de la fenêtre (ça tombe bien, comme dans notre représentation textuelle)...

*/


void draw_grid(){
	//printf("%d\n", );
	MLV_get_window_height();

}


