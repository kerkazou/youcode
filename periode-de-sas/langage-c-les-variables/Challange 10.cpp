#include <stdio.h>

int main()
{
    float c,r,pi=3.14159265359;
    printf("Prenez le rayon du cercle : ");
    scanf("%f" , &r);
    c = 2*pi*r;
    printf("la circonférence du cercle est :c = %f" , c);
    return 0;
}
