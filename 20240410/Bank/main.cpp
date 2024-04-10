#include <iostream>
#include "Bank.h"

using namespace std;

int main()
{
    Account a("Eason", "123456");
    cout << a.get_name() << endl;
    cout << a.get_info() << endl;

    Bank b("Eason", "123456", 1000.0);
    cout << b.get_name() << endl;
    cout << b.get_info() << endl;

    return 0;
}