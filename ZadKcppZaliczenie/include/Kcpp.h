#ifndef KCPP_CLASS_H
#define KCPP_CLASS_H

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
// pytanie - gdzie lepiej dodawać headery? w .h czy w .cc
#include"Kwadrat.h"
#include"Prostokat.h"
#include"Trojkat.h"
#include"Kolo.h"

using namespace std;

enum choices
{
    STRING = 1,
    PRZEKAZYWANIE_TABLIC,
    IQ,
    CINCOUTFILE,
    METODY_ABSTRAKCYJNE,
    END
};

class Kcpp
{
    public:
        Kcpp(string a, string b);
        
        inline string getString1() { return string1; }
        inline string getString2() { return string2; }
        
        inline void setString1(string str) { string1 = str; }
        inline void setString2(string str) { string2 = str; }

        // zadanie 1.2
        int zadString();

        // zadanie 2.2
        void printVector(vector<int> v);
        int zadPrzekazywanieTablic();

        // zadanie 3.2
        int zadIq();

        // zadanie 4.2
        int zadCinCoutFile();

        // zadanie 5.6
        int zadMetodyAbstrakcyjne();

        // menu do wyboru zadania
        int menu();

    private:
        string string1, string2;
        
};

#endif