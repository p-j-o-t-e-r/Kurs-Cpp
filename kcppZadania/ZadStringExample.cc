#include <iostream>
#include <string>
using namespace std;

void printEmpty(string str)
{
    if (str.empty())
        cout << "String: " << str << " is empty" << endl;
    else
        cout << "String: " << str << " isnt empty" << endl;
}

int main()
{

    string str1 = "Hello";
    string str2 = ", World";
    // 1. empty
    string empty;
    printEmpty(empty);
    printEmpty(str1);
    // 2. size
    cout << "Size of " << str1 << " is: " << size(str1) << endl;
    // 3. at
    cout << str1[3] << endl;
    // cout << str1.at(6) << endl; //wyrzuca wyjatek
    cout << str1.at(3) << endl;
    // 4. clear
    cout << "String : " << str1 << endl;
    printEmpty(str1);
    str1.clear();
    cout << "String cleared " << endl;
    printEmpty(str1);
    // 5. erase
    // idk
    string example = "This is a string";
    cout << "String erased from: " << example << endl;
    example.erase(example.begin(), example.begin()+3);
    cout << "String after erasing: " << example << endl;
    // 6. find
    example = "This is a string";
    cout << "Index of \'a\' is: " << example.find('a') << endl;
    // 7. swap
    string a = "Ala";
    string b = "Kot";
    cout << "Strings before:\na: " << a << " b: " << b << endl;
    a.swap(b);
    cout << "Strings after:\na: " << a << " b: " << b << endl;
    // 8. substr
    cout << "Substring of: " << example << " is: " << example.substr(0, 4) << endl; 
    // 9. append
    cout << "Appended strings: " << str1.append(str2) << endl;

    /* Zadanie podczas zajęć
     *   Napisz funkcje (osobny program) w którym zadeklarujesz string i uzyjesz na nim funkcji manimulacyjnych:
     *   1. empty() 	Zwraca wartość true jeżeli napis jest pusty.
     *   2. size(),length() 	Zwraca ilość znaków w napisie.
     *   3. at() 	Zwraca znak o podanym położeniu, tak jak operator [], z tym że ta metoda jest bezpieczniejsza - wyrzuca wyjątek w przypadku wyjścia poza zakres stringa.
     *   4. clear() 	Usuwa wszystkie znaki z napisu.
     *   5. erase(...) 	Usuwa wybrane znaki.
     *   6. find(...) 	Znajduje podciąg w ciągu, są też bardziej rozbudowane funkcje tego typu.
     *   7. swap(...) 	Zamienia miejscami dwa stringi, a staje się b, a b staje się a.
     *   8. substr(...) 	Zwraca podciąg na podstawie indeksu początkowego i długości podciągu.
     *   9. append(...) */

    return 0;
}
