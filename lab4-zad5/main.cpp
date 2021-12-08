#include <iostream>

using namespace std;

class Prostopadloscian
{
public:
    double a, b, h;

    void wczytaj()
    {
        cout<<"Podaj a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
        cout<<"h: ";
        cin>>h;
    }

    double polepow()
    {
        return 2*a*b+2*a*h+2*b*h;
    }

    void wypisz()
    {
        cout<<"Pole: "<<polepow()<<endl;
    }
};



int main()
{
    cout << "Podaj wymiary dla pierwszego" << endl;
    Prostopadloscian p1;
    p1.wczytaj();
    p1.wypisz();
    cout << "Podaj wymiary dla drugiego" << endl;
    Prostopadloscian p2;
    p2.wczytaj();
    p2.wypisz();
    cout << "Podaj wymiary dla trzeciego" << endl;
    Prostopadloscian p3;
    p3.wczytaj();
    p3.wypisz();

    return 0;
}