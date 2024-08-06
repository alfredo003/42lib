#include "./42lib.h"

int *ft_list_size(t_list *begin_list)
{
    if(begin_list == 0)
        return (0);
    return (1+ begin_list(begin_list->next));
}