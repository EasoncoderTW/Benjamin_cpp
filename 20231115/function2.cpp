#include <iostream>

using namespace std;

// 函示回傳的型態 函式名稱(傳入函式的參數1,參數2,參數3 ...)
int find_max(int a,int b,int c)
{
    // 函式內部的算法設計
    int x;

    if(a > b)x = a;
    else x = b;

    if(x < c) x = c;

    return x; // 回傳結果
}

int main()
{
    int d1 = find_max(5,1,3); // 需要的情境
    int d2 = find_max(2,4,6); // 需要的情境
    int d = find_max(d1,d2,0);
    cout << d << endl;

    return 0;
}