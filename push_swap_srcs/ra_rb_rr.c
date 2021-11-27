#include <push_swap.h>

/*
** Rotate instructions, they put the first node of the given stacks
** in the last node of the list.
*/

void	ra(t_node **stack_a)
{
	if (rotate(stack_a))
		return ;
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	if (rotate(stack_b))
		return ;
	write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
