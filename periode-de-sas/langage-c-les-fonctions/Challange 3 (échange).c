#include <stdio.h>
#include <stdbool.h>
int a,b,i,compteur=0;
bool premier;
bool isPremier(int nombre,int a,int b,int i,int compteur){
a=nombre%nombre;
b=nombre%i;
compteur=0;
    for (i=2 ; i<4 ; i++)
    {
        compteur++;
        if ((a==0 || b==0) && compteur<2)
        {
            bool premier = false;
        }
        else if(compteur>2)
        {
            bool premier = false;
        }
    }
return premier;
}

int main()
{
    int nombre,compteur;
    bool premier;
    printf("Enter un enier pour tester s'il est premier ou non : ");
    scanf("%d",&nombre);
    premier = isPremier(nombre,a,b,i,compteur);
    printf("votre nombre est : %b",premier);
    return 0;
}