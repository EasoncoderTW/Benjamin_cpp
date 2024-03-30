#include <iostream>

using namespace std;

struct t{
    int x;
    int y;
    int z;
};
// size: 12 bytes

int main()
{
    struct t a[3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *p = (int*)&a;
    for(int i =0;i<9;i++)
    {
        cout << (int)(p+i) << ": "<< *(p+i) << endl;
    }
    return 0;
}