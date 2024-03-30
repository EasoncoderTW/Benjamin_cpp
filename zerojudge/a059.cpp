#include <iostream>
#include <cmath>

using namespace std;

int full_squared(int a,int b)
{
    int start_num = (int)sqrt(a);
    if(start_num*start_num < a)
    {
        start_num++;
    }
    int stop_num = (int)sqrt(b);
    int s = 0;
    for(int i=start_num;i<=stop_num;i++)
    {
        s += i*i;
    }
    return s;
}

int main()
{
    int n,a,b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
       cin >> a >> b;
       cout << "Case "<<i+1<<": "<< full_squared(a,b) << endl;
    }
    return 0;
}