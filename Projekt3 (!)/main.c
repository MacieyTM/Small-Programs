#include <stdio.h>

void czytaj_kolumnami(a, n, m)
int n, m, a[n][m];
{
    int i, j;
    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
            scanf("%d", &a[j][i]);
    }
}

void pisz_kolumnami(a, n, m)
int n, m, a[n][m];
{
    int i, j;
    for(i=0; i<m; i++)
    {
        printf("\n\t");
        for(j=0; j<n; j++)
            printf("%d ", a[i][j]);
    }
    printf("\n");
}

int main()
{
    int rozmiar;
    printf("\nPodaj rozmiar: ");
    scanf("%d", &rozmiar);
    int tab[rozmiar][rozmiar];

    czytaj_kolumnami(tab, rozmiar, rozmiar);

    int licznik=0, i, j;
    for(j=0; j<rozmiar; j++)
        for(i=0; i<=j; i++)
            if(tab[i][j]>0)
                licznik++;

    pisz_kolumnami(tab, rozmiar, rozmiar);

    printf("\nLicznik wynosi: %d\n\n", licznik);
    return 0;
}
