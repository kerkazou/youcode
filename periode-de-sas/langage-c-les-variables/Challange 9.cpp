#include <stdio.h>
#include <math.h>
int main ()
{
    float x1, x2, y1, y2, distance;
    printf("saisir la valeur de x1: ");
    scanf("%f", &x1);
    printf("saisir la valeur de x2: ");
    scanf("%f", &x2);
    printf("saisir la valeur de y1: ");
    scanf("%f", &y1);
    printf("saisir la valeur de y2: ");
    scanf("%f", &y2);
    distance = sqrt((y1-x1)*(y1-x1) + (y2-x2)*(y2-x2));
    printf("La distance entre (%.2f,%.2f) et (%.2f,%.2f) = %f\n", x1, x2, y1, y2,
    distance);
    return 0;
}
