#include <iostream>

using namespace std;

int main()
{
    int score;
    int total_score = 0;
    for(int i = 0;i<15;i++)
    { 
        cout << "[test "<< i <<"] ";
        cin >> score;
        total_score += score;
        if(total_score>=100)
        {
            total_score = 100;
            break; // "break" only break the loop (Abort)
        }
    }

    //if(total_score > 100) total_score = 100;

    cout << "Total score = "<< total_score << endl;

    return 0;
}