#include "Figura.h"
#include<iostream>

using namespace std;

void Figura::print()
{
    cout << "Figura jest w punkcie: ( "  << getPositionX() << ", " << getPositionY() << " )" << endl;
}