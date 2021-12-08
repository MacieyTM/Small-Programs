#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LI 100

double szereg(double x)
{
double s, w;
int i;
s=1;
w=1;
for(i=1;i<=LI;i++)
{
w=w*x*x/(2*i*(2*i-1));
s=s+w;
}
return s;
}

int main()
{
int lp;
double a, b, szcosh, krok, x;
printf("\nPodaj konce przedzialow i liczbe podprzedzialow:\n\n");
scanf("%lf %lf %d",&a,&b,&lp);
krok=(b-a)/lp;
printf("\nkrok =%6.2lf\n\n\n",krok);
printf("\t-----------------------\n");
printf("\tx | szereg(x) | cosh(x)\n\t-----------------------\n");
for (x=a;x<=b;x+=krok)
{
printf("%10.2lf | %7.4lf | %7.4lf\n",x,szereg(x),cosh(x));
printf("\t-----------------------\n\n");
}
}
