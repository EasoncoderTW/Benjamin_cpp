#include <iostream>

using namespace std;

int main()
{
    int a[3][4];

    for(int row = 0;row < 3;row++)
    {
        for(int col = 0;col<4;col++)
        {
            cout << "& a[" << row << "][" << col << "] = " << &a[row][col] << endl;
        }
    }
    
    return 0;
}