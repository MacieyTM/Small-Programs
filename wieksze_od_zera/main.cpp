#include <iostream>

using namespace std;

int main()
{
    int * tablica = new int[10]; //tablica alokowana dynamicznie
    cout << "Wypelnij tablice liczbami:" << endl;
    for(int i=0; i<10; i++) //wpisanie liczb do tablicy
        cin >> tablica[i];
    for(int i=0; i<10; i++) //wypisanie elementów tablicy wiekszych od zera
        if(tablica[i]>0)
            cout << tablica[i] << " ";
    delete [] tablica; //usuniecie tablicy alokowanej dynamicznie

    return 0;
}