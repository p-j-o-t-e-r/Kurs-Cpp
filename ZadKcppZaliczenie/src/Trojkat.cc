#include "Trojkat.h"
#include<iostream>
#include<math.h>

using namespace std;

Trojkat::Trojkat(float x, float y, float a, float h, float pos) : Figura{ x, y }
{
    this->a = a;
    this->h = h;
    if(pos < 0.0f) pos = 0.0f;
    if(pos > 1.0f) pos = 1.0f;
    this->pos = pos;
}

float Trojkat::obwod()
{
    float b = sqrt((pos*a) * (pos*a) + h * h);
    float c = sqrt(((1-pos)*a) * ((1-pos)*a) + h * h);
    return a + b + c;
}

float Trojkat::pole()
{
    return (a * h)/2.0f;
}

void Trojkat::print()
{
    cout << "Trojkat o boku: " << a << " i wysokosci: " << h 
        << " lezy w punkcie ( " << getPositionX() << ", " << getPositionY() << " )" << endl; 
}