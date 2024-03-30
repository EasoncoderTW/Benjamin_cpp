#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int playing = 1;
    int range_min = 0;
    int range_max = 100;
    int guess_num;
    int answer = rand()%101;

    int chance = 5;

    while(playing)
    {
        // 請玩家猜一個數字
        printf("Please guess a number from %d to %d: ",range_min,range_max);
        cin >> guess_num;
        // 檢查輸入的數值是否正常
        if(guess_num < range_min || guess_num > range_max)
        {
            cout << "(Value Error)Try again" << endl;
            continue;
        }

        chance--;
        // 猜中:結束遊戲
        if(guess_num == answer)
        {
            cout << "Bingo !!!" << endl;
            playing = 0; 
            // break;
        }
        else
        {
            // 為猜中:縮小範圍
            if(guess_num > answer)
            {
                range_max = guess_num-1;
            }
            else
            {
                range_min = guess_num+1;
            }
        }

        if(chance <= 0 && playing == 1)
        {
            cout << "You Lose~" << endl;
            playing = 0; // false(0) vs true(1)
        }
    } // while

    return 0;
}