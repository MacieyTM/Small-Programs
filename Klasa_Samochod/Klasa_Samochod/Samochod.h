#pragma once
#include <iostream>

using namespace std;

class Samochod
{
	string nazwa;
	float pojemnosc;
	int przebieg;
	float average;
public:
	void dodaj();
	void wypisz();
	Samochod(string = "brak", float = 0, int = 0, float = 1);
	~Samochod();
};