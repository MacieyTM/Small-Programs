#include<iostream>

using namespace std;

void zamiana(int tab[]) //funkcja ktora odwraca kolejnosc elementow tablicy
{
for(int i=0; i<10/2; i++)
    swap(tab[i], tab[10 - i - 1]);
}

int main()
{
    int tablica[10] = {0, 3, 4, 3, 6, 7, 11, -5, -10, 87}; //Inicjacja tablicy

    for(int i=0;i<10;i++) //Przed zamiana
        cout << tablica[i] << " ";

    cout<<endl;

    zamiana(tablica); //Zamiana

    for(int i=0; i<10; i++) //Po zamianie
        cout << tablica[i] << " ";

    return 0;
}