#ifndef KWADRAT_H
#define KWADRAT_H

#include"Figura.h"

class Kwadrat : public Figura
{
    public:
        Kwadrat(float x, float y, float a);

        void print();

        float pole();

        float obwod();

    private:
        float a;

};

#endif