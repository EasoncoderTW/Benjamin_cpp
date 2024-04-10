#include <iostream>

using namespace std;

class Account{
    private: // 隱私的 (外界看不到/子類別也看不到無法繼承)
        string name;
    protected: // 受保護的 (外界看不到/子類別看的到可繼承)
        string password;
        string phone_number;
    public: // 公開的
        Account(string name,string password):name(name) ,password(password), phone_number("None"){};
        Account(string name,string password,string phone_number):name(name) ,password(password), phone_number(phone_number){};
        string get_name(){return name;};
        string get_password(){return password;};
        string get_phone_number(){return phone_number;};
        void set_password(string password){password = password;};
        void set_phone_number(string phone_number){phone_number = phone_number;};
        virtual string get_info(){
            return "[Name] -> "+name+"\n[password] -> "+password+"\n[phone_number] -> "+phone_number+"\n";
        };
};

// 繼承
class Bank:public Account // Bank 將所有的 Acount 屬性與功能都繼承下來
{
    private:
        float money;
    public:
        Bank(string name,string password):Account(name,password),money(0){};
        Bank(string name,string password,string phone_number):Account(name,password,phone_number), money(0){};
        Bank(string name,string password,float money):Account(name,password), money(money){};
        Bank(string name,string password,string phone_number,float money):Account(name,password,phone_number), money(money){};
        //override
        string get_info(){
            return Account::get_info() + "[money] -> "+to_string(money) + "\n";
        };
};

/*
1. overloading 
2. operator overloading
*/


