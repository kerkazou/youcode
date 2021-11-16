#include<stdio.h>

int main()
{
   char Nombre;
   
   printf("Saisi une caractere pour verifie est ce que est une voyelle ou non : \n");
   scanf("%c", &Nombre);
switch (Nombre){
    case 'A' :
    printf("votre caractere est une voyelle.");
    break;
    case 'O' :
    printf("votre caractere est une voyelle.");
    break;
    case 'E' :
    printf("votre caractere est une voyelle.");
    break;
    case 'I' :
    printf("votre caractere est une voyelle.");
    break;
    case 'Y' :
    printf("votre caractere est une voyelle.");
    break;
    case 'a' :
    printf("votre caractere est une voyelle.");
    break;
    case 'o' :
    printf("votre caractere est une voyelle.");
    break;
    case 'e' :
    printf("votre caractere est une voyelle.");
    break;
    case 'i' :
    printf("votre caractere est une voyelle.");
    break;
    case 'y' :
    printf("votre caractere est une voyelle.");
    break;
    default :
    printf("votre caractere n'est pas une voyelle.");
    break;
}
   return 0;
}