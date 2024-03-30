#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a =(int*)malloc(sizeof(int)*n); // 配置剛好的空間
    if(a == NULL){cout << "malloc error" << endl; return 0;}
    for(int i=0;i<n;i++)
    {
        cin >> a[i]; // 逐一讀取資料
    }

    // sort
    int min_idx;
    int temp;
    for(int i = 0;i<n;i++)
    {
        min_idx = i;
        for(int j = i+1;j<n;j++)
        {
            if(a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " "; // 逐一輸出資料
    }
    cout << endl;
    free(a);

    return 0;
}