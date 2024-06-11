#ifndef TROJKAT_H
#define TROJKAT_H

#include"Figura.h"

class Trojkat : public Figura
{
    public:
        Trojkat(float x, float y, float a, float h, float pos);

        void print();

        float pole();

        float obwod();

    private:
        float a, h, pos;
        // pos jest liczba od 0 do 1 oznaczajaca gdzie pada wysokosc na podstawe
};

#endif