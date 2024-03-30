#include <iostream>

using namespace std;

//  函式名稱(沒有參數)
void print_hello()
{
    // 函式 print_hello() 的實際要做的事
    cout << "Hello" << endl; 
    cout << "Hello" << endl; 
}

// 這個函式需要傳入一個參數
void print_number(int n)
{
    cout << "Number is " << n << endl;
    return;
}

// 這個函式需要傳入兩個參數
void print_number_add(int n,int m)
{
    cout << n << " + " << m << " = " << n+m << endl;
    // return;
}

// 這個函式需要傳入兩個參數，並且計算完的結果會傳回去(呼叫者)
int number_add(int n,int m)
{
    return n+m; // 傳回一個整數(int)
}

int get_a_number()
{
    int c;
    cout << "Enter a number:";
    cin >> c;
    return c; // 傳回一個整數(int)
}

int main() // 程式的起始點
{
    print_hello(); // "Call(呼叫)"事先宣告好的函式(任務)
    print_number(10); // "Call(呼叫)"函式，並且給予需要的參數
    print_number(8); // "Call(呼叫)"函式，並且給予需要的參數
    print_number_add(2,3);

    number_add(2,3);

    cout << "Got result = "<< number_add(2,3) << endl;

    int result = get_a_number();
    cout << "Got Number = "<< result << endl;

    return 0;
}
/*
int save()
{
    ...
    return 1;
    ...
    return 0;
}

int main()
{
    int result = save();
    while(result != 1)
    {
        result = save();
    }

    save();
}
*/