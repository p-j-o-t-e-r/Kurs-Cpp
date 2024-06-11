#ifndef KOLO_H
#define KOLO_H

#include"Figura.h"

class Kolo : public Figura
{
    public:
        Kolo(float x, float y, float r);

        void print();

        float pole();

        float obwod();

        float dystans(float param);

    private:
        float r;
};

#endif