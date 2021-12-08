#include <iostream>

using namespace std;

int fun(int x, int *w) //funkcja przypisujaca argument 'x' do zmiennej 'z' wskazywanej przez wskaznik '*w'
{
    int z=3;
    w=&z;
    z=x;
    return z;
}

int main()
{
    int y = fun(1000,NULL);
    cout << y << endl;

    return 0;
}