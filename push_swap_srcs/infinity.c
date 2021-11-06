#include <push_swap.h>

/*
** Return the 100th smaller number on a given linked list,
** if the list has 102 numbers or less return the antepenultimate.
*/

int	find_the_100nth(t_node *stack_a)
{
	size_t	one_hundred;
	t_node	*sorted_a;
	t_node	*ptr;
	int		data;

	one_hundred = 100;
	sorted_a = bubblesort(stack_a);
	ptr = sorted_a;
	while (--one_hundred && sorted_a->next->next->next != NULL)
		sorted_a = sorted_a->next;
	data = sorted_a->data;
	lstFree(ptr);
	return (data);
}
/*
** return 1 if the list still have a number smaller or equal the pivot o otherwise.
*/
int	has_numbers_left(t_node *stack, int pivot)
{
	while (stack!= NULL)
	{
		if (stack->data <= pivot)
			return (1);
		stack = stack->next;
	}
	return (0);
}

// int	nearst_direction(t_node *stack, int pivot)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while (stack != NULL)
// 	{
// 		if (stack->data <= pivot)
// 			break ;
// 		stack = stack->next;
// 		i++;
// 	}
// 	while (stack != NULL)
// 	{
// 		if (stack->data <= pivot)
// 			j = 0;
// 		stack = stack->next;
// 		j++;
// 	}
// 	if (i <= j)
// 		return (i);
// 	return (-j);
// }

/*
** Rotates the stack until a number smaller or equal the pivot are on top
*/
int	put_the_next_on_top(t_node **stack_a, int pivot)
{
	while ((*stack_a)->data > pivot)
		ra(stack_a);
	return (0);
}

/*
** Send chuncks of one hundred numbers less or equal the pivot from stack_a to stack_b.
*/

int	send_chunks_of_one_hundred(t_node **stack_a, t_node **stack_b, int pivot)
{
	while (has_numbers_left((*stack_a), pivot))
	{
		put_the_next_on_top(stack_a, pivot);
		pb(stack_a, stack_b);
	}
	return (0);
}

size_t	how_many_one_hundreds(int size)
{
	size_t	i;

	i = 0;
	while (size > 0)
	{
		i++;
		size -= 100;
	}
	return (i);
}

/*
** Divides the stack_a on chuncks of one hundred 
** and send all from stack_a to stack_b
*/

int	send_all_to_stack_b(t_node **stack_a, t_node **stack_b)
{
	size_t	one_hundreds;
	int		pivot;

	one_hundreds = how_many_one_hundreds(lstSize((*stack_a)));
	while (one_hundreds--)
	{
		pivot = find_the_100nth((*stack_a));
		ft_putstr("pivot");
		ft_putnbr(pivot);
		send_chunks_of_one_hundred(stack_a, stack_b, pivot);
	}
	return (0);
}

int infinity(t_node **stack_a, t_node **stack_b)
{
	send_all_to_stack_b(stack_a, stack_b);
	
	return (0);
}
