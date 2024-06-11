#include "Kwadrat.h"
#include<iostream>

using namespace std;

Kwadrat::Kwadrat(float x, float y, float a) : Figura{ x, y }
{
    this->a = a;
}

float Kwadrat::obwod()
{
    return 4 * a;
}

float Kwadrat::pole()
{
    return a * a;
}

void Kwadrat::print()
{
    cout << "Kwadrat o boku: " << a << " lezy w punkcie ( " << getPositionX() << ", " << getPositionY() << " )" << endl; 
}