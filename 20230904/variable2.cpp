#include <iostream>

using namespace std;

int main()
{
    unsigned char c;
    c = 128;
    char c2;
    c2 = c; // -64
    cout << (int)c2 << endl;

    int a = 1234;
    cout  << a << endl;

    return 0;
}