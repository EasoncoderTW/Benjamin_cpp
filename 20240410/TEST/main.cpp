#include <iostream>
#include "Test.h"

using namespace std;

int main()
{
    Test x;
    x.set_b(12);
    cout << "b = " << x.get_b() << endl;
    x.set_b(-1);
    cout << "b = " << x.get_b() << endl;

    x.d = 3;
    cout << "d = " << x.d << endl;


    Test2 y;
    y.get_a_plus_b();

    Test3 z;
    z.set_a(12);
    cout << "12*12 = " << z.get_a_square() << endl;

    return 0;
}