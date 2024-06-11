#ifndef PROSTOKAT_H
#define PROSTOKAT_H

#include"Figura.h"

class Prostokat : public Figura
{
    public:
        Prostokat(float x, float y, float a, float b);

        void print();

        float pole();

        float obwod();

    private:
        float a, b;

};

#endif