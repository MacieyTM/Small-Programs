#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int losowanie(int x, int y)
{
    srand(time(NULL));
    int z = (rand()%(y-x+1)+x);
    return z;
}

int main()
{
    cout << losowanie(3,11) << endl;
    return 0;
}