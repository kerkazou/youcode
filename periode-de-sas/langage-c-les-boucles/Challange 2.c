//autre methode pour le deusieme challange 


#include <stdlib.h>
#include <stdio.h>
int main(){
    int nombre,i,j,q;
    printf("entrer le nombre n :");
    scanf("%d",&n);
    for(i=0;i<nombre;i++)
    {
        for(j=n-i;j>0;j--)
            printf(" ");
        for(q=0;q<=i*2;q++)
            printf("*");
            printf("\n");
    }
    return 0;
}