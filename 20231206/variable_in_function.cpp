#include <iostream>

using namespace std;

// globel variable
int y;

void function_a()
{
    int x; // local variable
    x = 10;
    int y; // local !
    y = 15;
    cout << "x in function_a = "  << x << endl;   
    cout << "&x in function_a = "  << &x << endl;   
    y--;
    cout << "y in function_a = "  << y << endl;
    cout << "&y in function_a = "  << &y << endl;   // address
}

int main() // 程式的起始點
{
    int x; // local variable
    x = 10;
    y = 10;
    cout << "y in main = "  << y << endl;
    cout << "&y in main = "  << &y << endl;   // address
    function_a();
    function_a();
    function_a();
    cout << "y in main = "  << y << endl;
    cout << "&y in main = "  << &y << endl;   // address
    cout << "x in main = "  << x << endl;
    cout << "&x in main = "  << &x << endl;   // address

    // scope
    int a;
    a = 10;
    {
        int a = 20;
        a--;
        cout << "a (in scope) = "<< a << endl;
    }
    cout << "a (out of scope) = "<< a << endl;
    
    return 0;
}