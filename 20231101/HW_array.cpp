#include <iostream>

using namespace std;

int main()
{
    int a[10] = {60,85,95,72,85,41,32,96,98,87};
    int pass_people_count = 0;
    float avarage_score;
    int score_max = 0;
    int score_min = 100;
    // 可自行新增變數
    int score_sum = 0;

    /* 計算，統計 */ 
    for(int i = 1;i<10;i++) // scan 歷遍
    {
        if(a[i]>score_max)score_max = a[i];
        if(a[i]<score_min)score_min = a[i];
        score_sum += a[i]; // score_sum = score_sum + a[i];
    }
    /* 輸出 */ 
    cout << "Highest score = " << score_max << endl;
    cout << "Lowest score = " << score_min << endl;
    cout << "Average score = " << (float)score_sum/10 << endl;

    return 0;
}