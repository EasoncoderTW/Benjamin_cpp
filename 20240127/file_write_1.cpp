#include <iostream>
#include <stdlib.h> 

using namespace std;

int main()
{
    FILE *file;

    file = fopen("D:\\CODE\\C++_Benjamin\\20240127\\data\\test1.txt","w");

    fputs("Hi, my name is Eason\n",file);

    fclose(file);

    return 0;
}