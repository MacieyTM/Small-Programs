#include <iostream>

using namespace std;

int konwertuj(const char* x) //funkcja ktora konwertuje wprowadzone znaki na int
{
    int a=0;
    for(int i=0; x[i]; i++)
    {
        if(a*10<0)
            throw "Wprowadzona liczba jest za duza"; //wyrzuca blad jesli przekroczylismy zakres int
        if (x[i]>='0' && x[i]<='9')
            a=a*10+x[i]-'0';
        else
            throw "Wprowadzony tekst ma nieprawidlowe znaki"; //wyrzuca blad jesli wpisalismy znak ktory nie nalezy do int
    }
    return a;
}

int main()
{
    cout << endl;
    char * x = new char[20]; //dynamicznie alokowana tablica dla znakow
    cin.getline(x, 20); //ta funkcja czeka na ENTER
    try
    {
        cout << konwertuj(x);
    }
    catch(const char* y) //wypisuje wynik programu
    {
        cout << y;
    }
    cout << endl;

    return 0;
}