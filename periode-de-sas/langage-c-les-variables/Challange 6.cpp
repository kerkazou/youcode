#include <stdio.h>
int main()
{
    float F,c;
    printf("Veuillez saisir votre temp�rature en degr� Celsius : ");
    scanf("%f", &c);
    F = (c*1.8)+32;
    printf("votre temp�rature en Fahrenheit est F = %f", F);
    return 0;
}
