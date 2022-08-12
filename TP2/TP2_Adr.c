#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int plus_grand_element_tableau(int * tab_entier, int taille_tableau){
    int i_suivant=1;
    int variable_temporaire=0; //Je cree une variable pour stocker temporairement
    int e=0; 
    int i=0;
    /*
        Avec l'entier e, je vais réitérer l'opération "sizeof(tab_entier)" fois.
        Pour faire plus français, Si mon tableau à une taille de 30 élements
        alors je vais parcourir une première fois chaque case 
        de tout mon tableau et comparer l'actuelle
        case à la case suivante, je répète l'opération 30 fois 
    */

    while(e<taille_tableau && i_suivant<taille_tableau){
        
        if(tab_entier[i]<tab_entier[i_suivant]){
            
            variable_temporaire=tab_entier[i];
            tab_entier[i]=tab_entier[i_suivant]; 
            tab_entier[i_suivant]=variable_temporaire; 
            
        }
        i++;
        i_suivant++;
         
        if(i_suivant==taille_tableau-1){
            e++;
            i=0;
            i_suivant=1;
        }
        
    }
    return tab_entier[0];
    
}

int * verser_valeurs_tab(int * tab1, int * tab2,int taille_tab1,int taille_tab2){
    int i=0,e=0;
    int variable_de_stockage=0;
    int variable_de_marquage=0;
    //Dans le paramètre taille_tab2 on rentre la taille de tab2.
    if(taille_tab1!=taille_tab2){
        //On ajuste la taille de tab2 à tab1
        for(i=0,e=0; i<taille_tab2,e<taille_tab1;i++,e++){
            if(i<e){ //tab1 est plus grand que tab2
               taille_tab2=taille_tab1; //On affecte la taille de tab1 à la taille de tab2
         
                //Il faut augmenter la taille de tab2
                variable_de_stockage=i; //i c'est l'indice de tab2
                variable_de_marquage=1;
                i=taille_tab2;
                e=taille_tab1;
            } 
            else{//tab2 est plus grand que tab1
                //Il faut réduire la taille de tab2
                taille_tab2=taille_tab1;
                variable_de_stockage=i; //e c'est l'indice de tab1
                variable_de_marquage=2;
                i=taille_tab2;
                e=taille_tab1;
            }
        }
    }

    for(int i=0; i<taille_tab2;i++){
        tab2[i]=tab1[i];
    }
    
    // printf("Taille de tab1 : %d \n",sizeof(tab1));
    // printf("Taille de tab2 : %d ",sizeof(tab2));
    return tab2;
}

// int * verser_valeurs_3_tab(int * tab1, int * tab2, int * tab3,int taille_tab1,int taille_tab2, int taille_tab3){
    
//     //tab2 met dans tab1 et remplace ses informations par les siennes.
//     verser_valeurs_tab(tab2,tab1,taille_tab1,taille_tab2);
//     //tab3 met dans tab1 et remplace ses informations par les siennes.
//     tab1=verser_valeurs_tab(tab3,tab1,taille_tab1,taille_tab3);
//     return tab1;   
// }

int nombre_caractere_dans_string(char * string){
    int i=0;
    while(string[i]!='\0'){
        i++;
    }
    return i;
}

int plus_long_prefixe_commun(char * chaine1, char * chaine2){
    int i=0;
    char * prefixe_commun;
    int e=0;
    int pre,x;
    prefixe_commun=malloc(sizeof(char)*10);
    for(i=0,e=0, pre=0;i<sizeof(chaine1), e<sizeof(chaine2), pre<sizeof(prefixe_commun);i++,e++,pre++){
        //if(strcmp(chaine1[i],chaine2[e])==0){

	if(chaine1[i]==chaine2[e]){
            // strcat(prefixe_commun,&chaine1[i]);
            prefixe_commun[pre]=chaine1[i];
        }
        // prefixe[x]=prefixe_commun[pre];
    }
    printf("Le prefixe commun entre les mots %s et %s est %s.\n", chaine1 , chaine2 ,prefixe_commun);
    // }
    int valeur_retourne=0;
    for(int f=0;f<sizeof(prefixe_commun);f++){
	if(prefixe_commun[f]=='\0'){
		valeur_retourne=f;
		f=sizeof(prefixe_commun)-1;
	}
    }

    free(prefixe_commun);
    return valeur_retourne;
}



