#include <push_swap.h>

int	find_smallest_value(t_node *stack_a)
{
	int	smallest_value;

	smallest_value = stack_a->data;
	while (stack_a != NULL)
	{
		if (stack_a->data < smallest_value)
			smallest_value = stack_a->data;
		stack_a = stack_a->next;
	}
	return (smallest_value);
}

int find_value_position(t_node *lst, int value)
{

	return (0);
}

int put_the_smallest_value_on_top(t_node **stack_a)
{
	int		smallest_value;
	size_t	smallest_position;

	smallest_value = find_smallest_value((*stack_a));
	smallest_position = find_value_position(((*stack_a)), smallest_value);
	return (0);
}

int	send_chucks_of_one_hundred(t_node **stack_a, t_node **stack_b)
{
	size_t	lst_size;
	size_t	one_hundred;

	lst_size = lstSize((*stack_a));
	put_the_smallest_value_on_top(stack_a);
	while (lst_size)
	{
		one_hundred = 100;
		while (one_hundred--)
		{
			pb(stack_a, stack_b);
		}
		lst_size /= 100;
	}
	return (0);
}

int infinity(t_node **stack_a, t_node **stack_b)
{

	send_chucks_of_one_hundred(stack_a, stack_b);
	return (0);
}
