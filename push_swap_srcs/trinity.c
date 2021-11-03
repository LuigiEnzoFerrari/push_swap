#include <push_swap.h>

int	trinity(t_node **stack_a)
{
	int	args[3];

	args[0] = (*stack_a)->data;
	args[1] = (*stack_a)->next->data;
	args[2] = (*stack_a)->next->next->data;

	if ((args[0] > args[1]) && (args[0] > args[2]))
	{
		if (args[1] > args[2])
		{
			sa(stack_a);
			rra(stack_a);
		}
		else
			ra(stack_a);
	}
	else if ((args[1] > args[2]))
	{
		if (args[0] > args[2])
			rra(stack_a);
		else
		{
			sa(stack_a);
			ra(stack_a);
		}
	}
	else if (args[0] > args[1])
		sa(stack_a);
	return (0);
}