//Testez ces deux programmes avec la commande time qui permet de mesurer le temps d'exécution d'un programme, et expliquez le résultat.




//Toutes ces consignes sont faites dans un seule et même fonction.

//  Écrivez une fonction qui prend un tableau d'entiers à deux dimensions et demande à l'utilisateur de saisir les valeurs avec scanf

//  Écrivez une fonction qui affiche un tableau d'entiers à deux dimensions en affichant un retour à la ligne a la fin de chaque ligne.
//Ces deux consignes sont ensembles

//  Écrivez une fonction qui renvoie le produit de la somme de chaque ligne d'un tableau d'entier à deux dimensions



int ** remplir_tableau(){
	unsigned int taille_db_pointer=2,taille_pointer_in_db_pointer=5;
	int ** tab_rempli;
	tab_rempli=malloc(taille_db_pointer*sizeof(tab_rempli));
	for(int i=0; i<taille_db_pointer;i++){
		tab_rempli[i]=malloc(taille_pointer_in_db_pointer*sizeof(int)); 
		//tab_rempli[indice] signifie un tableau de pointeur
		//Dans chaque indice se cache un pointeur.
		// On inscrit 5 chiffres dans le futur tableau.
	}
	
	/*
	Dans un double pointeur, le "*tab_rempli" sigifie la valeur du pointeur pointée qui est aussi l'adresse de la variable pointée par ce même sous pointeur. Un sous pointeur c'est un simple pointeur contenu dans le double pointeur voir plus qu'un double pointeur!  
	Le "tab_rempli" signifie l'adresse du pointeur pointé.
		
	*/ 

    	unsigned int ite=1;
	int somme_chaque_dimension=0;
	//remplissage du tableau
	for(int e=0;e<taille_db_pointer;e++){
		for(int i=0; i<taille_pointer_in_db_pointer;i++){ // sizeof(int)
	 		printf("Entrez un chiffre %d!\n", ite);
			scanf("%d", &tab_rempli[e][i]);	
        		ite++;
    		}
	}
	//affichage
	int n=1;
    	printf("tab rempli vaut :\n");
	for(int e=0;e<taille_db_pointer;e++){
		if(n==1){
			printf("%dère dimension !\n",n);
			
		}else{
			printf("%dème dimension !\n",n);
		}
		
	    	for(int i=0; i<taille_pointer_in_db_pointer;i++){
			printf("%d\n", tab_rempli[e][i]);
			somme_chaque_dimension=somme_chaque_dimension+tab_rempli[e][i];
						
	    	}

		if(n==1){
			printf("La somme de la %dère dimension est %d\n",n, somme_chaque_dimension);
			
		}else{
			printf("La somme de la %dème dimension est %d\n",n, somme_chaque_dimension);
		}
		n++;
		somme_chaque_dimension=0;
		
	}

	free(tab_rempli);
	return tab_rempli;

}

//Questions

/*

La deuxième dimension aura 6 caractères en tout si on compte le caractère '\0'.
*/


void debug(unsigned int nb_lignes, unsigned int nb_colonnes,char matrice[][nb_colonnes]){
	//char * chaine_courante=malloc(nb_colonnes*sizeof(char));

	/*	
	char ** liste_chaines;
	
	for(int e=0;e<nb_lignes;e++){
		liste_chaines[e]=malloc(nb_colonnes*sizeof(char));
	}	
	*/

	for(int i=0; i<nb_lignes;i++){
		//strcat(liste_chaines[i],matrice[i]);
		//for(int e=0; e<nb_colonnes;e++){
			printf("%s \n",matrice[i]);
		//}
	}
	
	//Affichage
	//free(liste_chaines); //On libère la zone mémoire
	//return liste_chaines;

}



