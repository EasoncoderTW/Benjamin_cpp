#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    FILE *file = fopen("D:\\CODE\\C++_Benjamin\\20240129\\test.txt","w");
    
    char name[] = "Eason";
    char phone[] = "0987654321";

    fprintf(file,"[%s] %s\n",name,phone); // vs. printf(往螢幕輸出), fprintf(往檔案輸出)

    fclose(file);
    
    return 0;
}