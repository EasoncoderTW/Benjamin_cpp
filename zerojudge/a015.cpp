#include <iostream>

using namespace std;

int main()
{
    int m[100][100];

    int x,y;
    
    while(cin >> x >> y)
    { 
        for(int i = 0;i<x;i++)
        {
            for(int j = 0;j<y;j++)
            {
                cin >> m[i][j];
            }
        }

        // -------

        for(int j = 0;j<y;j++)
        {
            for(int i = 0;i<x;i++)
            {
                cout << m[i][j];
                if(i != x-1)cout << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}