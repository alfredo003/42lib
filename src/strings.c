#include "42lib.h"

char *rostring(char *str)
{
	char *word_start;
	char *word_end;
	char *res = (char *)malloc(char);
	
	while(*str == ' ' || *str == '\t')
		str++;
	word_start = str;
	while(*str && *str != ' ' && *str != '\t')
		str++;
	word_end = str;
	while(*str == ' ' || *str == '\t')
		str++;
	if(*str)
	{
		while(*str)
		{
			if(*str == ' ' || *str == '\t')
			{
				while(*str == ' ' || *str == '\t')
					str++;
				if(*str)
					write(1," ",1);
			}
		}
		write(1," ",1);
	}
}
void first_word(char *str, char *res)
{
    int i = 0;
    int len = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t')
            break;
        res[len] = str[i];
        len++;
        i++;
    }
    res[len] = '\0';
}

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
