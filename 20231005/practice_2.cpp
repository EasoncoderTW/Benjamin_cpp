#include <iostream>

using namespace std;

int main()
{
    for(int i = 2; i < 10;i++)
    {
        // print 一排 ix2 ...ix9
        for(int j = 2;j<10;j++)
        {
            //cout << i << " x " << j << " = " << i*j << " ";
            printf("%1d x %1d = %2d ", i, j, i*j);
        }
        cout << endl;
    }

    return 0;
}