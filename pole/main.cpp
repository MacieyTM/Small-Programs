#include <iostream>

using namespace std;

float pole(float a, float b)
{
    return a*b; //prostokat
}

float pole(float c, float d, float h)
{
    return ((c+d)/2)*h; //trapez
}

int main()
{
    cout << endl << pole(3.2,5,2.7) << endl
         << pole(8.5,10.3) << endl;

    return 0;
}
