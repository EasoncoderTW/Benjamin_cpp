#include <iostream>

using namespace std;

int main()
{   
    int n;
    //cout << "How many number you want to enter? ";
    cin >> n;
    int current_number;
    int max_number = 0; // 比較的初始化
    int min_number = 100; // 比較的初始化
    int total_score = 0;

    for(int i = 1;i<=n;i++)
    {
        //cout << "Enter number " << i <<":";
        cin >> current_number;
        total_score += current_number;
        if(current_number > max_number)
        {
            max_number = current_number;
        }
        if(current_number < min_number)
        {
            min_number = current_number;
        }
        //cout << "[Inspect] max_number = " << max_number << endl;
    }

    cout << "Found max number = "<< max_number << endl;
    cout << "Found min number = "<< min_number << endl;
    cout << "Avarage score = "<< (float)total_score/(float)n << endl;
    return 0;
}