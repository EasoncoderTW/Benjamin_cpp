#include <iostream>

using namespace std;

int main()
{
    char c = 97; // a
    char d = 'a'; // a

    //cout << c << endl;
    //cout << d << endl;

    char s[10] = {'a','b','c','d',0,0,0,0,0,0}; // char array
    cout << s;

    char s2[6] = {'E','a','s','o','n','\0'}; // C - string (char array end with zero)
    cout << s2;

    char s3[6] = "Eason";
    char s4[] = "Eason"; // s4[6]

    return 0;
}