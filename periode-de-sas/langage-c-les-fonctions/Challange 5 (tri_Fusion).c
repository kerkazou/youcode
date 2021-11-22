#include <stdio.h>
void tri_Fusion(int i, int j, int tab[], int tmp[]) {
    if(j <= i){ return;}
    int m = (i + j) / 2;
    tri_Fusion(i, m, tab, tmp);
    tri_Fusion(m + 1, j, tab, tmp);
    int c , pg = i , pd = m + 1;
    for(c = i; c <= j; c++){
        if(pg == m + 1) {
            tmp[c] = tab[pd];
            pd++;
        }else if (pd == j + 1){
            tmp[c] = tab[pg];
            pg++;
        }else if (tab[pg] < tab[pd]){
            tmp[c] = tab[pg];
            pg++;
        }else {
            tmp[c] = tab[pd];
            pd++;
        }
    }
    for(c = i; c <= j; c++){
        tab[c] = tmp[c];
    }
}


int main() {
  int  nbr, i, tab[100], tmp[100];
 
  printf(" Entrez le nombre d'éléments dans le tableau: ");
  scanf("%d", &nbr);
  printf(" Entrez %d entiers : ", nbr);
  for (i = 0; i < nbr; i++)
    scanf("%d", &tab[i]);
  tri_Fusion(0, nbr-1, tab, tmp);
  printf("\n Tableau trié : ");
  for(i = 0; i < nbr; i++)  {
     printf(" %4d", tab[i]);
  }
  printf("\n");
  return 0;
}