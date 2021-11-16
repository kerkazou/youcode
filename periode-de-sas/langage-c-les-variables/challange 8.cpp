#include <stdio.h>
int main()
{
    float note1 , note2 , note3 , note4 , somme , moyenne;
    printf("saisir la valeur de note1 = : ");
    scanf("%f", &note1);
    printf("saisir la valeur de note2 = : ");
    scanf("%f", &note2);    
    printf("saisir la valeur de note3 = : ");
    scanf("%f", &note3);    
    printf("saisir la valeur de note4 = : ");
    scanf("%f", &note4);
    somme = note1 + note2 + note3 + note4;
    printf("la valeur de somme = : %f\n", somme);
    moyenne = somme / 4;
    printf("la valeur de moyenne = : %f", moyenne);
    return 0;
}
