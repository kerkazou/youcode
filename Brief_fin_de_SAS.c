#include <stdio.h>
int choix;

void Affichage_Menu(){
    printf("\t \t Bienvenu sur la bonque :\n \n \n");
    printf("1) Introduire un compte bancaire :\n \n");
    printf("2) Introduire plusieurs comptes bancaires :\n \n");
    printf("3) Opérations :\n \n");
    printf("4) Affichage :\n \n");
    printf("5) Quitter l’application :\n \n");
}

int choisir(int choix){
    printf("Pour accer a un opération choisir un nombre :");
    scanf("%d",choix);
    return choix;
}

void Introduire_un_compte_bancaire(char Nom[], char Prenom[], char CIN[], float Montant){
    struct compt {
        char *CIN;
        char *Nom;
        char *Prenom;
        float *Montant;
    }    
}



int main()
{
    Affichage_Menu();
    choisir(choix);
    switch (choix)
    {
    case 1 :
        break;
    case 2 :
        break;
    case 3 :
        break;
    case 4 :
        break;
    case 5 :
        break;
    case 6 :
        break;

    default:
        break;
    }

    return 0;
}