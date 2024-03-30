#include <iostream>

using namespace std;

int main()
{
    char s[] = "This is a Computer class.";

    cout << s << endl;

    s[12] = 0; // '\0'
    cout << s << endl;

    char *s_ptr = &s[13];
    cout << s_ptr << endl;

    // warning. open the string
    char s2[] = "This is a Computer class.";
    s2[25] = 'a';
    cout << s2 << endl;

    return 0;
}