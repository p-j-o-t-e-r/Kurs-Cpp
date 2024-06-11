#include "Kcpp.h"
#include "functions.h"
using namespace std;

Kcpp::Kcpp(int a)
{
    this->value = a;
}

int Kcpp::zadString()
{
    // 1. empty
    string empty;
    string temp; // used for storing strings temporarily
    printEmpty(empty);
    printEmpty(string1);
    // 2. size
    cout << "Size of " << string1 << " is: " << size(string1) << endl;
    // 3. at
    cout << string1[3] << endl;
    // cout << str1.at(6) << endl; //wyrzuca wyjatek
    cout << string1.at(3) << endl;
    // 4. clear
    cout << "String1 : " << string1 << endl;
    printEmpty(string1);
    temp = string1;
    string1.clear();
    cout << "String1 cleared " << endl;
    printEmpty(string1);
    string1 = temp;
    // 5. erase
    cout << "String2 erased from: " << string2 << endl;
    temp = string2;
    string2.erase(string2.begin(), string2.begin() + 3);
    cout << "String2 after erasing first 3 elements: " << string2 << endl;
    string2 = temp;
    // 6. find
    cout << "Index of \'a\' is: " << string2.find('a') << endl;
    // 7. swap
    cout << "Strings before:\nstring1: " << string1 << " string2: " << string2 << endl;
    string1.swap(string2);
    cout << "Strings after swapping:\nstring1: " << string1 << " string2: " << string2 << endl;
    // 8. substr
    cout << "Substring of: " << string2 << " is: " << string2.substr(0, 4) << endl; 
    // 9. append
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
    for (int i=n; i > 0; i--)
        t.push_back(i);
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
