#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char password[] = "1234abcd";
    char user_input[20];

    cout << "Enter password:";
    cin >> user_input;

    if(strcmp(user_input,password) == 0) // string compare: if the same (==0)
    {
        cout << "PASS !!!" << endl;
    }
    else
    {
        cout << "FAIL !!!" << endl;
    }

    return 0;
}