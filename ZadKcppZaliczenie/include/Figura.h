#ifndef FIGURA_H
#define FIGURA_H

class Figura
{
    private:
        float pozycja_x, pozycja_y;

    public:

        Figura(float x, float y) : pozycja_x(x), pozycja_y(y){}

        float getPositionX() { return pozycja_x; }
        float getPositionY() { return pozycja_y; }

        void setPositionX(float x) { pozycja_x = x; }
        void setPositionY(float y) { pozycja_x = y; } 

        void print();

        virtual float obwod() = 0;
        virtual float pole() = 0;
};

#endif