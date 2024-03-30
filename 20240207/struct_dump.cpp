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
    struct guest_info info[10];
    info[0] = gen_info(0,"Eason","0987654321",2);
    info[1] = gen_info(1,"Billy","0987651234",5);
    info[2] = gen_info(2,"Jack","0912345678",1);
    info[3] = gen_info(3,"Tom","0956781234",3);
    info[4] = gen_info(4,"Ben","0981736254",1);
    info[5] = gen_info(5,"John","0916541561",1);
    info[6] = gen_info(6,"Mark","0934387378",2);
    info[7] = gen_info(7,"Cindy","0937383783",4);
    info[8] = gen_info(8,"Sandy","0937375351",5);
    info[9] = gen_info(9,"Amy","0978567343",3);

    // dump data
    FILE *file = fopen("D:\\CODE\\C++_Benjamin\\20240207\\data.dt","wb");

    int data_count = 8;
    fwrite(&data_count, 1,sizeof(int), file);
    fwrite(info, 10, sizeof(struct guest_info), file);

    fclose(file);
    
    cout << "File Dump finished." << endl;

    return 0;
}