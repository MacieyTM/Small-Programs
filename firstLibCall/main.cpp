#include<iostream>

using namespace std;

void zamiana(int tab[])
{
    for(int i=0; i<10; i++)
        tab[i]*=tab[i]; //lub tab[i] = tab[i] * tab[i];
}

int main()
{
    //inicjacja tablicy
    int tablica[10] = {0, 3, 4, 3, 6, 7, 11, -5, -10, 87};

    //wypisanie elementów tablicy
    for(int i=0;i<10;i++)
        cout<<tablica[i]<<" ";

    cout<<endl; //wstawienie znaku końca linii (enter)

    //wykonanie polecenia
    zamiana(tablica); //przekazując tablicę, podajemy tylko jej nazwę

    //ponowne wypisanie elementów tablicy
    for(int i=0;i<10;i++)
        cout<<tablica[i]<<" ";

    return 0;
}