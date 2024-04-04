#include <iostream>

using namespace std;

enum Months
{
    January = 1, // inicjalizacja od 1; inaczej jest od 0
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    Months month;
    month = February;
    cout << month << endl;
    Months marzec = March;
    // enum Months marzec = March; // tak też jest dopuszczalne
    int miesiac = September;
    cout << miesiac << endl;
    miesiac = December;
    cout << Months::January << endl; // tak można ale nie trzeba
    cout << January << endl;         // to jest dopuszczalne tylko w Unscoped
    cout << marzec << endl;
    cout << miesiac << endl;

    int miesiac_urodzenia;
    cout << "Podaj miesiac urodzenia(1-12): ";
    cin >> miesiac_urodzenia;
    switch (miesiac_urodzenia)
    {
    case January:
        cout << "Urodziles sie w styczniu" << endl;
        break;
    case February:
        cout << "Urodziles sie w lutym" << endl;
        break;
    case March:
        cout << "Urodziles sie w marcu" << endl;
        break;
    case April:
        cout << "Urodziles sie w kwietniu" << endl;
        break;
    case May:
        cout << "Urodziles sie w maju" << endl;
        break;
    case June:
        cout << "Urodziles sie w czerwcu" << endl;
        break;
    case July:
        cout << "Urodziles sie w lipcu" << endl;
        break;
    case August:
        cout << "Urodziles sie w sierpniu" << endl;
        break;
    case September:
        cout << "Urodziles sie w wrzesniu" << endl;
        break;
    case October:
        cout << "Urodziles sie w pazdzierniku" << endl;
        break;
    case November:
        cout << "Urodziles sie w listopadzie" << endl;
        break;
    case December:
        cout << "Urodziles sie w grudniu" << endl;
        break;
    default:
        break;
    }

    return 0;
}