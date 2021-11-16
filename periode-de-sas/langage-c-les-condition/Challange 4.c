#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("Entrer la premiere valeur entiere : a = ");
    scanf("%f",&a);
    printf("Entrer la deuxieme valeur entiere : b = ");
    scanf("%f",&b);
    if (a==b){
        c=3*(a+b);
        printf("La somme de deux valeurs c'est le triple de la somme : c =  %2.f", c);
        }
    else {
        c=a+b;;
        printf("La somme de deux valeurs entières données est : c = %2.f", c);
    }
    return 0;
}