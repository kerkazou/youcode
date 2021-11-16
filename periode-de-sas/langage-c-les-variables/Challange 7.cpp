#include <stdio.h>
int main()
{
    int a,b;
    printf("saisir la valeur de a = : ");
    scanf("%d", &a);
    printf("saisir la valeur de b = : ");
    scanf("%d", &b);
    printf("votre résultat en format décimal est a+b = %d\n", a+b);
    printf("votre résultat en format décimal est a-b = %d\n", a-b);
    printf("votre résultat en format décimal est a*b = %d\n", a*b);
    printf("votre résultat en format décimal est a/b = %d\n", a/b);
    printf("votre résultat en format décimal est a %% b = %d\n", a % b);
    return 0;
}
