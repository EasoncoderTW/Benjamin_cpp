#include <iostream>

using namespace std;

// 宣告類別
class ClassName {
// 宣告 public 成員
public:
    int a;
    int b;
    int FunctionName(); // 宣告
};

// 實作 ClassName 的 FunctionName() 成員函數
int ClassName::FunctionName() {
    return a + b;
}

// 程式執行的 main()
int main(void) {
    // 宣告並建立 ClassName 型態的物件 t
    ClassName t;
    ClassName t2;
    t.a = 11; // 直接設定成員變數值
    t.b = 22;
    t2.a = 12;
    t2.b = 3;
    cout << endl;
    // 呼叫並印出 FunctionName() 的回傳值
    cout << t.FunctionName() << endl;
    cout << t2.FunctionName() << endl;
    cout << endl;
    
    return 0;
}