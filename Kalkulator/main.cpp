#include <iostream>
#include <math.h>

using namespace std;

int wiek = 20;
float a, b;

void dodawanie(); void odejmowanie(); void mnozenie();
void dzielenie(); void modulodzialanie();
void pierwiastkowanie(); void pierwiastkowanie3();
void potegowanie(); void potegowanie3();

int main(){
    cout<<"Nazywam sie Maciej."<<endl
        <<"Mam "<<wiek<<" lat."<<endl
        <<"Ucze sie programowac."<<endl<<endl
        <<"KALKULATOR"<<endl<<endl;
    dodawanie(); odejmowanie(); mnozenie();
    dzielenie(); modulodzialanie();
    pierwiastkowanie(); pierwiastkowanie3();
    potegowanie(); potegowanie3();
    cout<<"Liczba pi wynosi "<<M_PI<<endl
        <<"Liczba e wynosi "<<M_E<<endl;

    return 0;
}

void dodawanie(){
    float suma;
    cout<<"Wprowadz dwie liczby ktore chcesz dodac."<<endl;
    cin>>a>>b;
    suma=a+b;
    cout<<"Suma wynosi "<<suma<<endl<<endl;
}

void odejmowanie(){
    float roznica;
    cout<<"Wprowadz dwie liczby ktore chcesz odjac."<<endl;
    cin>>a>>b;
    roznica=a-b;
    cout<<"Roznica wynosi "<<roznica<<endl<<endl;
}

void mnozenie(){
    float iloczyn;
    cout<<"Wprowadz dwie liczby ktore chcesz pomnozyc."<<endl;
    cin>>a>>b;
    iloczyn=a*b;
    cout<<"Iloczyn wynosi "<<iloczyn<<endl<<endl;
}

void dzielenie(){
    float iloraz;
    cout<<"Wprowadz dwie liczby ktore chcesz podzielic."<<endl;
    cin>>a>>b;
    iloraz=a/b;
    cout<<"Iloraz wynosi "<<iloraz<<endl<<endl;
}

void modulodzialanie(){
    int modulo, c, d;
    cout<<"Wprowadz dwie liczby ktore chcesz podzielic modulo."<<endl;
    cin>>c>>d;
    modulo=c%d;
    cout<<"Reszta z dzielenia modulo wynosi "<<modulo<<endl<<endl;
}

void pierwiastkowanie(){
    float pierwiastek;
    cout<<"Wprowadz liczbe ktora chcesz spierwiastkowac."<<endl;
    cin>>a;
    pierwiastek = sqrt(a);
    cout<<"Pierwiastek z tej liczby wynosi "<<pierwiastek<<endl<<endl;
}

void pierwiastkowanie3(){
    float pierwiastek3;
    cout<<"Wprowadz liczbe ktora chcesz spierwiastkowac stopnia trzeciego."<<endl;
    cin>>a;
    pierwiastek3 = pow(a,1.0/3);
    cout<<"Pierwiastek trzeciego stopnia z tej liczby wynosi "<<pierwiastek3<<endl<<endl;
}

void potegowanie(){
    float kwadrat;
    cout<<"Wprowadz liczbe ktora chcesz podniesc do kwadratu."<<endl;
    cin>>a;
    kwadrat = pow(a,2);
    cout<<"Kwadrat z tej liczby wynosi "<<kwadrat<<endl<<endl;
}

void potegowanie3(){
    float szescian;
    cout<<"Wprowadz liczbe ktora chcesz podniesc do szescianu."<<endl;
    cin>>a;
    szescian = pow(a,3);
    cout<<"Szescian z tej liczby wynosi "<<szescian<<endl<<endl;
}
