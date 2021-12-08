#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int * tablica = new int[10]; //tablica alokowana dynamicznie
    cout << "Wypelnij tablice liczbami:" << endl;
    for(int i=0; i<10; i++) //wpisanie liczb do tablicy
        cin >> tablica[i];
    cout << "Przed sortowaniem:";
    for(int i=0; i<10; i++)
        cout << tablica[i] << ' ';

    sort(tablica, tablica+10); //funkcja sortujaca z biblioteki algorithm

    cout << endl << "Po sortowaniu elementy uporzadkowane rosnaco:";
    for(int i=0; i<10; i++)
        cout << tablica[i] << ' ';

    delete [] tablica; //usuniecie tablicy alokowanej dynamicznie

    return 0;
}