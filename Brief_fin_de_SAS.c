#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#define Nbr_clients 2000

typedef struct {
        char CIN[30];
        char Nom[30];
        char Prenom[30];
        double Montant;
    }compte;

compte client[Nbr_clients]; //reserver un tableu
int choix,size=0,i;
int main();

void Affichage_Menu(){     //affich le menu.
    printf("\n\t ______________ Bienvenu sur la bonque _______________\n");
    printf("\t | 1) Introduire un compte bancaire :                 |\n \n");
    printf("\t | 2) Introduire plusieurs comptes bancaires :        |\n\n");
    printf("\t | 3) Operations :                                    |\n\n");
    printf("\t | 4) Affichage :                                     |\n\n");
    printf("\t | 5) Fidelisation :                                  |\n\n");
    printf("\t | 6) Quitter l’application :                         |\n\n");
    printf("\t |____________________________________________________|\n\n\n\n\n");
}

int choisir(int choix){   //choisir l'opération.
    printf("\t Votre choix : ");
    scanf("%d",&choix);
    printf("\n");
    return choix;
}

void Introduire_un_compte_bancaire(){
    system("cls");
    printf("\n \t Entrer les donnee suivent : \n \n \n");
    printf("CIN : ");
    scanf("%s",client[size].CIN);
    printf("\n \n");
    printf("Nom : ");
    scanf("%s",client[size].Nom);
    printf("\n \n");
    printf("prenom : ");
    scanf("%s",client[size].Prenom);
    printf("\n \n");
    printf("Montant : ");
    scanf("%lf",&client[size].Montant);
    printf("\n \n");
    size++;
    system("cls");
}

void Affichage(){
		//printf("| CIN : %s | Nom : %s | Prenom : %s | Montant : %2.lf MAD |",client[i].CIN , client[i].Nom , client[i].Prenom , client[i].Montant);
		printf("CIN : %s\n",client[i].CIN);
		printf("Nom : %s\n",client[i].Nom);
		printf("Prenom : %s\n",client[i].Prenom);
		printf("Montant : %2.lf MAD\n",client[i].Montant);
		printf("_________________________\n \n \n");
}

void retour_a_menu(){
	int retour;
    printf("1_ retour a menu : \n\n");
    printf("2_ Quitter l’application : \n\n");
    //scanf("%d",&retour);
    choix = choisir(choix);
    if(choix==1){
       main();
    }
    else
    	system("cls");
        printf("\n\n\n\n \t cette application n est pas exister maintenant.");
        exit(0);
}

void Introduire_plusieurs_comptes_bancaires(){
	int n_clients;
    system("cls");
    printf("\n Entre le nombre des clients : ");
    scanf("%d",&n_clients);
    for (i=0;i<n_clients;i++){
        Introduire_un_compte_bancaire();
    }
	printf("Votre compte bancaire a ete cree avec succes : \n");
	system("cls");
	printf("Les comptes : \n\n");
    for (i=0;i<n_clients;i++){
        Affichage();
    }
}

void Operation(){
	char R_CIN[30];
	double r;
	system("cls");
	printf("\n \t Operation : \n \n \n");
	printf(" 1) Retrait : \n\n 2) Depot :\n\n");
	choix = choisir(choix);
	switch(choix){
		case 1: //Retrait.
			printf("Entrez votre CIN : ");
			scanf("%s",R_CIN);
			for (i = 0; i <= size ; i++){
		        if (strcmp(R_CIN,client[i].CIN) == 0){
				    printf("Entrez le solde : ");
				    scanf("%lf",&r);
				    client[i].Montant -= r;
				    printf("Votre montant maintenat est %lf\n",client[i].Montant);
				    break;
				}
    		}
		break;
		case 2: //Depot.
			printf("Entrez votre CIN : ");
			scanf("%s",R_CIN);
			for (i = 0; i <= size ; i++){
		        if (strcmp(R_CIN,client[i].CIN) == 0){ 
test :
				printf("Entrez le solde : ");
				scanf("%lf",&r);
				while (r<0){
					printf("votre solde est negatif :");
					goto test ;
				}
				client[i].Montant += r;
				printf("Votre montant maintenat est %lf\n",client[i].Montant);
				break;
				}
		break;
			}
	}
}

