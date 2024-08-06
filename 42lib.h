#ifndef 42LIB_H
#define 42LIB_H

#include<unistd.h>
#include<stdio.h>

typedef struct s_list
{
    struct t_list *next;
    void *data;
}   t_list;

//String
int ft_strlen(char *str);
char *epur_str(char *str);

// math


// Bits
void print_bits(unsigned char octet);
unsigned char reverse_bits(unsigned char octet);
unsigned char	swap_bits(unsigned char octet);

//List
int *ft_list_size(t_list *begin_list);


#endif