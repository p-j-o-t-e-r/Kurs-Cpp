#ifndef KCPP_CLASS_H
#define KCPP_CLASS_H

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class Kcpp
{
    public:
        Kcpp(int a);
        
        inline int getValue() { return value; }
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

        //zadanie 4.2
        int zadCinCoutFile();


    private:
        int value;
        string string1, string2;
        
};

#endif