#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter an A.D. year:";
    cin >> year;
    if(year%4 == 0 && year%100 != 0 || year%400 == 0)
    {cout << "Leap year"<< endl;}
    else
    {cout << "Not leap year"<< endl;}

    return 0;
}
/*
if(A)
{
    if(B)
    {
        ...
    }
}
V.S.
if(A && B)
{   
    ...
}
*/

/*
if(A)
{
    ...
}
if(B)
{
    ...
}
V.S.
if(A || B)
{   
    ...
}
*/

/*
if(A)
{
    ...X
}
else
{
    ...Y
}

V.S.
if(!A)
{   
    ...Y
}
else
{
    ...X
}
*/