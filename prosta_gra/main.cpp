#include <iostream>

using namespace std;

int main()
{
    float x, a, b, wynik;
    cout << "Witaj w prostej grze." << endl << "1 - nowa gra; 0 - wyjscie" << endl;
    do
    {
        cin >> x;
        if(x==0)
        {
            cout << endl << "Autor: MG." << endl;
            exit(0);
        }
        else if(x==1)
        {
            cout << endl << "Wprowadz liczby, ktore chcesz pomnozyc." << endl << "Pierwsza liczba: ";
            cin >> a;
            cout << "Druga liczba: ";
            cin >> b;
            wynik=a*b;
            cout << "Zgadnij jaki jest wynik: ";
            cin >> wynik;
            if(wynik==a*b)
                cout << endl << "Udalo ci sie!" << endl << endl << "Autor: MG." << endl;
            else
                cout << endl << "Nie udalo ci sie! Wynik to: " << a*b << endl << endl << "Autor: MG." << endl;
        }
        else
            cout << "Wprowadz cyfre (0-1):" << endl;
    }while(x!=0 && x!=1);

    return 0;
}
