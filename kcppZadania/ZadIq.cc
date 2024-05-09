/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.18
 * \brief Arytmetyka wskaznikow w C++
 * v0.02
 */

#include <iostream>
using namespace std;

int main()
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

	return 0;
}
