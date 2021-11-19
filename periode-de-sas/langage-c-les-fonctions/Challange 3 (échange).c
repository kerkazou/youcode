//Challange 2 échange entre deux variable.
#include<stdio.h>
#include<stdlib.h>
int a,b,c;
void Echanger(int a,int b){
    a=c;
    b=a;
    c=b;
}

int main()
{
    printf("Entre la valeur de a = ");
    scanf("%d",&a);
    printf("Entre la valeur de b = ");
    scanf("%d",&b);
    printf("les valeurs qui donne est a = %d et b = %d \n",a,b);
    Echanger(a,b);
    printf("après l'echange en donne les valeurs suivente a = %d et b = %d",a,b);
    return 0;
}