#include <stdlib.h>
#include <iostream>

using namespace std;

// 標頭檔: 我有什麼?格式是甚麼?

class Poly
{
private:
    int level;
    int* coef; // 係數
public:
    Poly();
    Poly(int level);
    Poly(int level, int* coef);
    ~Poly();
    void print_out();
    friend ostream &operator<<(ostream &o, const Poly &p); // 交給ostream物件進行"第三方角度"的處理，所以需要開放friend權限給ostream

    Poly operator*(const Poly &P); // P * P (P主角, 傳入值P)
    Poly operator*(int c); // P * c (P主角, 傳入值只有c)
    friend Poly operator*(int c,const Poly &p); // c * P  (c主角,但是c沒有功能，所以要用friend進行"第三方角度"的處理)

    Poly operator=(const Poly &p); // 如何指定
};


