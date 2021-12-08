#include <iostream>
#include "../include/calc.h"

using namespace std;

float add(float x, float y)
{
    return x + y;
}

float subtract(float u, float w)
{
    return u - w;
}

float volume(float a, float b, float h, float H)
{
    return ((a+b)/2)*h*H;
}

void help()
{
    cout << "dokumentacja" << endl;
}