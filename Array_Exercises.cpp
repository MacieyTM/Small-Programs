#include <iostream>

using namespace std;

int main(){
	int *tab, n, min, max, suma=0, licz=0, p=0, np=0;
    float srednia, mediana;

    cout << "Podaj rozmiar tablicy:" << endl;
	cin >> n;

	tab = new int[n];

    cout << "Wypelnij tablice liczbami:" << endl;

	for(int i=0; i<n; i++){
		cin >> tab[i];
	}

	min = tab[0];

	for(int i=1; i<n; i++){
	    if(min > tab[i]){
		    min = tab[i];
        }
    }

    cout << "MIN w tablicy to: " << min << endl;

    max = tab[0];

	for(int i=1; i<n; i++){
	    if(max < tab[i]){
		    max = tab[i];
        }
    }

    cout << "MAX w tablicy to: " << max << endl;

    for(int i=0; i<n; i++){
	    suma += tab[i];
    }

    srednia = (float)suma / (float)n;

    cout << "Srednia liczb w tablicy to: " << srednia << endl;

    for(int i=0; i<n; i++){
	    if(tab[i] == 3){
		    licz++;
        }
    }

    cout << "Ilosc wystapien liczby 3 w tablicy to: " << licz << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(tab[j] > tab[j+1]){
                swap(tab[j], tab[j+1]);
            }
        }
    }

    if(n%2 == 0){
        mediana = tab[(n-1)/2] + tab[n/2];
        mediana = mediana / 2;
    }else{
        mediana = tab[n/2];
    }

    cout << "Mediana liczb w tablicy to: " << mediana << endl;

    cout << "Najmniejsza liczba tablicy to: " << tab[0] << endl;

    if(n>1){
        cout << "Druga najmniejsza liczba tablicy to: " << tab[1] << endl;
    }

    cout << "Największa liczba tablicy to: " << tab[n-1] << endl;

    if(n>1){
        cout << "Druga największa liczba tablicy to: " << tab[n-2] << endl;
    }

    if(n>2){
        cout << "Trzecia największa liczba tablicy to: " << tab[n-3] << endl;
    }

    for (int i=0; i<n; i++){
        if(abs(tab[i]%2) == 0){
            p++;
        }
        if(abs(tab[i]%2) == 1){
            np++;
        }
    }

    cout << "Ilosc liczb parzystych: " << p << endl;

    cout << "Ilosc liczb nieparzystych: " << np << endl;

	for (int i=0; i<n; i++){
        tab[i] = tab[i]*tab[i];
    }

    cout << "Elementy tablicy po podniesieniu do kwadratu:" << endl;

    for (int i=0; i<n; i++){
        cout << tab[i] << ' ';
    }

    cout << endl;

    delete [] tab;

	return 0;
}