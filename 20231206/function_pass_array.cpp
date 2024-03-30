#include <iostream>

using namespace std;

int summary(int *start_address, int length)
{
    int s = 0;
    for(int bias = 0; bias < length;bias++)
    {
        //s = s + *(start_address+bias);
        s = s + start_address[bias];
    }
    return s;
}

int main()
{

    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int r;
    r = summary(&a[2],5);
    cout << r << endl;

    r = summary(a,10); // a 相當於 &a[0]
    cout << r << endl;


    return 0;
}