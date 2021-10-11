//
// Created by Sebastien LAURENT on 06/10/2021.
//
#include "Exos.h"
#include "fonction.h"
#include "stdio.h"
#define TAILLE_MAX 100
#define LMAX 3
#define CMAX 4
#define TAILLE_MAX2 12

void exercice1(){
        NbRatio monNbR1 = saisirINFOS();
        afficherInfos(monNbR1);
        NbRatio monNbR2=saisirINFOS();
        afficherInfos(monNbR2);
        NbRatio resultat1=addition(monNbR1,monNbR2);
        afficherInfos(resultat1);
        NbRatio  resultat2= multiplication(monNbR1,monNbR2);
        afficherInfos(resultat2);
        //simplifier(monNbR1);
        //PGCD(monNbR1);
        //PGCD(monNbR2);
        //simplifier(monNbR2);


}
void exercice2(){
    int n=0;
    int superTableau[TAILLE_MAX];
    printf("veuillez saisir le nombre d'entier dans le tableau\n");
    scanf("%d",&n);
    if (n > TAILLE_MAX) {
        printf("erreur systheme, nous ne pouvons stocker que %d valeurs.", TAILLE_MAX);
        return; }// met fin au programme (au main)
    remplirTableau(superTableau,n);
    afficherTableau(superTableau,n);
    printf("la plus grande valeur de notre super Tableau est%d", plusGrandeValeur(superTableau,n));

}

void exercice3(){
    int superMatrice[LMAX][CMAX];
    int superTableau[TAILLE_MAX2];
    remplirMatrice(superMatrice,LMAX,CMAX);
    copieValeurs(superMatrice,superTableau,LMAX,CMAX);

}
