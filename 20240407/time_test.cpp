#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t t = time(0);
    struct tm *tm_now = localtime(&t);

    char *s = ctime(&t);
    cout << s << endl;
    cout << tm_now->tm_year+1900 << "." << tm_now->tm_mon+1 << "." << tm_now->tm_mday << endl;

    return 0;
}