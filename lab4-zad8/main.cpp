#include <iostream>

using namespace std;

class Student
{
public:
    string imie, nazwisko;
    int album, i;
    char odp_poprawna, odp_twoja;
    double liczba_pytan;
    double licznik=0;

    void wczytaj()
    {
        cout<<"Podaj imie: ";
        cin>>imie;
        cout<<"Podaj nazwisko: ";
        cin>>nazwisko;
        cout<<"Podaj numer albumu: ";
        cin>>album;
        cout<<"Podaj liczbe pytan: ";
        cin>>liczba_pytan;

    }
    double procent()
    {

        for(i=1;i<=liczba_pytan;i++) {
             cout << "Podaj poprawne odpowiedzi do "<< i <<" pytania: ";
             cin >> odp_poprawna;
             cout << "Podaj twoja odpowiedz do "<< i <<" pytania: ";
             cin >> odp_twoja;
             if (odp_twoja == odp_poprawna)
                 licznik++;
         }
         return (licznik/liczba_pytan)*100;
    }

    void wypisz()
    {
        cout<<"Procent twoich dobrych odpowiedzi to: "<<procent()<<"%"<<endl;
    }
};

int main()
{
    cout << "Student pierwszy:" << endl;
    Student s1;
    s1.wczytaj();
    s1.wypisz();

    cout << "Student drugi:" << endl;
    Student s2;
    s2.wczytaj();
    s2.wypisz();

    cout << "Student trzeci:" << endl;
    Student s3;
    s3.wczytaj();
    s3.wypisz();

    return 0;
}