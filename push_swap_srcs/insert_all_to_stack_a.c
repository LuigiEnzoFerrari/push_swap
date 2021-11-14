/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_all_to_stack_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:23:02 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:13:44 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/*
** Return the value of the given stack to put on top to receive
** a specific value.
*/

int	value_to_put_on_top(t_node *stack_a, int value)
{
	t_node	*cpy;
	int		min;
	int		data;

	cpy = lst_duplicate(stack_a);
	min = node_min(stack_a)->data;
	while (cpy->data != min)
		reverse_rotate(&cpy);
	while (value > cpy->data)
		rotate(&cpy);
	data = cpy->data;
	lst_free(cpy);
	return (data);
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
	int		remainder;
	int		pivot;
	size_t	size;

	size = lst_size((*stack_b));
	remainder = size % 20;
	if (remainder == 0)
		remainder = 20;
	pivot = find_the_xth((*stack_b), remainder);
	while (remainder--)
	{
		preparing_stack_ab(stack_a, stack_b, pivot);
		put_the_next_on_top(stack_b, pivot);
		preparing_stack_a(stack_a, (*stack_b)->data);
		pa(stack_a, stack_b);
	}
}

/*
** Insert nodes from the stack_a to stack_b in chucks of x numbers
*/

void	send_chunks_of_x(t_node **stack_a, t_node **stack_b, size_t x)
{
	int	pivot;

	pivot = find_the_xth((*stack_b), x);
	while (has_numbers_left((*stack_b), pivot))
	{
		preparing_stack_ab(stack_a, stack_b, pivot);
		put_the_next_on_top(stack_b, pivot);
		preparing_stack_a(stack_a, (*stack_b)->data);
		pa(stack_a, stack_b);
	}
}

/*
** Will insert all the nodes from stack_b to stack_a while sorting stack_a,
** de nodes will be sent one by one in sets of 20 smallest number of the stack_a.
*/

void	insert_all_to_stack_a(t_node **stack_a, t_node **stack_b)
{
	size_t	sets;
	int		min;

	insert_remainder_of_20(stack_a, stack_b);
	sets = how_many_sets_of_x(lst_size((*stack_b)), 20);
	while (sets-- > 5)
		send_chunks_of_x(stack_a, stack_b, 20);
	sets = how_many_sets_of_x(lst_size(*stack_b), 10);
	while (sets--)
		send_chunks_of_x(stack_a, stack_b, 10);
	min = node_min((*stack_a))->data;
	while ((*stack_a)->data != min)
		rra(stack_a);
}
