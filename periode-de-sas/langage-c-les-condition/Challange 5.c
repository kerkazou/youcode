#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,delta,x,x1,x2;
    printf("Entrer les paramétre de équation 2ème degré a et b [ax2 + bx + c = 0] :\n");
    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    printf("c = ");
    scanf("%lf",&c);
    delta=(b*b)-(4*a*c);
   
    if(delta==0){
        x = -b/(2*a);
        printf("votre équation admet une unique solution : x = %2.lf",x);
    }
   
    else if(delta<0){
        printf("n'a pas de solution réelle pour votre équation");
    }
   
    else if(delta>0){
        x1=(-b-sqrt (delta))/(2*a);
        x2=(-b+sqrt (delta))/(2*a);
        printf("votre équation admet deux solutions distinctes : \n");
        printf("x1 = %2.lf\n",x1);
        printf("x2 = %2.lf",x2);
    }
   
    return 0;
}