#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    // 4K * 60000 = 240MB
    int *a[30000];
    int failed = 0;

    for(int i = 0;i<30000;i++)
    {
        a[i] = (int*)malloc(sizeof(int)*1024); // 4*1024 = 4KB
        Sleep(1); // 0.001 sec
        if(a[i] == NULL)// 配置失敗
        {
            cout << "[Malloc Failed] i = "<<i<<endl;
            failed++;
        }
    }
    cout << "malloc Done" << endl;
    cout << "failede = " << failed << endl;
    int x;
    cin >> x; // 等待
    
    for(int i = 0;i<30000;i++)
    {
        free(a[i]);
    }
    cout << "free Done" << endl;

    return 0;
}