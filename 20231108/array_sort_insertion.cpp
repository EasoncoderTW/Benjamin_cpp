#include <iostream>

using namespace std;

int main()
{
    int data[10] = {1,2,3,4,5,6,7,8,9,10}; // worst case
    //int data[10] = {4,6,5,10,3,9,1,7,8,2};
    int tmp; // temp
    int pass = 0;
    int current_t;

    int compare_count = 0;
    int swap_count = 0;

    // insertion
    for(int t = 1;t < 10;t++) // 所有的數字要排一遍
    {
        current_t = t; // 目前檢查的地方
        compare_count++;
        while(data[current_t] > data[current_t-1]) // 大小順序不對
        {
            // swap
            tmp = data[current_t];
            data[current_t] = data[current_t-1];
            data[current_t-1] = tmp;

            swap_count++;

            current_t--;
            if(current_t == 0) // 防止 data[0] 跟 data[-1] 做比較
            {
                break;
            }
            
            compare_count++;

            for(int j=0;j<10;j++)
            {
                if(current_t==j || current_t-1==j)cout << "*"<< data[j] << ",";
                else cout << " "<< data[j] << ",";
            }
            cout << endl;
        }
    }//for

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