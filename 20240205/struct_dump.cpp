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

struct guest_info gen_info(int id, const char *name, const char *phone, int level)
{
    struct guest_info g;
    g.id = id;
    strcpy(g.name, name);     // strcpy(目的,來源)
    strcpy(g.phone, phone);
    g.credit_level = level;
    return g;
}

int main()
{
    struct guest_info info[5];
    info[0] = gen_info(0,"Eason","0987654321",2);
    info[1] = gen_info(1,"Billy","0987651234",5);
    info[2] = gen_info(2,"Jack","0912345678",1);
    info[3] = gen_info(3,"Tom","0956781234",9);
    info[4] = gen_info(4,"Ben","0981736254",6);

    // dump data
    FILE *file = fopen("D:\\CODE\\C++_Benjamin\\20240205\\data.dt","wb");

    int data_count = 4;
    fwrite(&data_count, 1,sizeof(int), file);
    fwrite(info, data_count, sizeof(struct guest_info), file);

    fclose(file);
    
    cout << "File Dump finished." << endl;

    return 0;
}