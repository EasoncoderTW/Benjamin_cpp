#include <iostream>

using namespace std;

int main()
{
     /*特例: data都是自然數，可以找一個例外數字當作結尾*/
    int data[20] = {0}; // all set to zero
    
    for(int i = 0;i<19;i++)
    {
        cin >> data[i];
        if(data[i] < 0){
            break;
        }
    }
    data[19] = -1;

    // print
    cout << "Check data: "<<endl;
    for(int i = 0;data[i]>=0;i++)
    {
        cout << data[i] << ", ";
    }
    cout << endl;

    return 0;
}