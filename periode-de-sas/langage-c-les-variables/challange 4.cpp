#include <stdio.h>
int main()
{
    float Metre,Mile;
    printf("Entrer la distance en mettre Mile = ");
    scanf("%f", &Mile);
    Metre = Mile/(1000*1.609);
    printf("votre distance en Metre est Metre = %f", Metre);
    return 0;
}
