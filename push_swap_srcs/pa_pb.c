#include <push_swap.h>

/*
** Push instructions, they push the first node of a stack
** on top another given stack.
*/

void	pa(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_b) == NULL)
		return ;
	push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a) == NULL)
		return ;
	push(stack_b, stack_a);
	write(1, "pb\n", 3);
}
