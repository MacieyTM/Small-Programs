#include <iostream>

using namespace std;

class Punkt
{
public:
    double x;
    double y;

    void load()
    {
        cout<<"Podaj x: ";
        cin>>x;
        cout<<"Podaj y: ";
        cin>>y;
    }

    void show()
    {
        cout<<endl<<"Wspolrzedna x: "<<x<< endl <<"Wspolrzedna y: "<<y<<endl;
    }

    Punkt(double pierwsza, double druga)
    {
        x=pierwsza;
        y=druga;
    }
};

int main()
{
    double d,pom1,pom2;
    Punkt p1(1.1,1.1);
    p1.load();
    p1.show();
    Punkt p2(2.2,2.2);
    p2.load();
    p2.show();

    pom1 = (p2.x-p1.x)*(p2.x-p1.x);
    pom2 = (p2.y-p1.y)*(p2.y-p1.y);
    d = sqrt(pom1+pom2);

    cout << "Odleglosc tych punktow od siebie to: " << d << endl;
    return 0;
}