#include "Prostokat.h"
#include<iostream>

using namespace std;

Prostokat::Prostokat(float x, float y, float a, float b) : Figura{ x, y }
{
    this->a = a;
    this->b = b;
}

float Prostokat::obwod()
{
    return 2*a + 2*b;
}

float Prostokat::pole()
{
    return a * b;
}

void Prostokat::print()
{
    cout << "Prostokat o bokach: " << a << " i : " << b
        << " lezy w punkcie ( " << getPositionX() << ", " << getPositionY() << " )" << endl; 
}