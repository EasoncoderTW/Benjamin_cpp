/* 7-2 Example2 */
/* demo do-while loop using*/
#include "stdio.h"
int main()
{
    int i = 21;
    do
    {
        i++;
        printf("%d \n", i );
    }
    while( i < 21);

    printf("--------\n");

    i = 21;
    while( i < 21)
    {
        i++;
        printf("%d \n", i );
    }

    return 0;
}