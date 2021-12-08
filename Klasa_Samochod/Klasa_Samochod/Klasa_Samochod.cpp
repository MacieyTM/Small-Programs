#include <iostream>
#include "Samochod.h"

using namespace std;

int main()
{
	Samochod s1("Citroen", 3.5, 5555, 72.6);
	s1.dodaj();
	s1.wypisz();

	return 0;
}