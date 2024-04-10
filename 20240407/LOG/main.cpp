#include <iostream>
#include "Log.h"

using namespace std;

int main()
{
    Log L;
    L.add("This is log test 1");
    L.save();

    Log L2("Log_04_07.txt");
    L2.add("This is log test 2");
    L2.add("Hello world");

    Log L3("Log_3.txt",2);
    L3.add("First Line");
    L3.add("Second Line");
    L3.add("Third Line");
    L3.add("Fourth Line");

    return 0;
}