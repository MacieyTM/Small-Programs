#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    cout << endl;
    int * tablica = new int[10]; //tablica alokowana dynamicznie

    srand(time(NULL));
    for(int i=0; i<10; i++) //wypelnienie tablicy liczbami losowymi z przedzialu <1,100>
    {
        int z = (rand()%100+1);
        tablica[i] = z;
    }

    for(int i=0; i<10; i++) //wypisanie elementów tablicy
        cout<<tablica[i]<<" ";

    int max = tablica[0]; //pierwsza liczbe przypisujemy do zmiennej max

    for(int i=1;i<10;i++) //przeszukanie pozostałych 9 liczb
        if(max<tablica[i])
            max = tablica[i];

    cout << endl << endl << "Najwiekszy element tablicy to "<< max << endl;

    delete [] tablica; //usuniecie tablicy alokowanej dynamicznie

    return 0;
}