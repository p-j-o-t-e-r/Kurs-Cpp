#include "functions.h"
using namespace std;

void printEmpty(string str)
{
    if (str.empty())
        cout << "String: " << str << " is empty" << endl;
    else
        cout << "String: " << str << " isnt empty" << endl;
}