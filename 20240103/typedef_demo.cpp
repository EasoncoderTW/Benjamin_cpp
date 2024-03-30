#include <iostream>

using namespace std;

typedef int money;

struct point
{
    int x;
    int y;
};
typedef struct point POINT;

typedef struct point3D
{
    int x;
    int y;
    int z;
}POINT3D;

typedef struct
{
    int x;
    int y;
    int z;
    int t;
}POINT3D_plus;

int main()
{
    int a = 10;
    cout << a << endl;

    money b = 20; // 新的型態名稱，但是性質跟int一樣
    cout << b << endl;

    struct point p;
    p.x = 10;
    p.y = 20;
    
    POINT p2;
    p2.x = p.x + 10;
    p2.y = p.y + 20;

    return 0;
}