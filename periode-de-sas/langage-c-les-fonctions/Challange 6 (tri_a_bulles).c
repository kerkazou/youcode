#include <stdio.h>
int i,j,x;
void tri_a_bulles(int *tab , int n)
{
    for (j=1 ; j<n ; j++) {
        for (i=0 ; i<n-j ; i++)
        if (tab[i]>tab[i+1]){
            x = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = x;
        }
    }
}
int main()
{
    int tab[6]={12,6,7,8,1,9},a,n=6;
    printf("Entrer le nombre d'éléments qui vous voulais : n = ");
    //scanf("%d",&n);
    printf("Entrer une liste d'éléments :\n");
    for (a=0 ; a<n ; a++)
    //scanf("%d",&tab[a]);

    tri_a_bulles(tab,n);
    printf("Apres le tri en donne :\n");
    for (a=0 ; a<n ; a++)
    printf("tab[%d] = %d \n",a,tab[a]);
    return 0;
}