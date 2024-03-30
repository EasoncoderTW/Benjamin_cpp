#include <iostream>

using namespace std;

int main()
{
    // 1. 
    for(int i = 1;i<=5;i++)
    {
        for(int j = 1;j<=i;j++){cout << "*";}
        cout << endl;
    }
    // 2.
    for(int i = 1;i<=5;i++)
    {
        for(int j = 1;j<=5-i;j++){cout << " ";}

        for(int j = 1;j<=i;j++){cout << "*";}
        cout << endl;
    }
    // 3. 
    for(int i = 5;i>0;i--)
    {
        for(int j = 1;j<=i;j++){cout << "*";}
        cout << endl;
    }
    // 4.
    for(int i = 5;i>0;i--)
    {
        for(int j = 1;j<=5-i;j++){cout << " ";}

        for(int j = 1;j<=i;j++){cout << "*";}
        cout << endl;
    }

    // 5.
    for(int i = 0;i<=5;i++)
    {
        for(int j = 1;j<=5-i;j++){cout << " ";}

        for(int j = 1;j<=i*2;j++){cout << "*";}
        cout << endl;
    }

    return 0;
}