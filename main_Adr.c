#include <stdio.h>
#include <stdlib.h>
#include "TP2/TP2_Adr.h"
#include "TP3/TP3_Adr.h"
//#define NBL 1000
//#define NBC 2000


int main(int argc, char *argv[]){
    //Exercices rappels tableaux
    //jeu de test
   

    //Écrire une fonction qui prend un tableau d'entiers et renvoie le plus grand élément.
    //  int tab_entier[]={5,7,1699,5,3,7,6,788,16,39,45};
    // printf("Le plus grand element de notre tableau est %d !",plus_grand_element_tableau(tab_entier,sizeof(tab_entier)/sizeof(int)));
 

    /*Écrire une fonction 
    qui prend deux tableaux d'entiers 
    et recopie le premier dans le second. 
    Réfléchissez aux paramètres pour gérer correctement 
    les cas où les deux tableaux ne font pas la même taille.*/

    //Dans cet exercice c'est tab1 qui verse ses valeurs de tableaux dans tab2[]
    // int tab1[]={1,0,8,4,-1,6,7,8,9,10,11,12,13,14,656};
    // int tab2[]={1,2,3,4,5,6,7,8,9,10,11,12,13,16,18,19,17};
    // verser_valeurs_tab(tab1,tab2,sizeof(tab1)/sizeof(int),sizeof(tab2)/sizeof(int));
    
    //tab1 met dans tab2 et remplace ses informations par les siennes.

    // for(int i=0;i<sizeof(tab1)/sizeof(int);i++){
    //     printf("%d  ",tab2[i]);
    // }

    /*
        Écrire une fonction qui prend trois tableaux d'entiers 
        et recopie le 2e puis le 3e dans le 1er. 
        Vous pouvez (devez ?) vous servir de la fonction précédente.
    */

    // int tab1[]={1,0,8,4,-1,6,7,8,9,10,11,12,13,14,656};
    // int tab2[]={1,2,3,4,5,6,7,8,9,10,11,12,13,16,18,19,17};
    // int tab3[]={6,8,16,2,5,50,1500,240,96,11,41,98,45,33,685,9852,20};
    // verser_valeurs_3_tab(tab1,tab2,tab3,sizeof(tab1)/sizeof(int),sizeof(tab2)/sizeof(int),sizeof(tab3)/sizeof(int));

    // for(int i=0;i<sizeof(tab2)/sizeof(int);i++){
    //     printf("%d  ",taille_tab2[i]);
    // }

    /*
        Écrire une fonction qui renvoie le nombre de caractères 
        d'une chaine de caractères (sans utiliser la fonction 
        strlen de string.h)
    */

    //char * string="Appareil permettant la réalisation de figurines.";
    //printf("Il y a %d caractères dans %s ",nombre_caractere_dans_string(string), string );
    

    /*
        Écrire une fonction qui prend deux chaines de caractères 
        et renvoie la taille du plus long préfixe commun 
        (exemple pour "avion" et "aviation", 
        la fonction revoie 3 car le plus long préfixe commun est "avi").
    */


    //Initialisation des deux chaines de caractères
     /*char * chaine1;
     char * chaine2;
     printf("Veuillez entrer 2 mots !\n");
     chaine1=malloc(sizeof(char)*10); 
     chaine2=malloc(sizeof(char)*10);
     printf("Première chaine :\n");
     scanf("%s", chaine1);
     printf("Seconde chaine :\n");
     scanf("%s", chaine2);
     
     printf("Le préfixe commun entre ces deux mots fait %d caractères !\n", plus_long_prefixe_commun(chaine1,chaine2) );
     free(chaine1);
     free(chaine2);*/


	
	//Programme 1
    //int matrice[NBL][NBC];
    //int i,j,sum;
    //for(i=0;i<NBL;i++)
    //    for(j=0;j<NBC;j++)
    //        sum+=matrice[i][j];
    //return sum;     
	
	//Programme 2
    //int matrice[NBL][NBC];
    //int i,j,sum;
    //for(j=0;j<NBC;j++)
    //    for(i=0;i<NBL;i++)
    //        sum+=matrice[i][j];
    //return sum; 

	
     //printf("Veuillez remplir le tableau de nombres !\n");
     //remplir_tableau();

	/*
     char grid[8][7] = {
        "bwrwbw",
        "wrwbwr",
        "bwrwbw",
        "wrwbwr",
        "bwrwbw",
        "wrwbwr",
        "bwrwbw",
        "wrwbwr"
    };
    debug(8,7,grid);
	*/

	

     //system("pause");
     return 0;
}
