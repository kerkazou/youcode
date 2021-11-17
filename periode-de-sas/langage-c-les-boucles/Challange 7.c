//le nième terme de la suite de Fibonacci.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int suite,nombre,i,suite0=0,suite1=1;
    printf("pour calcule le nième terme de la suite de Fibonacci, n = ");
    scanf("%d",&nombre);
    for (i=0 ; i<=nombre ; i++){
        if (i <= 0)
        suite=i;
        suite=suite0+suite1;
        suite0=suite1;
        suite1=suite;
        printf("suite = suite0 + suite1 = %d + %d  = %d \n",suite0,suite1,suite);
    }
    return 0;
}