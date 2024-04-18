#include <iostream>

// potrzebne żeby zwrócić tablicę
#include <vector>

using namespace std;

template <typename T>
T przezWartosc(T a)
{
    return a;
}

// To jest niemożliwe do wykonania
// int& przezReferencje()
// {
//     int a = 10;
//     int *ptr = &a;
//     return ptr;
// }

// niemożliwe(wyrzuca Wyjątek Segmentation fault) bo stracimy informacje o x po wyjściu ze scope funkcji
// int& przezReferencje()
// {
//     int x = 10;
//     return x;
// }

// jedyna opcja to ustawienie zmiennej x jako statyczna, bo nie tracimy informacji po wyjściu z funcji
int &przezReferencje()
{
    static int x = 10;
    return x;
}

int *przezWskaznik()
{
    int *ptr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i;
    }
    return ptr;
}

// to jest niemożliwe aczkolwiek można wykorzystać wskaźnik,
// który jest identyfikowany jako tablica
// int[] przezTablice(int n)
// {
//     int tablica[n];
//     return tablica;
// }

vector<int> przezTablice(int n)
{
    vector<int> tablica;
    for (int i = n; i > 0; i--)
        tablica.push_back(i);
    return tablica;
}

int main()
{
    cout << przezWartosc(10) << endl;
    cout << przezWartosc(1.2) << endl;
    cout << przezReferencje() << endl;

    int *table = przezWskaznik();
    for (int i = 0; i < 5; i++)
        cout << table[i] << " ";
    cout << endl;
    // trzeba usunąć śmieci
    delete[] table;

    int dl_tab = 10;
    vector<int> t = przezTablice(dl_tab);
    for (int i = 0; i < dl_tab; i++)
        cout << t[i] << " ";
    cout << endl;
    return 0;
}