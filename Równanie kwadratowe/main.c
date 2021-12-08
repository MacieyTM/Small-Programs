#include <stdio.h>
#include <math.h>

int main()
{
double a, b, c, x1, x2, delta, pdelta;

do{
    printf("\na=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);

    if(a==0)
    if(b==0)
    if(c==0)
    printf("\ntozsamosc\n\n");
    else
    printf("\nsprzecznosc\n\n");
    else
        {
        x1=-c/b;
        printf("\nx=%1.2lf\n\n",x1);
        }
    else
        {
        delta=b*b-4*a*c;
        pdelta=sqrt(delta);
        if(delta>=0)
            {
            x1=(-b-pdelta)/(2*a);
            x2=(-b+pdelta)/(2*a);
            printf("\nx1=%1.2lf, x2=%1.2lf\n\n",x1,x2);
            }
        else
        printf("\nnie ma pierwiastkow rzeczywistych\n\n");
        }
}while(a!=0||b!=0||c!=0);
}
