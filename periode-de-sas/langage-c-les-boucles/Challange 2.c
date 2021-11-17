//pyramide d'étoile
#include <stdio.h>
#define MAX_ETOILE 100
 
int main(void) {
  // Déclaration des variables
  unsigned int nbLignes;	// Nombre de lignes d'étoile à afficher
  unsigned int centreLigne;
  int i;
  char ligne[MAX_ETOILE];	// Ligne d'étoiles
 
  // Prompt de saisie du nombre de lignes
  printf("Entrez le nombre de lignes d'etoiles que vous voulez dans la pyramide : ");
  scanf("%d", &nbLignes);
 
  // Initialisation à vide de la ligne
  for(i=0; i<MAX_ETOILE; i++) {
    ligne[i] = ' ';
  }
  ligne[MAX_ETOILE - 1] = '\0';
 
  centreLigne = nbLignes -1;
  for (i=0; i<nbLignes; i++) {
    ligne[centreLigne - i] = '*';
    ligne[centreLigne + i] = '*';
 
    // Affichage de la ligne
    printf("%s\n", ligne);
  }  
 
  return 0;
}