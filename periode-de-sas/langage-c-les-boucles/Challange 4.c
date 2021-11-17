//premier ou non
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nombre,somme,max;
    somme=0;
    max=0;
    nombre=1;
    printf("Entrez une serie d'entier, est terminée par 0 : \n");
    while(nombre!=0)
    {
       do{
            scanf("%d",&nombre);
            if(nombre>100){
            printf("⚠ l'entier qui vous donne il est superieur a 100.\n");
            printf("Rentrer un entier inferieur ou egal a 100.\n");
            }
       }
       while(nombre>100);
       somme+=nombre;
       if(nombre>max) max=nombre;
    }
    printf("la somme est : somme =  %d\n",somme);
    printf("le max est : max =  %d\n",max);
    return 0;
}