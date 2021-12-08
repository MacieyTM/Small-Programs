#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double v,p;

void kula(r)
double r;
{

 p=4*M_PI*r*r;
 v=p/3. *r;

}
int main(int argc, char *argv[])
{
  double r;
  r=2.;
  kula(r);
  printf("%lf  %lf\n",p,v);
  system("PAUSE");
  return 0;
}
