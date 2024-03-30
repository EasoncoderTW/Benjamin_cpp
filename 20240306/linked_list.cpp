#include <iostream>

using namespace std;


struct order
{
    int order_id;
    int order_code;
    struct order *next; // 用來儲存下一個空間位置的指標
};

void print_out(struct order head)
{
    while(1) // 無窮迴圈(理論)
    {
        cout << "[ID] " << head.order_id << " [code] "<< head.order_code << endl;
        // 檢查NULL
        if(head.next == NULL)
        {
            cout << "End of list" << endl;
            break; // 離開迴圈
        }
        cout << "Next data is at "<<  head.next << endl;
        head = *(head.next);
    }
}

int main()
{   
    struct order a;
    struct order b;
    struct order c;

    a.order_id = 1;
    b.order_id = 2;
    c.order_id = 3;

    a.order_code = 2;
    b.order_code = 2;
    c.order_code = 5;

    a.next = &b;
    b.next = &c;
    c.next = NULL; // 沒有下一個了

    print_out(b);

    return 0;
}

/*
1. add front/insert/end
2. delete front/insert/end
3. print out
4. sort
*/