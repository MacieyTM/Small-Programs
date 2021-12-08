#include <stdio.h>

void czytaj_wierszami(a, n, m)
int n, m, a[n][m];
{
    int i, j;
    for(i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    }
}

void pisz_wierszami(a, n, m)
int n, m, a[n][m];
{
    int i, j;
    for(i=0; i<n; i++)
    {
        printf("\n\t");
        for (j=0; j<m; j++)
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

    czytaj_wierszami(tab, rozmiar, rozmiar);

    int suma=0, i, j;
    for(j=0; j<rozmiar; j++)
        for(i=0; i<=j; i++)
            suma=suma+tab[i][j];

    pisz_wierszami(tab, rozmiar, rozmiar);

    printf("\nSuma wynosi: %d\n\n", suma);
    return 0;
}
