#include<iostream>
#include"Kcpp.h"
#include"Kwadrat.h"
#include"Prostokat.h"
#include"Trojkat.h"
#include"Kolo.h"

using namespace std;


int main()
{
    Kcpp test(1);
    test.setString1("Ala, ma kota.");
    test.setString2("Zosia, ma psa.");

    test.zadString();
    test.zadPrzekazywanieTablic();
    test.zadIq();
    test.zadCinCoutFile();

    Kwadrat kw(1, 2, 3);
    kw.print();
    cout << "Ten kwadrat ma pole: " << kw.pole() << " i obwod: " << kw.obwod() << endl; 
    Prostokat pr(1, 3, 4, 5);
    pr.print();
    cout << "Ten prostokat ma pole: " << pr.pole() << " i obwod: " << pr.obwod() << endl; 
    Trojkat tr(1, 0, 6, 4, 0.2f);
    tr.print();
    cout << "Ten trojkat ma pole: " << tr.pole() << " i obwod: " << tr.obwod() << endl; 
    Kolo kol(4, 1, 4);
    kol.print();
    cout << "Te kolo ma pole: " << kol.pole() << " i obwod: " << kol.obwod() << endl; 
    float p = 20.0f;
    cout << "Minimalna odleglosc miedzy obywatelami, ktorzy moga zajac " << p << " metrow, to: " << kol.dystans(p) << " metrow." <<endl;

    return 0;
}