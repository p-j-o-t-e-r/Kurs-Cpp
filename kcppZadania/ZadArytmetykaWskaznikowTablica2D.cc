#include <iostream>

using namespace std;

int main()
{
    int tab[3][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            unsigned long p = (unsigned long)&tab[i][j];
            cout << "Adres: " << &tab[i][j] << "\t dec: " << p << endl;
        }
    }
}