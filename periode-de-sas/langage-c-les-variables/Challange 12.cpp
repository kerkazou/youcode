#include<stdio.h>
#include<stdlib.h>
int main()
{int r,n,rev = 0;
printf("Donner un entier positif : n = ");
scanf("%d",&n);

   r = n % 10;   
   rev = rev * 10 + r;
   n = n / 10;  
   printf("Inversion de donne entier est : N = %d%d",rev,n );
}


