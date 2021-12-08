#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 150

int licz_slowa1(char *text)
{
    char znak=' ', poprz;
    int l=0;
    while(poprz=znak, znak=*text++)
        if(znak != ' ' && poprz == ' ' )l++;
return l;
}

int licz_slowa2(text)
char *text;
{
    char znak, poprz=' ';
    int i=0, l=0;
    while((znak=text[i++]) !='\0')
    {
        if(znak != ' '  && poprz ==' ')l++;
        poprz=znak;
    }
return l;
}

int main()
{
int licznik1, licznik2;
char tekst[MAX], tekst2[MAX], *wtekst;

printf ("\nPodaj pierwszy tekst: ");
wtekst=fgets(tekst, 20, stdin); //dodaje 2 znaki
printf("Wczytany pierwszy tekst - tekst: %s", tekst);
printf("Wczytany pierwszy wtekst - wtekst: %s\n", wtekst);

printf("Podaj drugi tekst: ");
gets(tekst2); //funkcja niebezpieczna
printf("Wczytany drugi tekst - tekst: %s\n", tekst2);

printf("\nDlugosc pierwszego tekstu = %d == %d\n", strlen(tekst), strlen(wtekst));
printf("Dlugosc drugiego tekstu = %d\n", strlen(tekst2));

licznik1=licz_slowa1(wtekst);
licznik2=licz_slowa2(wtekst);
printf("\nLiczba slow w pierwszym tekscie = %d   == %d \n", licznik1, licznik2);

licznik1=licz_slowa1(tekst2);
licznik2=licz_slowa2(tekst2);
printf("Liczba slow w drugim tekscie = %d   == %d \n", licznik1, licznik2);
}
