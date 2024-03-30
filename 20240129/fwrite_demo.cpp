#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char name[16] = "Eason";
    char phone[16] = "0987654321";
    int id = 1563;
    int checknumber = 5;
    // fwrite -> binary
    FILE *file = fopen("D:\\CODE\\C++_Benjamin\\20240129\\data.tt","wb");
    
    fwrite(name, 16, sizeof(char), file); // dump
    fwrite(phone, 16, sizeof(char), file); // dump
    fwrite(&id, 1, sizeof(int), file); // dump
    fwrite(&checknumber, 1, sizeof(int), file); // dump

    fclose(file);
    cout << "file dump "<< endl;

    return 0;
}