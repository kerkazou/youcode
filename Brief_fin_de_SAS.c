#include <stdio.h>
#include <windows.h>
#define Nbr_clients 200

int choix;
char CIN[10], Nom[10], Prenom[10];
double Montant;
typedef struct {
        char CIN[10];
        char Nom[10];
        char Prenom[10];
        double Montant;
    }compt;  

void Affichage_Menu(){
    printf("\t \t Bienvenu sur la bonque :\n \n \n");
    printf("1) Introduire un compte bancaire :\n \n");
    printf("2) Introduire plusieurs comptes bancaires :\n \n");
    printf("3) Opérations :\n \n");
    printf("4) Affichage :\n \n");
    printf("5) Fidélisation :\n \n");
    printf("6) Quitter l’application :\n \n \n");
}

int choisir(int choix){
    printf("Pour accer a un opération choisir un nombre :");
    scanf("%d",choix);
    return choix;
}

char Introduire_un_compte_bancaire(char CIN[10], char Nom[10], char Prenom[10], double Montant){
    system("cls");
    compt info;
    printf("Entrer les donnee suivent : \n \n \n");
    printf("CIN : ");
    scanf("%s",info.CIN);
    printf("Nom : ");
    scanf("%s",info.Nom);
    printf("prenom : ");
    scanf("%s",info.Prenom);
    printf("Montant : ");
    scanf("%lf",&info.Montant);
    return CIN,Nom,Prenom,Montant;
}



int main()
{
    do {
        system("cls");
        Affichage_Menu(); //affich le menu.
        choix = choisir(choix);//choisir l'opération.
        switch (choix){
            case 1 :
            Introduire_un_compte_bancaire(CIN, Nom, Prenom, Montant);//crée un compt.
                break;
            default:
                break;
        }
    }
    while (choix<1 || choix>6);
    return 0;
}