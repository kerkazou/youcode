#include<stdio.h>
#include<stdlib.h>
int main()
{
    int decimal,octal,hexadecimal;
    printf("Entre la valeur en decimal D =  ");
    scanf("%d",&decimal);
    if (decimal>0);{     // test pour la valeur est strictement positive
    printf("la valeur en octal est : O = %o\n" ,octal );
    printf("la valeur en hexadecimal est : H = %x" ,hexadecimal );
    }
    return 0;
}
