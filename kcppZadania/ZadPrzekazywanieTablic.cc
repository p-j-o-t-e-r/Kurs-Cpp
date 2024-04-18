#include <iostream>

// potrzebne żeby zwrócić tablicę
#include <vector>

using namespace std;

void printVector(vector<int> tab)
{
    for (int el : tab)
    {
        cout << el << ' ';
    }
    cout << endl;
}


int main()
{
    vector<int> t;
    int n = 10;
    for (int i=n; i > 0; i--)
        t.push_back(i);
    printVector(t);
    return 0;
}