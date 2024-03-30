#include <iostream>

using namespace std;

void add(int a,int b, int c)
{
    c = a+b;
    cout << "[add] a = "<<a<<" ,b = "<<b<<" ,c = "<<c <<endl;
}

void add_ref(int a,int b, int* ans_addr) // call by referance (address)
{
    (*ans_addr) = a+b;
    cout << "[add] a = "<<a<<" ,b = "<<b<<" ,(*ans_addr) = "<<(*ans_addr) <<endl;
}

int main() // 程式的起始點
{
    int a = 10;
    int b = 20;
    int c = 0;
    add(a,b,c);
    cout << "[main] a = "<<a<<" ,b = "<<b<<" ,c = "<<c <<endl;

    add_ref(a,b,&c);
    cout << "[main] a = "<<a<<" ,b = "<<b<<" ,c = "<<c <<endl;
    return 0;
}