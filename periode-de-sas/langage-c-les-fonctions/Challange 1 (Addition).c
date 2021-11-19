//Challenge 1 add(int a , int b) 
#include<stdio.h>
#include<stdlib.h>
int s;
int addition(int a, int b){
    int s=a+b;
    return s;
}

int main()
{
    int a , b;
    printf("saisir les nombre a et b :\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
     s = addition(a,b);
    printf("s = a + b = %d + %d = %d",a,b,s);
    return 0;
}