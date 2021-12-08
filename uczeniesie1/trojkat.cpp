//
// Created by mghej on 24.11.2021.
//
#include <iostream>
#include "trojkat.h"

using namespace std;

int trojkat::liczobwodtr()
{
    return 3*a;
}

int trojkat::liczpoletr()
{
    return (a*h)/2;
}

void trojkat::podajtr()
{
    cout << "Podaj bok trojkata i wysokosc: " << endl;
    cin >> a;
    cin >> h;
}

trojkat::trojkat(int bok, int wysokosc) {
    a=bok;
    h=wysokosc;
}

trojkat::~trojkat() {
    cout << "Jestem destruktor trojkata" << endl;
}