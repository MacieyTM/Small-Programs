#include <iostream>

using namespace std;

class Kwadrat
{
    int x, y;
public:
    virtual void siema()=0;
    void wczytaj()
    {
        cin >> x;
        cin >> y;
    }
    void wyswietl()
    {
       cout << x << endl;
       cout << y << endl;
    }
};

class Prostokat :public Kwadrat
{
    int p,r;
public:
    virtual void siema()
    {
        cout << "siema" << endl;
    }
    Prostokat(int k, int l)
    {
        p=k;
        p=r;
    }
    void wczytaj()
    {
        cin >> p;
        cin >> r;
        Kwadrat::wczytaj();
    }
    void wyswietl()
    {
        cout << p << endl;
        cout << r << endl;
        Kwadrat::wyswietl();
    }
};

int main()
{
    Prostokat p(2,3);
    p.wczytaj();
    p.wyswietl();
    p.siema();
    return 0;
}