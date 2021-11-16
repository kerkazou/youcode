#include <stdio.h>
int main()
{
    float Metre,Mile;
    printf("Entrer la distance en mettre Metre = ");
    scanf("%f", &Metre);
    Mile = Metre*1000*1.609;
    printf("votre distance en miles est Mile = %f", Mile);
    return 0;
}
