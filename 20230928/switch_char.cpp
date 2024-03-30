#include <iostream>

using namespace std;

int main()
{
    char c;
    int score;
    cin >> c >> score;  // A 90

    if(score >= 60){cout << "Score PASS" <<endl;}
    else{cout  <<"score FAIL"<<endl;}

    switch (c) 
    {
        case 'A':
            cout << "Excellent" <<endl;
            break; 
        case 'B':
            cout << "Nice" <<endl;
            break;
        case 'C': 
            cout << "Good" <<endl;
            break;
        case 'F': 
            cout << "Oh No" <<endl;
            break;
        default: 
            cout << "Wrong Input" <<endl;
            break;
    }

    return 0;
}