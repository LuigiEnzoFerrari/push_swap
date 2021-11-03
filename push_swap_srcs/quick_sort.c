#include <push_swap.h>

t_node	*less_then(t_node *lst, int pivot)
{
	
}

t_node	*quick_sort(t_node *lst)
{
	size_t	lst_size;
	int		pivot;

	lst_size = lstSize(lst);
	if (lst_size <= 1)
		return (lst);
	else if (lst_size == 2)
	{
		if (lst->data > lst->next->data)
			swap(&lst);
		return (lst);
	}
	pivot = lst->data;

}