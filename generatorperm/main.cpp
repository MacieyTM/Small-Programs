#include <iostream>

using namespace std;

string slowo;
void zamien();
void permutuj(string slowo, int poz);

int main()
{
    do
    {
        cout << "Podaj silnie ale nie za duza (co najwyzej 5! zeby nie przeciazyc programu):" << endl;
        cin >> slowo;
    }while(slowo!="1!"&&slowo!="2!"&&slowo!="3!"&&slowo!="4!"&&slowo!="5!");
    cout << endl;
    zamien();
    permutuj(slowo, 0);

    return 0;
}

void zamien()
{
    if(slowo=="1!")
        slowo="1";
    if(slowo=="2!")
        slowo="12";
    if(slowo=="3!")
        slowo="123";
    if(slowo=="4!")
        slowo="1234";
    if(slowo=="5!")
        slowo="12345";
}

void permutuj(string slowo, int poz)
{
    if(poz==slowo.size())
        cout << slowo << endl;
    else
        for(int i=poz; i<slowo.size(); i++)
        {
            swap(slowo[i], slowo[poz]);
            permutuj(slowo, poz+1);
            swap(slowo[i], slowo[poz]);
        }
}
