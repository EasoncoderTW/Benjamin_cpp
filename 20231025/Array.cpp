/* 10-1 Example1 */
/* demo array input and output*/
#include "stdio.h"
#define n 5
int main()
{
    int list[n];
    printf("Enter %d numbers. \n", n);
    for (int a = 0; a < n; a++)
    {
        printf("list[%d] = ", a);
        scanf("%d", &list[a]);
    }
    printf("\n");
    for (int a = 0; a < n; a++)
    {
        printf("list[%d] is %d \n", a, list[a]);
    }
    return 0;
}
