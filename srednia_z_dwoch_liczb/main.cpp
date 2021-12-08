#include <iostream>

using namespace std;

float srednia(float *x, float *y) //funkcja obliczajaca srednia na wskaznikach
{
    return (*x+*y)/2;
}

int main()
{
    float a,b;
    cout << "Podaj pierwsza liczbe:";
    cin >> a;
    cout << "Podaj druga liczbe:";
    cin >> b;
    float z = srednia(&a, &b); //przypisanie wskaznikow do adresow zmiennych i wywolanie funkcji
    cout << z << endl;

    return 0;
}