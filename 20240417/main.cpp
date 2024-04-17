#include "Poly.h"
#include <iostream>

using namespace std;


int main()
{
    Poly a(3);
    int b_coef[3] = {1,2,3};
    Poly b(2,b_coef);

    cout << "a(x) = " << a << endl;
    cout << "b(x) = " << b << endl;

    int c = 3;
    Poly d = b * c; // d = 三倍的b
    Poly e = c * b; 

    cout << "a(x) = " << a << endl;
    cout << "b(x) = " << b << endl;
    cout << "d(x) = " << d << endl;
    cout << "e(x) = " << e << endl;

    int x_coef[3] = {1,2,3};
    Poly x(2,x_coef);
    Poly y = x * x; 
    cout << "x(x) = " << x << endl;
    cout << "y(x) = " << y << endl;

    return 0;
}
