#include <stdio.h>
int main()
{
    float F,c;
    printf("Veuillez saisir votre temp�rature en degr� Celsius : ");
    scanf("%f", &F);
    c = (F - 32) / 1.8;
    printf("votre temp�rature en Fahrenheit est C = %f", c);
    return 0;
}
