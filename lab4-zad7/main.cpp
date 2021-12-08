/*Napisz program, który dla wprowadzonych współczynników funkcji kwadratowej wyświetli wprowadzone dane w postaci: f(x) = a x^2 + b x + c (klasa FunckjaKwadratowa o polach a, b,c).*/

#include <iostream>

using namespace std;

class FunkcjaKwadratowa
{
public:
    double a, b, c;

    void wczytaj()
    {
        cout<<"Podaj a: ";
        cin>>a;
        cout<<"Podaj b: ";
        cin>>b;
        cout<<"Podaj c: ";
        cin>>c;
    }

    void wypisz()
    {
        cout << "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
    }
};

int main()
{
    cout << "Podaj wspolczynniki dla pierwszego" << endl;
    FunkcjaKwadratowa p1;
    p1.wczytaj();
    p1.wypisz();
    cout << "Podaj wspolczynniki dla drugiego" << endl;
    FunkcjaKwadratowa p2;
    p2.wczytaj();
    p2.wypisz();
    cout << "Podaj wspolczynniki dla trzeciego" << endl;
    FunkcjaKwadratowa p3;
    p3.wczytaj();
    p3.wypisz();

    return 0;
}