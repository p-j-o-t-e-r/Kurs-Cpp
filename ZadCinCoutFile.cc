#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char a;
    cout << "Podaj cyfrę [0-9]: ";
    cin >> a;
    ofstream file;
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
    return 0;
}