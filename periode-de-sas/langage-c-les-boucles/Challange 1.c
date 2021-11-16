//table de multiplication
#include <stdio.h>
int main()
{
    int M,i,N;
    printf("Entrer un nombre pour donner un multiplication de 1 a 10 : ");
    scanf("%d",&N);
    for (i=1 ; i<=10 ; i++){
        M=N*i;
        printf("%d * %d = %d \n",N,i,M);
    }
    return 0;
}