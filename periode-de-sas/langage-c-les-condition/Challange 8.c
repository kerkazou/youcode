#include <stdio.h>

int main()
{
    char a;
    printf("Donné une caractere ");
    scanf("%c",&a);
    if (a=='A'||a=='B'||a=='C'||a=='D'||a=='E'||a=='F'||a=='G'||a=='H'||a=='I'||a=='J'||a=='K'||a=='L'||a=='M'||a=='N'||a=='O'||a=='P'||a=='Q'||a=='R'||a=='S'||a=='T'||a=='U'||a=='V'||a=='W'||a=='X'||a=='Y'||a=='Z'){
        printf("Le caractère qui donné est un alphabet majuscule.");
    }
    else {
        printf("Le caractère qui donné est un alphabet minuscule.");
    }
    return 0;
}