#include <iostream>

using namespace std;

int main()
{
    int data[20] = {0}; // all set to zero
    int n; // important
    cout << "How many data to key-in?" << endl;
    cin >> n;
    if(n > 20){
        cout << "Maximun is 20"<< endl;
        n = 20;
    }
    for(int i = 0;i<n;i++) // 0 ~ n-1
    {
        cin >> data[i];
    }

    // print
    cout << "Check data: "<<endl;
    for(int i = 0;i<n;i++)
    {
        cout << data[i] << ", ";
    }
    cout << endl;

    return 0;
}