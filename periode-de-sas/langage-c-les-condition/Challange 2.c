#include<stdio.h>

int main()
{
   int Nombre;
   
   printf("Entrez un nombre entier : \n");
   scanf("%d", &Nombre);
   
   if (Nombre%2 == 0)
      printf("Votre nombre est paire\n");
   else
      printf("Votre entie et impaire\n");
     
   return 0;
}