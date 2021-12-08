#include <iostream>

using namespace std;

int main()
{
	float a, b, c, d, e;
	cout << "Wprowadz liczby." << endl << endl << "Pierwsza liczba: ";
	cin >> a;
	cout << "Druga liczba: ";
	cin >> b;
	cout << "Trzecia liczba: ";
	cin >> c;
	cout << "Czwarta liczba: ";
	cin >> d;
	cout << "Piata liczba: ";
	cin >> e;
	cout << "Srednia arytmetyczna tych liczb wynosi: " << (a+b+c+d+e)/5 << endl << endl;
	system("pause");

	return 0;
}