#include <stdio.h>

int main()
{
int x;
int koniec;
int wartosc;
int nieparzyste;

printf("\nIle chcesz znalezc dwucyfrowych lub trzycyfrowych liczb o nieparzystej sumie cyfr: ");
scanf("%d",&koniec);

for(nieparzyste=1; nieparzyste<=koniec;)
{
printf("\nPodaj liczbe: ");
scanf("%d",&x);
if(x<10||x>999)
    printf("Zla liczba\n");
else
    {
    wartosc=0;
    while (x!=0)
        {
        wartosc=wartosc+x%10;
        x/=10;
        }
    if(wartosc%2==1)
        {
    printf("Znalazlem\n");
    nieparzyste=nieparzyste+1;
        }
    }
}

printf("\n\nZnalazlem juz tyle takich liczb\n\n");
return 0;
}
