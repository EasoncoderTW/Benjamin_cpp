#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct guest_info
{
    int  id;
    char name[16];
    char phone[16];
    int  credit_level;
};

int main()
{
    struct guest_info *info;
    // dump data
    FILE *file = fopen("D:\\CODE\\C++_Benjamin\\20240207\\data.dt","rb");

    int data_count;
    fread(&data_count, 1,sizeof(int), file);
    cout << "[Data count] "<< data_count << endl;
    info = (struct guest_info*)malloc(sizeof(struct guest_info)*data_count);

    fread(info, data_count, sizeof(struct guest_info), file);

    fclose(file);
    
    cout << "File Load finished." << endl;

    for(int i=0;i<data_count;i++)
    {
        /*cout << "[id] "<<info[i].id;
        cout << " [name] "<<info[i].name;
        cout << " [phone] "<<info[i].phone;
        cout << " [credit level] "<<info[i].credit_level;
        cout << endl;*/
        printf("[id] %5d ",info[i].id);
        printf("[name] %8s ",info[i].name);
        printf("[phone] %10s ",info[i].phone);
        printf("[credit level] %5d\n",info[i].credit_level);
    }

    return 0;
}