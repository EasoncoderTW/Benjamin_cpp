#include <iostream>
#include <fstream> // 檔案串流

using namespace std;

int main()
{
    ofstream file; // out file stream
    string filepath = "D:\\CODE\\C++_Benjamin\\20240205\\test.txt";
    file.open(filepath,ios::out); // "w"

    file << "This is a test for cpp file write." << endl;

    file.close();

    ifstream infile; // input file stream (for read)
    infile.open(filepath,ios::in);
    string s_Read;
    while(infile >> s_Read)
    {
        cout << "Read from file : " << s_Read << endl;
    }

    return 0;
}