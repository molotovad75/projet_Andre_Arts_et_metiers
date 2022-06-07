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

        // while(variable_de_stockage<e && variable_de_marquage==1){
        //     //Dans le cas ou il faut augmenter la taille de tab2
        //     tab2[variable_de_stockage+1]=tab1[variable_de_stockage];
        //     variable_de_stockage++;

        // }

        // while(variable_de_stockage>e && variable_de_marquage==2){
        //     //Dans le cas ou il faut reduire la taille de tab2
        //     tab2[variable_de_stockage]=tab1[variable_de_stockage-1];
        //     variable_de_stockage--;
        // }

        // taille_tab2=sizeof(tab2)/sizeof(int);
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

void plus_long_prefixe_commun(char * chaine1, char * chaine2){
    int i=0;
    char * prefixe_commun;
    // char prefixe[100];
    // prefixe_commun=malloc(100);
    int e=0;
    // if(nombre_caractere_dans_string(chaine1)>nombre_caractere_dans_string(chaine2)){
    //     while(chaine1[i]!='\0' ){
    //         if(strcmp(&chaine1[i],&chaine2[i])==0){
    //             strcat(&prefixe_commun[e],&chaine1[i]);
    //         }
    //         e++;
    //         i++;
    //     }
    // }else{
    //     while(chaine2[i]!='\0'){
    //         if(strcmp(&chaine1[i],&chaine2[i])==0){
    //             strcat(&prefixe_commun[e],&chaine1[i]);
                
    //         }
    //         e++;
    //         i++;
    //     }
    // }
    // while(chaine2[i]!='\0' && chaine1[i]!='\0' ){
    int pre,x;
    for(i=0,e=0, pre=0;i<10, e<10, pre<10;i++,e++,pre++){
        if(strcmp(&chaine1[i],&chaine2[e])==0){
            // strcat(prefixe_commun,&chaine1[i]);
            prefixe_commun[pre]=chaine1[i];
        }
        // prefixe[x]=prefixe_commun[pre];
    }
    printf("%s", prefixe_commun);
    // }

    // free(prefixe_commun);
    // return prefixe;
}