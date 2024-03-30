#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    FILE *file;
    char buffer[128];

    file = fopen("D:\\CODE\\C++_Benjamin\\20240127\\data\\test1.txt", "r");
    int c=0;
    while (!feof(file)) // 當還沒到檔案結尾
    {
        fgets(buffer, 128, file);
        cout << c << "->" << buffer;
        c++;
    }

    fclose(file);

    return 0;
}