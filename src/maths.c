#include "../42lib.h"

void fprime(int num)
{
    int i = 0;
    if(num <= 1)
        printf("1");
    while(num >= ++i)
    {
        if(num % i == 0)
        {
            printf("%d",i);
            if(i == num)
                break;
            printf("*");
            num /= i;
            i = 1;
        }
    }
}