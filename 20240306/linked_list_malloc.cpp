#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

struct order
{
    int order_id;
    int order_code;
    struct order *next; // 用來儲存下一個空間位置的指標
};

void print_out(struct order *head)
{
    while(1) // 無窮迴圈(理論)
    {
        cout << "[ID] " << head->order_id << " [code] "<< head->order_code << endl;
        // 檢查NULL
        if(head->next == NULL)
        {
            cout << "End of list" << endl;
            break; // 離開迴圈
        }
        cout << "Next data is at "<<  head->next << endl;
        head = head->next;
    }
}

int main()
{   
    srand(time(NULL));
    struct order *head;
    struct order *current;

    head = current = (struct order*)malloc(sizeof(struct order));
    current->order_id = 2;
    current->order_code = rand()%10;
    current->next = (struct order*)malloc(sizeof(struct order));

    current  = current->next; // TBD
    current->order_id = 3;
    current->order_code = rand()%10;
    current->next = (struct order*)malloc(sizeof(struct order));

    current  = current->next; // TBD
    current->order_id = 4;
    current->order_code = rand()%10;
    current->next = (struct order*)malloc(sizeof(struct order));

    current  = current->next; // TBD
    current->order_id = 5;
    current->order_code = rand()%10;
    current->next = NULL;

    print_out(head);

    // free
    struct order *remain;
    while(head != NULL)
    {  
        remain = head->next;
        cout << "free the memory:" << head << endl;
        free(head);
        head = remain;
    }

    return 0;
}