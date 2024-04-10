#include <iostream>

using namespace std;

class Test{
    // private 隱藏(不公開)
    // protected 隱藏(不公開)- 受保護(子類別看的到)
    protected: // 封裝 
        int a;
        int b;
    public:
        int get_a(){return a;}; // 可讀不可寫
        int get_b(){return b;}; // 可讀
        void set_b(int t){
            if(t >= 0)b =t;
        } // 可寫(受限制)
        int c;
        int d;

};

// Test 繼承過來的屬性接降級到protected以下(private 維持 private)
class Test2:private Test{ // 擁有Test的屬性
    public:  // a - private
        void set_a(int t){a = t;};
        int get_a_plus_b(){
            return get_a() + get_b();
        }
};

class Test3:public Test2{
    public: // a - unknown (無法繼承)
        int get_a_square(){return a*a;};
};