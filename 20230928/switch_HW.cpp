#include <iostream>

using namespace std;

/*
    HW: 計算機(四則運算)
    輸入格式: "數字 符號 數字" (空格為間隔)
    輸出: 依照符號('+','-','*','/')計算結果(整數即可)
*/
int main()
{
    char op;
    int number_A;
    int number_B;
    // step 1. 請使用者輸入(按照格式)
    cin >> number_A >> op >> number_B;
    
    // step 2. 依照op計算結果
    switch (op) 
    {
        case '+':
            cout << number_A + number_B;
            break;
        case '-':
            cout << number_A - number_B;
            break;
        case '*':
            cout << number_A * number_B;
            break;
        case '/':
            cout << number_A / number_B;
            break;
        default: 
            cout << "Wrong Input" <<endl;
            break;
    }

    return 0;
}