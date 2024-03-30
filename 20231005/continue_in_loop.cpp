#include <iostream>

using namespace std;

int main()
{
    // 0~10 分數 -1 缺考
    int score;
    int total_score = 0;
    int quiz_time = 0;
    for(int i = 0;i<15;i++)
    { 
        cout << "[test "<< i <<"] ";
        cin >> score;

        if(score == -1) continue;

        total_score += score;
        quiz_time++;
    }

    //if(total_score > 100) total_score = 100;

    cout << "Total score = "<< total_score << endl;
    float total_score_f = total_score;
    float quiz_time_f = quiz_time;
    cout << "Average score = "<< total_score_f/quiz_time_f << endl;

    return 0;
}