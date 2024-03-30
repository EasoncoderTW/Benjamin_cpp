#include <iostream>
#include <cmath>

using namespace std;

struct position2D
{
    int x; // struct attribute 屬性
    int y;
};

int main()
{
    struct position2D p1;
    p1.x = 2;
    p1.y = 3;

    struct position2D p2;
    p2.x = 5;
    p2.y = 6;

    float distance = sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
    cout << "distance = "<< distance << endl;

    return 0;
}