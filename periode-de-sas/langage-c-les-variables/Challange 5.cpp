#include <stdio.h>
int
main ()
{
  float F, c;
  printf ("Veuillez saisir votre temperature en degrer Celsius : ");
  scanf ("%f", &c);
  F = (c * 1.8) + 32;
  if (F < -50)
  {
      printf ("votre temperature tres froid\n");
    }
  else if (F < 0)
  {
      printf ("votre temperature froid\n");
    }
    
  else if (F>0)
  {
      printf("votre temperature chaud\n");
    }
    
  else if (F>50)
  {
      printf("votre temperature tres chaud\n");
    }
printf ("F = %f", F);
  return 0;
}
