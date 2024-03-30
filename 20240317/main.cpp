#include <iostream>
#include "hello.hpp"
#define NAME_LEN 16

using namespace std;

int main()
{
    char name[NAME_LEN]; 
    cout << "Enter your name:";
    cin >> name;
    cout << "Hello, "<< name << endl;

    print_hello();
    
    return 0;
}
