#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,a=-15,b=-10;
    float A,B,M;
    
    while (b-a>=0,00001)
    {
        m=(a+b)/2;
        A= (a^3)+(12*a^2)+1;//calcule de f(a)
        B= (b^3)+(12*b^2)+1;
        M= (m^3)+(12*m^2)+1;
        if (A*B<=0)
        {
            a=m;
            printf("la solution est m = %d", m);
        }
        else
            b=m;
            printf("la solution est m = %d", m);
    }
    return 0;
}