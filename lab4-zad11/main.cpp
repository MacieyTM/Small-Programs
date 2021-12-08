#include <iostream>

using namespace std;

class KlasaCL
{
public:
    int * tab = new int[1024];

    void pazua()
    {
        system("PAUSE");
    }

    KlasaCL()
    {
        cout << "Konstruktor nie zostal wywolany!" << endl;
    }

    ~KlasaCL()
    {
        cout << "To ja destruktor" << endl;
    }

};

int main()
{
    KlasaCL k1;
    k1.pazua();
    delete [] k1.tab;
    return 0;
}