#include "Kcpp.h"
#include "functions.h"
using namespace std;

Kcpp::Kcpp(string a, string b)
{
    string1 = a;
    string2 = b;
}

int Kcpp::zadString()
{
    // 1. empty
    cout << "Funkcja empty:" << endl;
    string empty;
    string temp; // used for storing strings temporarily
    printEmpty(empty);
    printEmpty(string1);
    // 2. size
    cout << "\nFunkcja size:" << endl;
    cout << "Size of " << string1 << " is: " << size(string1) << endl;
    // 3. at
    cout << "\nFunkcja at:" << endl;
    cout << "string1[3] = " << string1[3] << endl;
    // cout << str1.at(6) << endl; //wyrzuca wyjatek
    cout << "string1.at(3) = " << string1.at(3) << endl;
    // 4. clear
    cout << "\nFunkcja clear:" << endl;
    cout << "String1 : " << string1 << endl;
    printEmpty(string1);
    temp = string1;
    string1.clear();
    cout << "String1 cleared " << endl;
    printEmpty(string1);
    string1 = temp;
    // 5. erase
    cout << "\nFunkcja erase:" << endl;
    cout << "String2 erased from: " << string2 << endl;
    temp = string2;
    string2.erase(string2.begin(), string2.begin() + 3);
    cout << "String2 after erasing first 3 elements: " << string2 << endl;
    string2 = temp;
    // 6. find
    cout << "\nFunkcja find:" << endl;
    cout << "Index of \'a\' is: " << string2.find('a') << endl;
    // 7. swap
    cout << "\nFunkcja swap:" << endl;
    cout << "Strings before:\nstring1: " << string1 << " string2: " << string2 << endl;
    string1.swap(string2);
    cout << "Strings after swapping:\nstring1: " << string1 << " string2: " << string2 << endl;
    // 8. substr
    cout << "\nFunkcja substr:" << endl;
    cout << "Substring of first 4 characters of: " << string2 << " is: " << string2.substr(0, 4) << endl; 
    // 9. append
    cout << "\nFunkcja append:" << endl;
    cout << "Appended strings: " << string1.append(string2) << endl;

    return 1;
}

void Kcpp::printVector(vector<int> v)
{
    for (int el : v)
    {
        cout << el << ' ';
    }
    cout << endl;
}

int Kcpp::zadPrzekazywanieTablic()
{
    vector<int> t;
    int n = 10;
    cout << "Generowanie tablicy z liczbami całkowitymi" << endl;
    for (int i=n; i > 0; i--)
        t.push_back(i);
    cout << "Wywołanie funkcji void printVector(vector<int> v)" << endl;
    this->printVector(t);
    return 1;
}

int Kcpp::zadIq()
{
    int tab[] = {11, 22, 33, 44, 55}, i = 3, *p, *q;

	p = &tab[0] + 3;
	cout << "*p     = " << *p << endl;

	p = p - 2;
	cout << "*p     = " << *p << endl;

	q = tab;
	cout << "*(q+2) = " << *(q + 2) << endl;
	cout << "q[2]   = " << q[2] << endl;

	cout << "q[i]   = " << q[i] << endl;
	cout << "i[q]   = " << i[q] << endl; //   <-- Proszę to wyjaśnić
	// e1[e2] = *((e2) + e(1))
    cout << "Wyjaśnienie problemu: " << endl;
	cout << "*((i) + (q)) = q[i]   = " << *((i) + (q)) << endl; //   <-- wyjaśnienie
	cout << "*((q) + (i)) = i[q] = " << *((q) + (i)) << endl; //   <-- wyjaśnienie

	i++;
	cout << "*(i+q)   = " << *(i + q) << endl;

	/*   Zadanie 3.2 */
	// Odpowiedź znalazłem na stronie https://learn.microsoft.com/en-us/cpp/cpp/subscript-operator?view=msvc-170
	// Nie ma znaczenia w jakiej kolejności jest i oraz q, ponieważ mamy typ pointer oraz integral(zamienne), gdzie wyrażenie 
	// e1[e2] rozwija się w: *((e2) + e(1))

    return 1;
}

int Kcpp::zadCinCoutFile()
{
    char a;
    cout << "Podaj cyfrę [0-9]: ";
    cin >> a;
    fstream file;
    // otwarcie pliku do zapisu
    file.open ("example.txt", ios::app);
    if (a <= '9' && a >= '0')
    {
        cout << "Podana cyfra to: " << a << endl;
        file << a << endl;
    }
    else
    {
        // dwa sposoby wypisania na standardowy stream błędów
        cerr << "ERROR. Nie podano cyfry" << endl;
        fprintf(stderr, "ERROR. Nie podano cyfry\n");
    }
    file.close();
    
    // otwarcie pliku do odczytu
    file.open("example.txt");

    string linia;
    do
    {
        getline(file, linia); 
        cout << linia << endl; 
    }
    while(linia != ""); 

    return 1;
}


int Kcpp::zadMetodyAbstrakcyjne()
{
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

    return 1;
}

int Kcpp::menu()
{   
    int choice;
    do
    {
        cout << "-----------------------------------------------" << endl;
        cout << "1. Zadanie 1.2 (Pokazuje działanie poszczególnych funkcji z biblioteki string.)\n"
             << "2. Zadanie 2.2 (Przekazywanie tablic. Czy to możliwe?)\n"
             << "3. Zadanie 3.2 (Zadanie na inteligencje. Czym różni się q[i] od i[q], gdzie q to wskaźnik?)\n"
             << "4. Zadanie 4.2 (cin, cout cerr oraz fstream, czyli różne strumienie danych.)\n"
             << "5. Zadanie 5.6 (Klasy abstrakcyjne na podstawie Figur geometrycznych)\n"
             << "6. KONIEC\n"
             << "Wybierz zadanie: ";
        cin >> choice;
        cout << "-----------------------------------------------" << endl;
        switch (choice)
        {
        case STRING:
            zadString();
            break;
        case PRZEKAZYWANIE_TABLIC:
            zadPrzekazywanieTablic();
            break;
        case IQ:
            zadIq();
            break;
        case CINCOUTFILE:
            zadCinCoutFile();
            break;
        case METODY_ABSTRAKCYJNE:
            zadMetodyAbstrakcyjne();
            break;
        case END:
            cout << "Koniec wykonywania programu" << endl;
            break;
        default:
            cout << "\nZły wybór. Spróbuj ponownie. Po restarcie" << endl;   
            choice = END; 
            break;
        }
    } while (choice != END);

    return 1;
}
