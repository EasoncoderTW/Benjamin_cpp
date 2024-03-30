#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    printf("value of a = %d\n",a);
    printf("address of a = %d\n",&a); // &a 取得 a 的記憶體位址
    printf("value of b = %d\n",b);
    printf("address of b = %d\n",&b); // &b 取得 b 的記憶體位址
    return 0;
}