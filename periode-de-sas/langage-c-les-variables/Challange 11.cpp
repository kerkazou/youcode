#include <stdio.h>

int main()
{
    float longueur,largeur,Cr;
    printf("Prenez le longueur de rectangle  : ");
    scanf("%f" , &longueur);
    printf("Prenez le largeur de rectangle  : ");
    scanf("%f" , &largeur);
    Cr = 2*(longueur + largeur);
    printf("la circonf�rence d'un rectangle = %f" , Cr);

    return 0;
}
