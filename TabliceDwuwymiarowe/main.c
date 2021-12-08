#include <stdio.h>
//czytaj wierszami + pisz wierszami lub czytaj kolumnami + pisz kolumnami

//czytaj wierszami
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
//czytaj kolumnami
void czytaj_kolumnami(a, n, m)
int n, m, a[n][m];
{
    int i, j;
    for(i=0; i<m; i++)
    {
        printf("\n");
        for (j=0; j<n; j++)
        scanf("%d", &a[j][i]);
    }
}
//pisz wierszami
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
//pisz kolumnami
void pisz_kolumnami(a, n, m)
int n, m, a[n][m];

{
    int i, j;
    for(i=0; i<m; i++)
    {
        printf("\n\t");
        for (j=0; j<n; j++)
        printf("%d", a[j][i]);
    }
    printf("\n");
}

//main
int main(int argc, char *argv[])
{
    int w, k;
    scanf("%d", &w);
    scanf("%d", &k);
    int tab[w][k];
    czytaj_wierszami(tab, w, k);
    czytaj_kolumnami(tab, w, k);
    pisz_wierszami(tab, w, k);
    pisz_kolumnami(tab, w, k);
    return 0;
}
