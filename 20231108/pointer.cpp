#include <iostream>

using namespace std;

int main()
{
    int a; // variable
    a = 10;

    int *t; // pointer
    t = &a;

    cout << a << endl;
    cout << t << endl;
    cout << *t << endl; // a value

    *t = *t + 10; // a = a + 10

    cout << a << endl;
    
    return 0;
}