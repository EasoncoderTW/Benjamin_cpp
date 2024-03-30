#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char password[20] = "1234abcd";
    char new_password[20];
    char new_password_check[20];


    cout << "Current password:"<< password << endl;
    cout << "Enter new password:";
    cin >> new_password;
    cout << "Enter new password(again):";
    cin >> new_password_check;

    if(strcmp(new_password,new_password_check) == 0)
    {
        // change password OK
        cout << "Password changed." << endl;
        strcpy(password,new_password); // copy hall string
    }
    else
    {
        // change password Fail
        cout << "New password error." << endl;
    }
    cout << "Current password:"<< password << endl;

    return 0;
}