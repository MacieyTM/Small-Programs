#include <iostream>

using namespace std;

int podziel(int a, int b)
{
    if(b==0)
        throw "Nie wolno dzielic przez zero!"; //wyrzuca blad jesli mianownik jest zerem
    if(a%b != 0)
        throw "Nie mozna tego podzielic w int"; //wyrzuca blad jesli wynik jest ulamkiem
    return a/b;
}

int main()
{
    int a, b;
    cout << endl << "Podaj pierwsza liczbe (licznik):";
    cin >> a;
    cout  << "Podaj druga liczbe (mianownik):";
    cin >> b;
    try
    {
        int c = podziel(a, b);
        cout << a << "/" << b << "=" << c;
    }
    catch(const char* y) //wynik dzialania programu
    {
        cout << y;
    }
    cout << endl;

    return 0;
}