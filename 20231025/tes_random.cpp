#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int answer;
    int c = 0;
    
    for(int i = 0;i<10;i++)
    {
        answer = -1; 
        c = 0;
        while(answer < 0 || answer >100)
        {
            //answer = rand();
            answer = rand()%101; //(0~100)
            c++;
        }
        cout << "Count = " << c << endl;
    }

    return 0;
}