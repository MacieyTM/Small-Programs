#include <stdio.h>
int main()
{
int wybor;
do
{
printf("podaj znak:");
wybor=getchar();
fprintf(stderr,"%d  %c\n",wybor,wybor);

}
while (wybor!=32);     //  do spacji
//while (wybor!='\n');   // do enter
//while (wybor=='\n');     //tylko 1 znak

}
