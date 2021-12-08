#include <iostream>

using namespace std;

class Kula
{
public:
    double r;

    void wczytaj()
    {
        cout<<"Podaj r: ";
        cin>>r;
    }

    double objetosc()
    {
        return (4*3.14*r*r*r)/3;
    }

    void wypisz()
    {
        cout<<"Objetosc: "<<objetosc()<<endl;
    }
};

int main()
{
    cout << "Podaj wymiary dla pierwszej kuli" << endl;
    Kula k1;
    k1.wczytaj();
    k1.wypisz();
    cout << "Podaj wymiary dla drugiej kuli" << endl;
    Kula k2;
    k2.wczytaj();
    k2.wypisz();
    cout << "Podaj wymiary dla trzeciej kuli" << endl;
    Kula k3;
    k3.wczytaj();
    k3.wypisz();

    return 0;
}