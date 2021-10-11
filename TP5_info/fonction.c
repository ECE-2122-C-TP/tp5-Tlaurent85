//
// Created by Sebastien LAURENT on 06/10/2021.
//
#include "fonction.h"
#include "stdio.h"
#define TAILLE_MAX 100
#define LMAX 3
#define CMAX 4
#define TAILLE_MAX2 12

//Fonction qui ne prend aucun parametre et qui renvoit(OUT) le numerateur en denominateur d'un nombre rationnel

NbRatio saisirINFOS() {
    NbRatio infos;
    printf("veuillez pour notre plus grand plaisir affichez les informations liées a notre nombre rationnelle :\n");
    scanf("%d %d", &infos.numerateur, &infos.denominateur);
    return infos ;
}
//Fonction qui prend en entrée(IN) le nombre rationnel infos et qui affiche le numerateur et denominateur)
void afficherInfos(NbRatio infos ){
    printf("le numérateur est de %d et le dénominateur est de %d\n",infos.numerateur, infos.denominateur);
}
//Fonction qui prend en entré ratio et qui renvoie le PGCD du numerateur et denominateur
int PGCD(NbRatio ratio){




}
//Fonction qui a pour entrée et sortie ratio mais simplifier a la fin
NbRatio simplifier(NbRatio ratio){



}

//Fonction qui a pour entrées ratio1& ratio2 et qui renvoie la multiplication de ses deux nombres
NbRatio multiplication(NbRatio ratio1, NbRatio ratio2){
    NbRatio ratio;
    ratio.numerateur = ratio1.numerateur  * ratio2.numerateur;
    ratio.denominateur= ratio1.denominateur * ratio2.denominateur;
    return ratio;
}
//Fonction qui a pour entrées ratio1& ratio2 et qui renvoie l'addition' de ses deux nombres
NbRatio addition(NbRatio ratio1, NbRatio ratio2){
    NbRatio ratio;
    ratio.denominateur=ratio1.denominateur * ratio2.denominateur;
    ratio.numerateur= ratio1.denominateur*ratio2.numerateur + ratio1.numerateur*ratio2.denominateur;
    return ratio;
}
//Fonction qui prend en entrée un tableau et sa taille et qui affiche ce tableau
void afficherTableau(int superTableau[],int n){
    printf("la taille du tableau est de %d",n);
    for(int i=0; i<n;i++){
        printf("%d",superTableau[i]);
    }return;
}
// Fonction qui prend en entrées un tableau et sa taille et qui affiche les valeurs de ce tableau
void remplirTableau(int superTableau[],int n){
    for (int i = 0; i < n; i++) { // on remplit les cases de la taille logique//
        printf("Veuillez saisir la valeur n°%d\n", i+1);
        scanf("%d", &superTableau[i]);
    }
    for (int i = 0; i < n - 1; i++) { // tous les éléments, sauf le dernier (-1), sont suivis d'une virgule
    printf("%d, ", superTableau[i]);
}
    printf("%d.", superTableau[n - 1]); // le dernier, lui, est suivi d'un point

    printf("%d.", superTableau[n - 1]); // le dernier, lui, est suivi d'un point
return;}
//Fonction qui prend en entrées un tableau et ca taille et qui renvoie la plus grande valeure de ce tableau
int plusGrandeValeur(int superTableau[],int n){
    int resultat=0;
    for (int i=0;i<n;i++) {
        if (superTableau[i] > resultat) {
            resultat = superTableau[i];
        }
    }return resultat;}
//Fonction qui prend en entrées une matrice,son nombre de lignes & de colones et qui renvoie les valeures de cette matrice
void remplirMatrice(int superMatrice[LMAX][CMAX],int L,int C){
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            printf("valeur pour(%d,%d)\n",i,j);
            scanf("%d",&superMatrice[i][j]);
        }
    }
return;}
//Fonction qui prend en entrées une matrice ses lignes et colones et un tableau et qui envoie les valeurs de la matrice dans le tableau
void copieValeurs(int superMatrice[LMAX][CMAX],int superTableau[TAILLE_MAX2],L,C) {
    printf("Copie des valeurs en cours\n");
    int j = 0;
    for (int i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            superTableau[4*i+j]=superMatrice[i][j];
            printf("%d",superTableau[4*i+j]);
        }
    }
    printf("Copie des valeurs finie\n");
}