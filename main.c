#include "Header.h"
#include <stdio.h>
int main(void)
{
    int a= 10;
    int b= 5;

    printf("%d\n",add(a,b));
    printf("%d\n",sub(a,b));
    printf("%d\n",mul(a,b));
    printf("%d\n",div(a,b));
    printf("%d\n",power(a,b));
    return 0;
}
