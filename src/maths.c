#include "../42lib.h"

int add_prime_sum(int num)
{
    int sum = 0;
    while(num > 0)
    {
        if(is_prime(num))
            sum += num;
        num--;
    }
    return(sum);
}

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