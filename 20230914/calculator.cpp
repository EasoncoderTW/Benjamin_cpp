#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    //printf("a = %d\n",a);
    //printf("b = %d\n",b);

    int add_ans = a+b;
    int sub_ans = a-b;
    int mul_ans = a*b;
    int div_ans = a/b;

    printf("%d + %d = %d\n",a,b,add_ans);
    printf("%d - %d = %d\n",a,b,sub_ans);
    printf("%d * %d = %d\n",a,b,mul_ans);
    printf("%d / %d = %d\n",a,b,div_ans);

    return 0;
}