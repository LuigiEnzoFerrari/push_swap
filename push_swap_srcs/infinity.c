#include <push_swap.h>

void	preparing_stack_a(t_node **stack_a, t_node **stack_b)
{
	
	return (0);
}

void	send_chunks_of_x(t_node **stack_a, t_node **stack_b, size_t x)
{
	int	direction;

	direction = 0;
	while (x--)
	{
		preparing_stack_a(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

void	insert_all_to_stack_a(t_node **stack_a, t_node **stack_b)
{
	size_t	x;

	x = 20;
	send_chunks_of_x(stack_a, stack_b, x);
}

int	infinity(t_node **stack_a, t_node **stack_b)
{
	send_all_to_stack_b(stack_a, stack_b);
	if ((*stack_a)->data > (*stack_a)->next->data)
		ra(stack_a);
	insert_all_to_stack_a(stack_a, stack_b);
	return (0);
}
