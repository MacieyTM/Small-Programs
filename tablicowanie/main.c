#include <stdio.h>

int parzysta(int a)
{
    if(a%2==0) return 1;
    return 0;
}

int main()
{
    int size;
    printf("Podaj rozmiar tablicy wejsciowej:\n");
    scanf("%d", &size);

    int tab[size];
    int wynik[size];

    printf("Podaj wartosci tablicy wejsciowej\n");
    for(int i = 0; i < size, i++)
}
