#include <iostream>

using namespace std;

int main()
{
    float height = 176.9;
    cout << "[Height] "<< height << endl;

    float pi = 3.1415926;
    printf("[pi] %.9f\n",pi);

    double pi_2 = 3.1415926; // 雙精度(多一倍的儲存空間)
    printf("[pi] %.9lf\n",pi_2);

    return 0;
}