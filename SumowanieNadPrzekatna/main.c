#include <stdio.h>
#include <stdlib.h>

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
        printf("%d", a[i][j]);
    }
    printf("\n");
}

int main()
{
    int w, k;
    scanf("%d", &w);
    scanf("%d", &k);
    int tab[w][k];

    czytaj_wierszami(tab, w, k);
//    int suma=0, i, j;
//    for(i=0;i<w;i++)
//        for(j=0;j<=i;j++)
//        suma=suma+tab[i][j];
//    return suma;

    pisz_wierszami(tab, w, k);

    return 0;
}
