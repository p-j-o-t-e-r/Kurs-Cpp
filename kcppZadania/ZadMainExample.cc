#include <iostream>
using namespace std;

void foo()
{
    cout << "foo" << endl;
}

void goo()
{
    cout << "goo" << endl;
}

void foo(int a)
{
    cout << "foo, but with " << a << endl;
}

#ifdef __cplusplus
extern "C"
{
#endif
// #include <stdio.h>
    void cfoo() { printf("cfoo\n"); }
    void cgoo() { printf("cgoo\n"); }
#ifdef __cplusplus
}
#endif

int main()
{
    foo();
    goo();
    foo(3);
    cfoo();
    cgoo();
    return 0;
}