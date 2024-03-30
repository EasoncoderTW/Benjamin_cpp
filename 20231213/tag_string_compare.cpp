#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char tag[] = "JPN";
    int tag_len = strlen(tag); // get string length

    char s[10];

    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        // compare fiest "three" charaters
        if(strncmp(s,tag,tag_len) == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

/*
7
ROC0001
JPN0032
ROC0045
AMC0966
ROC0002
ROC0012
JPN0256
*/