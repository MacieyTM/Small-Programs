#include <iostream>
#include "Samochod.h"

using namespace std;

void Samochod::dodaj()
{
	cout << "Dodaj nazwe samochodu: ";
	cin >> nazwa;
	cout << "Dodaj pojemnosc samochodu: ";
	cin >> pojemnosc;
	cout << "Dodaj przebieg samochodu: ";
	cin >> przebieg;
	cout << "Dodaj average samochodu: ";
	cin >> average;
}

void Samochod::wypisz()
{
	cout << "Nazwa: " << nazwa << endl;
	cout << "Pojemnosc: " << pojemnosc << endl;
	cout << "Przebieg: " << przebieg << endl;
	cout << "Average: " << average << endl;
}

Samochod::Samochod(string n, float poj, int prz, float avg)
{
	nazwa = n;
	pojemnosc = poj;
	przebieg = prz;
	average = avg;
}

Samochod::~Samochod()
{
	cout << "Destruktor to ja";
}