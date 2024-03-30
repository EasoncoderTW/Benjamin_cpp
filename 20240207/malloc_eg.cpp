#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *a = (int*)malloc(sizeof(int)); // 4byte

    cout << a << endl;
    cout << *a << endl;

    *a = 10;
    cout << *a << endl;

    free(a);

    return 0;
}