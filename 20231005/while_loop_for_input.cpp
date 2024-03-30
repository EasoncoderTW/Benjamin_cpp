#include <iostream>

using namespace std;

int main()
{
    int guess_number = -1;
    int answer = 5;

    while(guess_number != answer) // loop condition
    {
        // loop body
        cout << "Guess a number(1~10) : ";
        cin >> guess_number;
    }

    cout << "Bingo!!!" << endl;

    return 0;
}