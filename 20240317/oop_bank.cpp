#include <iostream>

using namespace std;

// 宣告類別
class BankAccount {
// 宣告 public 成員
public:
    BankAccount(int init_money); // 宣告constructor  (不可有return value)
    ~BankAccount(); // 宣告destructor (不可有傳入參數)
    void save(int amount);
    void withdraw(int amount);
private:
    int money;
};

// 實作 BankAccount 的 BankAccount() 建構函數
BankAccount::BankAccount(int init_money): money(init_money) {
    cout << "BankAccount constructor"<< endl;
    cout << "initalize bank money = "<< money << endl;
}

BankAccount::~BankAccount(){
    cout << "BankAccount destructor"<< endl;
    cout << "delete bank account" << endl;
    cout << "Remain money = "<< money << endl;
}

void BankAccount::save(int amount) {
    money = money + amount;
    cout << "save OK" << amount  << endl;
}

void BankAccount::withdraw(int amount) {
    if(amount < money)
    {
        money = money - amount;
        cout << "Withdraw OK" << amount << endl;
    }
    else
    {
        cout << "Withdraw Fail" << amount << endl;
    }
}

// 程式執行的 main()
int main(void) {
    // 宣告並建立 ClassName 型態的物件 t
    BankAccount b(100); // 建立物件(透過建構函數)
    b.save(500);
    b.save(100);
    b.withdraw(600);
    b.withdraw(200); // fail
    b.save(300);
    b.withdraw(200);
    
    return 0;
}

/*
0. git
1. class
*/
