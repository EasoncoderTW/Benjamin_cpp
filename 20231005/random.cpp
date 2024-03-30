#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    cout << time(NULL) << endl;
    // set random seed
    srand(time(NULL));
    for(int i=0;i<5;i++)
    {
        cout << rand() << endl;
    }
    
    return 0;
}
