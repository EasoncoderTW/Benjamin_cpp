#include <iostream>

using namespace std;

int main()
{
    int data[10] = {1,2,3,4,5,6,7,8,9,10}; // worst case
    int tmp; // temp
    int pass = 0;

    int compare_count = 0;
    int swap_count = 0;

    // bubble
    while(1)
    {
        pass = 1; // 反證法
        for(int i=0;i<9;i++) // 檢查的迴圈
        {
            /* 顯示狀態 */
            for(int j=0;j<10;j++)
            {
                if(i==j || i+1==j)cout << "*"<< data[j] << ",";
                else cout << " "<< data[j] << ",";
            }

            compare_count++; // 有比較，就+1
            // data[i] v.s. data[i+1]
            if(data[i+1]>data[i])
            {
                swap_count++; // 有做交換，就+1
                cout << "- swap"<< endl;
                tmp = data[i]; // swap
                data[i] = data[i+1];
                data[i+1] = tmp;
                pass = 0;
                //break;
            }
            cout << endl;
        }// for
        if(pass) // 發現其實有錯誤就不會break;
        {
            break;
        }
    }//while

    for(int i=0;i<10;i++)
    {
        cout << data[i] << ", ";
    }
    cout << endl;
    cout << "Done!" << endl;
    cout << "[Compare Count] "<< compare_count << endl;
    cout << "[Swap Count] "<< swap_count << endl;

    return 0;
}