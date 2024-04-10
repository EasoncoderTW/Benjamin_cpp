#include <iostream>
#include "Log.h"

using namespace std;

int main()
{
    Log L;
    L.add("This is log test 1");
    L.save();

    Log2 L2("Log_2.txt");
    L2.add("This is log test 2");
    L2.add("Hello world");

    Log2 L3("Log_3.txt",2);
    L3.add("First Line");
    L3.add("Second Line");
    L3.add("Third Line");
    L3.add("Fourth Line");

    L3.concat(L2);

    return 0;
}