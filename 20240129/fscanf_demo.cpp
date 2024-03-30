#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    FILE *file = fopen("D:\\CODE\\C++_Benjamin\\20240129\\test.txt","r");
    
    char name[16];
    char phone[16];

    fscanf(file,"%s %s\n",name,phone); // vs. scanf(格式化輸入), fscanf(從檔案進行格式化輸入)

    fclose(file);

    cout << "Read from file:"<<endl;
    cout << "[name] " << name << endl;
    cout << "[phone] " << phone << endl;
    
    return 0;
}