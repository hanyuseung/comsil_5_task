#include"Header.h"

int div(int a, int b){
    if (b== 0)
    {
        printf("Zerodivision error\n");
        return -1;
    }
    else
        return (a/b);
}

