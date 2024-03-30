#include <iostream>

using namespace std;

enum LEVEL{
    Newcomer, // 0
    normal = 15,
    VIP, // 16
    VVIP,
};

struct custom_info
{
    string id;
    string name;
    int level;
};

int main()
{
    struct custom_info i;
    i.id = "#0000";
    i.name = "Amy";
    i.level = VIP;

    cout << i.level << endl;

    return 0;
}