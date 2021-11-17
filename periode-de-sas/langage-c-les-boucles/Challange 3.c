#include <stdio.h>

int main()
{
    int nombre,i,a,b,compteur=0;
    printf("Enter un enier pour tester s'il est premier ou non : ");
    scanf("%d",&nombre);
    a=nombre%nombre;
    b=nombre%i;
    compteur=0;
    for (i=2 ; i<4 ; i++)
    {
        compteur++;
        if ((a==0 || b==0) && compteur<2)
        {
            printf("l'entier est un premier.\n");
        }
        else if(compteur>2)
        {
            printf("l'entier non premier.\n");
        }
    }
    return 0;
}