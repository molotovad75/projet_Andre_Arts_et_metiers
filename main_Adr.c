#include <stdio.h>
#include <stdlib.h>
#include "TP2_Adr.c"



int main(){
    //Exercices rappels tableaux
    //jeu de test
    // int tab_entier[]={5,7,1699,5,3,7,6,788,16,39,45};

    //Écrire une fonction qui prend un tableau d'entiers et renvoie le plus grand élément.
    //printf("Le plus grand element de notre tableau est %d !",plus_grand_element_tableau(tab_entier,sizeof(tab_entier)/sizeof(int)));
 

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

    // for(int i=0;i<sizeof(tab1)/sizeof(int);i++){
    //     printf("%d  ",tab1[i]);
    // }

    /*
        Écrire une fonction qui renvoie le nombre de caractères 
        d'une chaine de caractères (sans utiliser la fonction 
        strlen de string.h)
    */

    // char * string="Andre";
    // printf("Il y a %d caractères dans %s ",nombre_caractere_dans_string(string), string );
    

    /*
        Écrire une fonction qui prend deux chaines de caractères 
        et renvoie la taille du plus long préfixe commun 
        (exemple pour "avion" et "aviation", 
        la fonction revoie 3 car le plus long préfixe commun est "avi").
    */


    //Initialisation des deux chaines de caractères

    char * chaine1="Pantin";
    char * chaine2="Pantalon";
    plus_long_prefixe_commun(chaine1,chaine2);
    // printf("Le plus long préfixe commun est %s ! \n", );
    

    
    system("pause");
    return 0;
}