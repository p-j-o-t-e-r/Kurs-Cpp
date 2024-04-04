#include <iostream>

using namespace std;

class Figura
{
private:
    int width;
    int height;

public:
    Figura();
    Figura(int a, int b);
    ~Figura();

    void setWidth(int value) { width = value; };
    void setHeight(int value) { height = value; };

    int getWidth() { return width; };
    int getHeight() { return height; };
};

Figura::Figura()
{
    width = 1;
    height = 1;
}

Figura::Figura(int a, int b)
{
    width = a;
    height = b;
}

Figura::~Figura()
{
    cout << "Usunieto figure" << endl;
}

int main()
{
    Figura *f1 = new Figura;
    cout << "Figura po inicjalizacji bez parametrow: \n"
         << "Szerokość: " << f1->getWidth() << "\nWysokosc: " << f1->getHeight() << endl;
    Figura *f2 = new Figura(4, 5);
    cout << "Figura po inicjalizacji z parametrami: \n"
         << "Szerokość: " << f2->getWidth() << "\nWysokosc: " << f2->getHeight() << endl;
    f2->setHeight(10);
    f2->setWidth(11);
    cout << "Figura po zmianie parametrow: \n"
         << "Szerokość: " << f2->getWidth() << "\nWysokosc: " << f2->getHeight() << endl;

    delete f1;
    return 0;
}