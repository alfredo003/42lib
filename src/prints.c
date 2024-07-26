#include "42lib.h"

void put_nbr(int num)
{
    if(num >= 10)
        put_nbr(num/10);
    char digit = num % 10 + '0';
    write(1,&digit,1);
}