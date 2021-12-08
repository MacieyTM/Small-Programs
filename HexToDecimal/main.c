#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
    char lx[MAX], d, dd[2];
    int i, l;
    int s, x;
    printf("\nWprowadz liczbe szesnastkowo: ");

    fgets(lx,10,stdin);
    printf("Liczba szesnastkowo: %s\n", lx);

    s=0;
    i=0;

    while((d=lx[i])!=10)
    {
        printf("Znak: %c\n", d);
        switch(d)
        {
            case 'A':
                x=10;
                break;
            case 'B':
                x=11;
                break;
            case 'C':
                x=12;
                break;
            case 'D':
                x=13;
                break;
            case 'E':
                x=14;
                break;
            case 'F':
                x=15;
                break;
            default:
            dd[0]=d;
            dd[1]='\0';
            printf("Ciag: %s\n",dd);
            x=atoi(dd);
        };
        /*
        MOZNA ZASTOSOWAC ZAMIAST FUNKCJI SWITCH Z WYKORZYSTANIEM ASCII
        if(d>=48 && d<=57)
            x=d-48;
        else if(d>=65 && d<=70)
            x=d-55;
        else
        {
            printf("Zla liczba\n");
            break;
        };
        */
    i++;
    printf("x = %d\n", x);
    s=s*16.+x;
    printf("Suma: %d\n\n", s);
    }
    printf("Ta liczba to: %d\n\n", s);

    return 0;
}
