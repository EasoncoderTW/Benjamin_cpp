/* 8-3 Example1 */
/* demo #if #else #endif */
#include "stdio.h"
#define debug 0
#define show 0
int main()
{
#if show == 1
    printf("Show Mode \n");
    #if debug == 1
        printf("Debug Mode \n");
    #endif
#endif
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
#if show == 1
    printf("The number is %d \n", n);
    #if debug == 1
        printf("%d \n", n);
    #endif
#endif
    return 0;
}
