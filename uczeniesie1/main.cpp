#include <iostream>
#include "kwadrat.h"
#include "trojkat.h"

using namespace std;

kwadrat k1(2,3);

void sedzia()
{
    if((k1.x*k1.y) == 14)
        cout << "Pole to 14" << endl;
    else
        cout << "Pole nie jest 14" << endl;
}

int main()
{
    cout << endl;
    k1.podaj();
    cout << endl;
    sedzia();
    cout << "Obwod: " << k1.liczobwod() << endl;
    cout << "Pole: " << k1.liczpole() << endl;
/*
    trojkat t1(1,1);
    t1.podajtr();
    cout << endl;
    cout << "Obwod: " << t1.liczobwodtr() << endl;
    cout << "Pole: " << t1.liczpoletr() << endl;
    cout << endl;

    kwadrat k2(k1);
    cout << "Pole: " << k2.liczpole() << endl;
*/    return 0;
}