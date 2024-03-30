#include <iostream>

using namespace std;

struct point{
    int x; // bias +0
    int z; // bias +4
    int y; // bias +8
};

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    struct point *p = (struct point *)&a[5];

    cout << p->x << endl;
    cout << p->y << endl;

    return 0;
}