#include <iostream>

using namespace std;


// CLI (Command-Line Interface) 命令列介面
int main(int argc, char *argv[])
{
    // ARGument Count : 參數數量
    // ARGument Value : 參數值(字串)

    /*for(int i = 0;i<argc;i++)
    {
        cout << argv[i] << endl;
    }*/

    if(argc != 3)
    {
        cout << "Error: Arguments number needs to be 2." << endl;
    }
    else
    {
        int n1 = stoi(argv[1]); // string to int
        int n2 = stoi(argv[2]); // string to int
        cout << n1+n2 << endl;
    }

    return 0;
}