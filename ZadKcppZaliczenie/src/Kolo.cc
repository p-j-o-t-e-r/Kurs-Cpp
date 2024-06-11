#include "Kolo.h"
#include<iostream>
#include <math.h>

using namespace std;

Kolo::Kolo(float x, float y, float r) : Figura{ x, y }
{
    this->r = r;
}

float Kolo::obwod()
{
    return 2 * M_PI * r;
}

float Kolo::pole()
{
    return M_PI*r*r;
}

void Kolo::print()
{
    cout << "Kolo o promieniu: " << r << " lezy w punkcie ( " << getPositionX() << ", " << getPositionY() << " )" << endl; 
}

float Kolo::dystans(float param)
{
    return 2*sqrt(param/M_PI);
}


