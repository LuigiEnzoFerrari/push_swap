#include <push_swap.h>

t_node	*nodeMin(t_node *lst)
{
	t_node	*ptr;

	ptr = lst;
	while (lst != NULL)
	{
		if (lst->data < ptr->data)
			ptr = lst;
		lst = lst->next;
	}
	return (ptr);
}

int		where_to_put(t_node *stack_a, int value)
{
	t_node	*cpy;
	int		min;
	int		data;

	cpy = lstDuplicate(stack_a);
	min = nodeMin(stack_a)->data;
	while (cpy->data != min)
		reverse_rotate(&cpy);
	while (value > cpy->data)
		rotate(&cpy);
	data = cpy->data;
	lstFree(cpy);
	return (data);
}

int	nearst_direction(t_node *stack, int pivot)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (stack->data != pivot)
	{
		stack = stack->next;
		i++;
	}
	while (stack != NULL)
	{
		stack = stack->next;
		j++;
	}
	if (i <= j)
		return (i);
	return (-j);
}


int	nearst_direction_two(t_node *stack, int pivot)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (stack != NULL)
	{
		if (stack->data >= pivot)
			break ;
		stack = stack->next;
		i++;
	}
	while (stack != NULL)
	{
		if (stack->data >= pivot)
			j = 0;
		stack = stack->next;
		j++;
	}
	if (i <= j)
		return (i);
	return (-j);
}

void	preparing_stack_a(t_node **stack_a, t_node **stack_b)
{
	int	top_value;
	int	direction;

	top_value = where_to_put((*stack_a), (*stack_b)->data);
	direction = nearst_direction((*stack_a), top_value);
	if (direction > 0)
		while ((*stack_a)->data != top_value)
			ra(stack_a);
	else
		while ((*stack_a)->data != top_value)
			rra(stack_a);
}


void	send_remainder(t_node **stack_a, t_node **stack_b)
{
	int	remainder;

	remainder = lstSize((*stack_b)) % 20;
	while (remainder--)
	{
		preparing_stack_a(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

int	find_the_20nth(t_node *stack_b)
{
	size_t	twenty;
	t_node	*sorted_b;
	t_node	*ptr;
	int		data;

	twenty = 20;
	sorted_b = bubblesort_reverse(stack_b);
	ptr = sorted_b;
	while (--twenty && sorted_b != NULL)
		sorted_b = sorted_b->next;
	data = sorted_b->data;
	lstFree(ptr);
	return (data);
}

static int	put_the_next_on_top(t_node **stack_b, int pivot)
{
	void	(*rotating)(t_node **);
	int		direction;

	direction = nearst_direction_two((*stack_b), pivot);
	if (direction > 0)
		rotating = &rb;
	else
		rotating = &rrb;
	while ((*stack_b)->data < pivot)
		rotating(stack_b);
	return (0);
}

static int	has_numbers_left(t_node *stack, int pivot)
{
	while (stack!= NULL)
	{
		if (stack->data >= pivot)
			return (1);
		stack = stack->next;
	}
	return (0);
}


void	send_chunks_of_20(t_node **stack_a, t_node **stack_b)
{
	int	x;
	int	pivot;

	x = 20;
	pivot = find_the_20nth((*stack_b));
	ft_putnbr(pivot);
	while (has_numbers_left((*stack_b), pivot))
	{
		put_the_next_on_top(stack_b, pivot);
		preparing_stack_a(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

size_t	how_many_one_twenty(int size)
{
	size_t	i;

	i = 0;
	while (size > 0)
	{
		i++;
		size -= 20;
	}
	return (i);
}

void	insert_all_to_stack_a(t_node **stack_a, t_node **stack_b)
{
	size_t	twentys;
	int		min;

	send_remainder(stack_a, stack_b);
	twentys = how_many_one_twenty(lstSize((*stack_b)));
	while (twentys--)
		send_chunks_of_20(stack_a, stack_b);
	min = nodeMin((*stack_a))->data;
	while ((*stack_a)->data != min)
		rra(stack_a);
}

int	infinity(t_node **stack_a, t_node **stack_b)
{
	send_all_to_stack_b(stack_a, stack_b);
	if ((*stack_a)->data > (*stack_a)->next->data)
		ra(stack_a);
	insert_all_to_stack_a(stack_a, stack_b);
	return (0);
}
