#include <push_swap.h>

/*
** Swap instructions, they swich the first and the second node,
** of the given stacks.
*/

void	sa(t_node **stack)
{
	if (swap(stack))
		return ;
	write(1, "sa\n", 3);
}

void	sb(t_node **stack)
{
	if (swap(stack))
		return ;
	write(1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
