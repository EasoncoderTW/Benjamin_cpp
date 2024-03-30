#include <stdio.h>

int main()
{
    int a = 10;
    int b;
    b = a + 20;

    printf("a= %d, b= %d\n",a,b);
    a = 20;
    printf("a= %d, b= %d\n",a,b);
    b = b + 5; // b(new status) = b(old status) + 5
    printf("a= %d, b= %d\n",a,b);
    a++; //a = a+1; 
    printf("a= %d, b= %d\n",a,b);

    // 關係運算
    int reuslt = 12 < 35;
    printf("12 > 35 ? %d\n",reuslt);

    // 邏輯運算
    int a_age = 18;
    int b_age = 16;
    int result = (a_age >= 18) && (b_age >= 18);
    printf("Both have Voting rights ? %d\n",result);
    return 0;
}