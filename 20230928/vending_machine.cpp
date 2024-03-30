#include <iostream>

using namespace std;

int main()
{
/*
    1. Water : $10
    2. Soda : $20
    3. Tea : $15
*/
    cout << "This is a vending machine" <<endl;
    cout << "1. Water : $10"<< endl << "2. Soda : $20" << endl << "3. Tea : $15" << endl;
    cout << "-----------"<<endl;

    cout << "Enter the ID you want:";
    int want_id; // 字串
    cin >> want_id;

    /*if(want_id == 1){cout << "$10" <<endl;}
    else if(want_id == 2){cout << "$20" <<endl;}
    else if(want_id == 3){cout << "$15" <<endl;}
    else{cout << "Not sell" <<endl;}*/

    switch (want_id)
    {
        case 1: // jump tag
            cout << "$10" <<endl;
            break; // 跳離 switch 的控制
        case 2:
            cout << "$20" <<endl;
            break;
        case 3:
            cout << "$15" <<endl;
            break;
        default:
            cout << "Not sell" <<endl;
            break;
    }

    return 0;
}