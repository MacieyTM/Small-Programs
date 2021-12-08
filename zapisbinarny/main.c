#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int i,k,calkowita,c[20],u[10];
double x,reszta;

printf("\nPodaj liczbe: ");
scanf("%lf",&x);

if(x>0)
{
calkowita=x;
reszta=fabs(x)-calkowita;
printf("\nCzesc calkowita: %d\nCzesc ulamkowa: %.10lf\n",calkowita,reszta);

i=0;
while(calkowita!=0)
    {
        c[i]=calkowita%2;
        calkowita=calkowita/2;
        i++;
    };

k=i;
for(i=0;i<10;i++)
    {
    reszta=reszta*2;
    if(reszta>=1)
    {u[i]=1; reszta=reszta-1;}
    else
    u[i]=0;
    }

printf("Zapis binarny: ");
for(i=k-1;i>=0;i--)
printf("%ld",c[i]);
printf(".");
for(i=0;i<10;i++)
printf("%1d",u[i]);
printf("\n");
}
else if(x==0)
printf("\nCzesc calkowita: 0\nCzesc ulamkowa: 0\nZapis binarny: 0\n");
else
printf("Liczba ujemna\n");
}
