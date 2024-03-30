#include <iostream>

using namespace std;

int main()
{
    int i = 15; // 初始值設定
    while( i < 21) // 變數條件
    {
        printf("%d \n", i );
        i += 2; // 修改變數
    }

    for(int i = 0; i<10; i++) // for(設定;條件;修改動作){...}
    {
        printf("%d \n", i );
    }

    return 0;
}