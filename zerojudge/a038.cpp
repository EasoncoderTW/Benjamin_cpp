#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[20];
    int l;
    cin >> s;
    l = strlen(s);

    int is_head = 1; // 假設目前出現的'0'都還在開頭
    int is_output = 0; // 假設我一個字都沒有輸出過

    for(int i = l-1;i>=0;i--)
    {
        if(s[i] != '0')
        {
            // s[i] 不是 '0'
            is_head = 0; // 已經不是開頭了
            cout << s[i];
            is_output = 1;
        }
        else
        {   // s[i] 是 '0'
            if(is_head == 0) // 已經不是開頭了
            {
                cout << s[i]; // 照樣要印出來
                is_output = 1;
            }
        }
    }

    if(is_output == 0) // 竟然一個字都沒有輸出過，表示字串為 "000.....00"
    {
        // 至少要輸出一個"0"
        cout << "0";
    }

    cout << endl;

    return 0;
}