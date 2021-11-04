#include <push_swap.h>

int	find_the_100nth(t_node *stack_a)
{
	size_t	one_hundred;
	t_node	*sorted_a;
	t_node	*ptr;
	int		data;

	one_hundred = 100;
	sorted_a = bubblesort(stack_a);
	ptr = sorted_a;
	while (--one_hundred && sorted_a->next != NULL)
		sorted_a = sorted_a->next;
	data = sorted_a->data;
	lstFree(ptr);
	return (data);
}

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

int	nearst_value(t_node *stack, int pivot)
{
	while (stack!= NULL)
	{
		if (stack->data <= pivot)
			return (stack->data);
		stack = stack->next;
	}
	return (stack->data);
}

int	put_the_next_on_top(t_node **stack_a, int next)
{
	while ((*stack_a)->data != next)
		ra(stack_a);
	return (0);
}

int	send_chunks_of_one_hundred(t_node **stack_a, t_node **stack_b, int pivot)
{
	int	next;

	while (has_numbers_left((*stack_a), pivot))
	{
		next = nearst_value((*stack_a), pivot);
		put_the_next_on_top(stack_a, next);
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

int	send_all_to_stack_b(t_node **stack_a, t_node **stack_b)
{
	size_t	one_hundreds;
	int		pivot;

	one_hundreds = how_many_one_hundreds(lstSize((*stack_a)));
	while (one_hundreds--)
	{
		pivot = find_the_100nth((*stack_a));
		send_chunks_of_one_hundred(stack_a, stack_b, pivot);
	}
	return (0);
}

int infinity(t_node **stack_a, t_node **stack_b)
{
	send_all_to_stack_b(stack_a, stack_b);
	return (0);
}
