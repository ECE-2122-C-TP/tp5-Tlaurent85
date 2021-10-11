//
// Created by Sebastien LAURENT on 06/10/2021.
//

#ifndef TP5_INFO_FONCTION_H
#define TP5_INFO_FONCTION_H
#define LMAX 3
#define CMAX 4
#define TAILLE_MAX2 12
typedef struct {
    int numerateur, denominateur;
} NbRatio;
NbRatio saisirINFOS();
void afficherInfos(NbRatio infos);
int PGCD(NbRatio ratio);
NbRatio simplifier(NbRatio ratio);
NbRatio multiplication(NbRatio ratio1, NbRatio ratio2);
NbRatio addition(NbRatio ratio1, NbRatio ratio2);
void remplirMatrice(int superMatrice[LMAX][CMAX],int L,int C);
void afficherTableau(int superTableau[], int n);
void remplirTableau(int superTableau[],int n);
int plusGrandeValeur(int superTableau[],int n);
void copieValeurs(int superMatrice[LMAX][CMAX],int superTableau[TAILLE_MAX2],L,C);

#endif //TP5_INFO_FONCTION_H
