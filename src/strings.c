#include "42lib.h"

int ft_strlen(char *str)
{
    int i =0;
    while(str[i] != '\0')
        i++;
    return (i);
}

char *epur_str(char *str)
{
    int i = 0;
    int flag =0;
    int len = ft_strlen(str);
    char *res = (char *)malloc(sizeof(char) * (len+1));

    while(*str == ' ' || *str == '\t')
        str++;
    while(*str)
    {
        if(*str == ' ' || *str == '\t')
            flag=1;
        else
        {
            if(flag)
            {
                res[i] =' ';
                i++;
            }
            res[i] = *str;
            i++;
            flag=0;
        }
        str++;
    }
    res[i] = '\0';
    return (res);
}