#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int s = 0;

    int x;
    cin >> x;

    while(a<=x) // loop condition
    {
        // loop body
        s = s+a;
        a++;
        cout << "current a = " << a << " ,s = "<< s << endl;
    }

    cout << s << endl;

    return 0;
}