#include <stdio.h>
int main()
{
    float F,c;
    printf("Veuillez saisir votre température en degré Celsius : ");
    scanf("%f", &F);
    c = (F - 32) / 1.8;
    printf("votre température en Fahrenheit est C = %f", c);
    return 0;
}
