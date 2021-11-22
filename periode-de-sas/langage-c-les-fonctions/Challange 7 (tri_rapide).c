#include <stdio.h>
void permuter(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void tri_rapide(int tab[] , int debut , int fin){
    int i,j,pivot;
    if (debut<fin){
        pivot=debut;
        i=debut;
        j=fin;
    }
    while (i<j){
        while (tab[j]<=tab[pivot] && i<fin)
        i++;
        while (tab[j]<tab[pivot])
        j--;
        if (i<j)
        permuter(&tab[i],&tab[j]);
    }
    permuter(&tab[pivot],&tab[j]);
    tri_rapide(tab,debut,j-1);
    tri_rapide(tab,j+1,fin);
}

int main() {
  int  nbr, i, tab[100], tmp[100];
 
  printf(" Entrez le nombre d'éléments dans le tableau: ");
  scanf("%d", &nbr);
  printf(" Entrez %d entiers : ", nbr);
  for (i = 0; i < nbr; i++)
    scanf("%d", &tab[i]);
  tri_rapide(tab, tmp, 0, nbr-1);
  printf("\n Tableau trié : ");
  for(i = 0; i < nbr; i++)  {
     printf(" %4d", tab[i]);
  }
  printf("\n");
  return 0;
}