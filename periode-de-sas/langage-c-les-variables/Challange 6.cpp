#include <stdio.h>
int main()
{
    float F,c;
    printf("Veuillez saisir votre température en degré Celsius : ");
    scanf("%f", &c);
    F = (c*1.8)+32;
    printf("votre température en Fahrenheit est F = %f", F);
    return 0;
}
