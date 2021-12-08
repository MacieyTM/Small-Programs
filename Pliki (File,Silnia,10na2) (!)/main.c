#include <stdio.h>

//TYP FILE
int main()
{
    FILE *plik;
    int i, k;
    plik=fopen("dane", "w");
    for(i=0; i<5; i++)
        fprintf(plik, "%4d", i);
    fclose(plik);
    plik=fopen("dane", "r");
    for(i=0; i<5; i++)
    {
        fscanf(plik, "%4d", &k);
        printf("%3d\n", k);
    }
    return 0;
}

//REKURENCJA - SILNIA
double silnia(int x)
{
    if(x<=0)
        return 1;
    else
        return (x*silnia(x-1));
}

int main()
{
    int a;
    do{
        printf("Silnia z liczby: ");
        scanf("%d", &a);
        printf("%d! = %.lf\n\n", a, silnia(a));
    }while(a!=0);
    return 0;
}

//REKURENCJA - 10->2
void zamiana(int liczba)
{
    if(liczba>1)
    {
        zamiana(liczba/2);
        printf("%d", liczba%2);
    }
    else
        printf("%d", liczba);
}

int main()
{
    int i, liczba;
    do{
        printf("Wprowadz liczbe dziesiatkowo: ");
        scanf("%d", &liczba);
        printf("Liczba dwojkowo: ");
        zamiana(liczba);
        printf("\n\n");
    }while(liczba!=0);
    return 0;
}
