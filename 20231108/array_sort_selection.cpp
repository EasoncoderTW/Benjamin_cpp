#include <iostream>

using namespace std;

int main()
{
    int data[10] = {1,2,3,4,5,6,7,8,9,10}; // worst case
    //int data[10] = {40,60,50,100,30,90,10,70,80,20};
    int tmp; // temp
    int pass = 0;
    int max_idx;

    int compare_count = 0;
    int swap_count = 0;

    // selection
    for(int sorted_count = 0;sorted_count < 10;sorted_count++) // 所有的數字要排一遍
    {
        max_idx = sorted_count;
        for(int check_t = sorted_count;check_t < 10;check_t++) // 目前檢查的地方
        {
            compare_count++;
            if(data[check_t] > data[max_idx])
            {
                max_idx = check_t;
            }
        }

        compare_count++;
        if(max_idx != sorted_count)
        {
            swap_count++;
            //swap
            tmp = data[max_idx];
            data[max_idx] = data[sorted_count];
            data[sorted_count] = tmp;
        }

        for(int j=0;j<10;j++)
        {
            if(sorted_count==j || max_idx-1==j)cout << "*"<< data[j] << ",";
            else cout << " "<< data[j] << ",";
        }
        cout << endl;
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