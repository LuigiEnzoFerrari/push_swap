/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_all_to_stack_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:23:02 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:03:35 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	value_to_put_on_top(t_node *stack_a, int value)
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

void	preparing_stack_a(t_node **stack_a, t_node **stack_b)
{
	int	top_value;
	int	direction;

	top_value = value_to_put_on_top((*stack_a), (*stack_b)->data);
	direction = nearest_pivot((*stack_a), top_value);
	if (direction > 0)
		while ((*stack_a)->data != top_value)
			ra(stack_a);
	else
		while ((*stack_a)->data != top_value)
			rra(stack_a);
}

/*
** Return the quantity of sets of x numbers in a given size value. 
*/

size_t	how_many_sets_of_x(int size, int x)
{
	size_t	i;

	i = 0;
	while (size > 0)
	{
		i++;
		size -= x;
	}
	return (i);
}

/*
** Will insert to stack_a the remainder of modulo 20 from the size of stack_b 
*/

void	insert_remainder_of_20(t_node **stack_a, t_node **stack_b)
{
	int	remainder;

	remainder = lstSize((*stack_b)) % 20;
	while (remainder--)
	{
		preparing_stack_a(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

/*
** Will insert all the nodes from stack_b to stack_a while sorting stack_a,
** de nodes will be sent one by one in sets of 20 smallest number of the stack_a.
*/

void	insert_all_to_stack_a(t_node **stack_a, t_node **stack_b)
{
	size_t	twentys;
	int		min;

	insert_remainder_of_20(stack_a, stack_b);
	twentys = how_many_sets_of_x(lstSize((*stack_b)), 20);
	while (twentys--)
		send_chunks_of_20(stack_a, stack_b);
	min = nodeMin((*stack_a))->data;
	while ((*stack_a)->data != min)
		rra(stack_a);
}
