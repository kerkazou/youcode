#include <stdio.h>

int main()
{
    float Nombre;
    printf("Entrer un nombre pour verifier est ce que positive ou negative :");
    scanf("%f",&Nombre);
    if (Nombre<0){
        printf("Le nombre est negati.");
    }
    else if (Nombre>0){
        printf("Lenombre est positif.");
    }
    else if (Nombre==0){
        printf("Le nombre est nul.");
    }
    return 0;
}