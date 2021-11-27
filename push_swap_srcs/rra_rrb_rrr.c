#include <push_swap.h>

/*
** Reverse Rotate instructions
** they put the last node of the given stacks
** as the first node of the list.
*/

void	rra(t_node **stack_a)
{
	if (reverse_rotate(stack_a))
		return ;
	write(1,"rra\n", 4);
}

void	rrb(t_node **stack_a)
{
	if (reverse_rotate(stack_a))
		return ;
	write(1,"rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1,"rrr\n", 4);
}
