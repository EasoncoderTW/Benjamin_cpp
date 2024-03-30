#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> n >> m;

    int s = 0;
    for(int k = n;k<=m;k++)
    {
        s += (k*k*k);
    }

    cout << s << endl;


    return 0;
}