#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[20] = "Hello,";
    char name[10] = "Eason";

    /* concat two strings */

    strcat(s1, name); // s1+name

    cout << s1 << endl;

    //----------------------------------

    char s2[] = "BANANA";
    char* r2;
    r2 = strchr(s2,'N');
    if(r2 == NULL)cout << "Not Found" << endl;
    else cout << "Found at " << (r2-s2) << endl;

    r2 = strrchr(s2,'N'); // reverse
    if(r2 == NULL)cout << "Not Found" << endl;
    else cout << "Found at " << (r2-s2) << endl;

    return 0;
}