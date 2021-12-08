//
// Created by mghej on 24.11.2021.
//
#include <iostream>
#include "kwadrat.h"

using namespace std;

int kwadrat::liczobwod()
{
    return 2*(x+y);
}

int kwadrat::liczpole()
{
    return x*y;
}

void kwadrat::podaj()
{
    cout << "Podaj boki kwadratu: " << endl;
    cin >> x;
    cin >> y;
}

kwadrat::kwadrat(int boka, int bokb)
{
    x = boka;
    y = bokb;
}

kwadrat::~kwadrat()
{
    cout << "Jestem destruktor kwadratu" << endl;
}

int prostokat::liczpolepr
{
    return kwadrat::liczpole();
}