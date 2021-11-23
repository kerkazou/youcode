#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define Nbr_clients 2000

typedef struct {
        char CIN[30];
        char Nom[30];
        char Prenom[30];
        double Montant;
    }compte;
int choix,i,n;
char CIN[30], Nom[30], Prenom[30];
double Montant;
int size=0;
int compteur=0;
//char Nbr_clients[];
compte client[Nbr_clients]; //reserver un tableu

void Affichage_Menu(){
    printf("\t \t \t Bienvenu sur la bonque :\n \n \n");
    printf("\t 1) Introduire un compte bancaire :\n \n");
    printf("\t 2) Introduire plusieurs comptes bancaires :\n \n");
    printf("\t 3) Operations :\n \n");
    printf("\t 4) Affichage :\n \n");
    printf("\t 5) Fidelisation :\n \n");
    printf("\t 6) Quitter l’application :\n \n \n");
}

int choisir(int choix){
    printf("\t Votre choix : ");
    scanf("%d",&choix);
    return choix;
}

void Introduire_un_compte_bancaire(char CIN[30], char Nom[30], char Prenom[30], double Montant){
    system("cls");
    compte client[size];
    size++;
    printf("\t Entrer les donnee suivent : \n \n \n");
    printf("CIN : ");
    scanf("%s",&client[size].CIN);
    printf("\n");
    printf("Nom : ");
    scanf("%s",&client[size].Nom);
    printf("\n");
    printf("prenom : ");
    scanf("%s",&client[size].Prenom);
    printf("\n");
    printf("Montant : ");
    scanf("%lf",&client[size].Montant);
    printf("\n");
    printf("Votre compte bancaire a ete cree avec succes : \n");
    printf("\n");
    printf("CIN : %s   Nom : %s   Prenom : %s   Montant : %2.lf MAD" ,client[size].CIN, client[size].Nom , client[size].Prenom , client[size].Montant);
    printf("\n");
}

void Introduire_plusieurs_comptes_bancaires(char CIN[30], char Nom[30], char Prenom[30], double Montant){
	system("cls");
    compte client[size];
    printf("Entre le nombre des clients : n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
    size++;
    printf("Entrer les donnee suivent : \n \n \n");
    printf("CIN : ");
    scanf("%s",&client[i].CIN);
    printf("\n");
    printf("Nom : ");
    scanf("%s",&client[i].Nom);
    printf("\n");
    printf("prenom : ");
    scanf("%s",&client[i].Prenom);
    printf("\n");
    printf("Montant : ");
    scanf("%lf",&client[i].Montant);
    printf("\n");
    printf("Votre compte bancaire a ete cree avec succes : \n");
	}
	for (i=0;i<n;i++){
        printf("CIN : %s   Nom : %s   Prenom : %s   Montant : %2.lf MAD" ,client[i].CIN, client[i].Nom , client[i].Prenom , client[i].Montant);
        printf("\n");
	}
}

void retour_a_menu(){
    int retour;
    printf("1_ retour a menu : \n\n");
    printf("2_ Quitter l’application : \n\n");
    scanf("%d",&retour);
    if(retour==1)
       main();
    else
       exit(0);
}

void operation(){
    printf("1) Retrait: \n 2) Depot:");
    choix = choisir(choix);//choisir un chois d'opération retrait ou depot.
    if(choix==1)
        printf("Retrait");
    else if(choix==2)
        printf("Depot");
}

void Recherche_CIN(){
    char R_CIN[30];
    compte client[size];
    printf("\t Saisir votre CIN : ");
    scanf("%s",&R_CIN);
    for(i=0 ; i<compteur ; i++){
        if(strstr(R_CIN , client[i].CIN))
            printf("votre CIN : %s est exite.");
            operation();
        else if {
            printf("votre CIN : %s pas exite.");
            main();
        }
    }
}



int main()
{
    do {
        system("cls");
        Affichage_Menu(); //affich le menu.
        choix = choisir(choix);//choisir l'opération.
        switch (choix){
            case 1 : //crée un compte.
                Introduire_un_compte_bancaire(CIN, Nom, Prenom, Montant);
                printf("\n \n");
                retour_a_menu();
                break;
            case 2 : //crée plusieur compte.
            	Introduire_plusieurs_comptes_bancaires(CIN, Nom, Prenom, Montant);
                printf("\n \n");
                retour_a_menu();
            	break;
            case 3 : //Opérations :
            Recherche_CIN();
            operation();
            retour_a_menu();
            break;
            default:
                break;
        }
    }
    while (choix<1 || choix>6);
    return 0;
}