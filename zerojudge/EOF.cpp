#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/* EOF: End Of File */

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF)
    {
        printf("> %d %d\n",a,b); 
    }

    while(cin >> a >> b)
    {
        cout << "> " << a << " " << b << endl;
    }
    return 0;
}