#include <iostream>

using namespace std;

void Funkcja1()
{
    // uznałem że p to pointer
    int tab[5] = {1, 2, 3, 4, 5};
    int *p = tab;
    // p++ postinkrementacja wskaźnika
    cout << "p++ = " << p++ << endl;
    cout << "p = " << p << endl

}

int main()
{
    Funkcja1();
    return 0;
}