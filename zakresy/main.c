#include <stdio.h>
int main()
{

int i;
int itab[10]={1,2,3,4,5,6,7,8,9,10};
int adritab[10];

float ftab[10]={1,2,3,4,5,6,7,8,9,10};
int adrftab[10];

double dtab[10]={1,2,3,4,5,6,7,8,9,10};
int adrdtab[10];

for(i=0;i<10;i++)
{
adritab[i]=&itab[i];
adrftab[i]=&ftab[i];
adrdtab[i]=&dtab[i];

}
for(i=0;i<10;i++){
printf ("  %u  %2d  %u  %3.1f  %u  %3.1lf\n", adritab[i], itab[i],adrftab[i], ftab[i], adrdtab[i], dtab[i]);

}
}
