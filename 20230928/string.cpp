#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string s = "Eason";
    cout << "My name is "<< s << endl;
    //printf("My name is %s\n",s.c_str());

    cout << "Enter password:";
    string password = "abc123";
    string user_input;
    cin >> user_input;
    if(user_input == password){cout << "PASS" << endl;}
    else{cout << "FAIL" << endl;}

    
    return 0;
}

/*

string in C:
-> char array {'E','a','s','o','n'}
string in C++:
-> string object {
    ....
    ...
    ...
    attribute="Eason"
    ....
    ...
}

*/