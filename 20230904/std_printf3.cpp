#include <stdio.h> // standard input output library (標準輸入輸出函式庫)

int main()
{
    int score = 99;
    int index = 25;
    int rank = 3;
    printf("[index] [%03d] [score] [%3d] [rank] [%+04d] \n",index,score,rank);
    // %3d : 固定(至少)三位數的整數
    // %03d : 固定(至少)三位數的整數, 不滿三位數則前面補0

    return 0;
}

