#include <iostream>

using namespace std;

int main()
{
    int age = 10;
    if(age>=18) // 零 vs 非零
    {
        cout << "Welcome!!!" << endl;
        cout << "Controlled by if statement" << endl;
    }
    cout << "This line of code is nit controlled by if statement" << endl;
    
    return 0;
}