void Ascendent(){
	compte tab_temp;
	int i,j;
	for(i=0 ; i<size ; i++){	
		for(j=0 ; j<size-i-1 ; j++){
			if (client[j].Montant > client[j + 1].Montant){
				tab_temp=client[j];
				client[j] =client[j + 1];
				client[j + 1] = tab_temp;
			}
 		}
	}
	printf("\n Les donners des comptes par ascendent est : \n\n  CIN  \t  Nom  \t  Prenom  \t  Montant \n");
	for(i=0;i<size;i++){
		printf("  %s \t %s \t %s \t %lf \n \n",client[i].Nom,client[i].Prenom,client[i].CIN,client[i].Montant);
	}
}

void Descendent(){
	compte tab_temp;
	int i,j;
	for(i=0 ; i<size ; i++){	
		for(j=0 ; j<size-i-1 ; j++){
			if (client[j].Montant < client[j + 1].Montant){
				tab_temp=client[j];
				client[j] =client[j + 1];
				client[j + 1] = tab_temp;
			}
 		}
	}
	printf(" \n Les donners des comptes par ascendent est : \n\n  CIN  \t  Nom  \t  Prenom  \t  Montant \n");
	for(i=0;i<size;i++){
		printf("  %s \t %s \t %s \t %lf \n \n",client[i].Nom,client[i].Prenom,client[i].CIN,client[i].Montant);
	}
}

void Fidelisalton(){
	compte tab_temp;
	int i,j,k=0;
	double F=0.013;
	printf("hhhhh fia lmoot dial n3as offf ");
	for(i=0 ; i<size ; i++){	
		for(j=i+1 ; j<size ; j++){
			if (client[i].Montant > client[i + 1].Montant){
				tab_temp=client[i];
				client[i] =client[j + 1];
				client[j + 1] = tab_temp;
			}
 		}
	}
	printf("\n Les donners des comptes par ascendent est : \n\n  CIN  \t  Nom  \t  Prenom  \t  Montant \n");
	for(i=0;i<size;i++){
		if(k<3){
			client[i].Montant = client[i].Montant + ( client[i].Montant * F );
			printf("  %s \t %s \t %s \t %lf \n \n",client[i].Nom,client[i].Prenom,client[i].CIN,client[i].Montant);
		k++;
		}
		else
		break;
	}
}

void Quitter_l_application(){
	system("cls");
    printf("\n\n\n\n \t cette application n est pas exister maintenant.");
    exit(0);
}



int main()
{
    do {
        system("cls");
        Affichage_Menu(); //affich le menu.
        choix = choisir(choix);//choisir l'opération.
        switch (choix){
            case 1 : //crée un compte.
                Introduire_un_compte_bancaire();
                printf("\n \t Votre compte bancaire a ete cree avec succes : \n\n");
                Affichage();
                retour_a_menu();
                break;
            case 2 : //crée plusieur compte.
                Introduire_plusieurs_comptes_bancaires();
                retour_a_menu();
                break;
            case 3 :  //Operation.
            	Operation();
            	retour_a_menu();
                break;
            case 4 : //affichage ( Asc Desc recherche_par_cin ...).
            	system("cls");
            	printf("\n \t Choisir une methode d affichage : \n\n\n");
            	printf(" 1--Affichage par odre ascendent : \n\n 2--Affichage par odre descendent : \n\n\n\n");
            	choix = choisir(choix);
            	switch (choix){
            		case 1 :
            			system("cls");
            			Ascendent();
            			retour_a_menu();
            			break;
            		case 2 :
            			system("cls");
            			Descendent();
            			retour_a_menu();
            			break;
				}
            	case 5 :
				system("cls");
            		Fidelisalton();
					retour_a_menu();
            		break;
            	case 6 :
            		Quitter_l_application();
            		break;
            default:
                break;
        }
    }
    while (choix<1 || choix>6);
		Quitter_l_application();
    return 0;
}