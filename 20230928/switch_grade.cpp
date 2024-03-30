#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your score:";
    int score; // 字串
    cin >> score; // 0~100

    switch (score/10) // 0~10
    {
        case 100: // 100
            cout << "Excellent" <<endl;
            break; // 跳離 switch 的控制
        case 9:
        case 8: // >= 80
            cout << "Nice" <<endl;
            break;
        case 7:
        case 6: // >= 60
            cout << "Good" <<endl;
            break;
        default: // < 60
            cout << "Oh NO" <<endl;
            break;
    }

    return 0;
}