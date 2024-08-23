#include "./42lib.h"

int *ft_list_size(t_list *begin_list)
{
    if(begin_list == 0)
        return (0);
    return (1+ begin_list(begin_list->next));
}
void ft_foreach_list(t_list *begin_list,void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data)
		begin_list = begin_list->next;
	}
}
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	
	t_list *tmp;
	
	tmp =lst;
	
	while(lst != NULL && lst->next != NULL)
	{
		if((*cmp)(lst->data,lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return (tmp);
}
