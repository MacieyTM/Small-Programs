#include <stdio.h>
#include <stdlib.h>
#define N 5 //stopien wielomianu
//obliczanie warto�ci wielomianu za pomoc� schematu Hornera
//tablica a - wsp�lczynniki wielomianu
int main()
{
 double a[N+1];
 double x;
 double w;
 int i;
 for(i=0;i<=N;i++)
 scanf("%lf",&a[i]); //wczytywanie wsp�czynnik�w od 0-wego
 scanf("%lf",&x);
 w=a[N];
 for(i=N-1;i>-1;i--)
 w=w*x+a[i];
 printf("w=%lf\n",w);
}
