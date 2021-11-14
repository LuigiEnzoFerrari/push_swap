/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_all_to_stack_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:22:59 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 18:55:22 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/*
** Return the 100th smaller number on a given linked list,
** if the list has 102 numbers or less return the antepenultimate.
*/

int	find_the_100nth(t_node *stack_a)
{
	size_t	one_hundred;
	t_node	*sorted_a;
	t_node	*ptr;
	int		data;

	one_hundred = 100;
	sorted_a = bubblesort(stack_a);
	ptr = sorted_a;
	while (--one_hundred && sorted_a->next->next->next != NULL)
		sorted_a = sorted_a->next;
	data = sorted_a->data;
	lst_free(ptr);
	return (data);
}

/*
** return 1 if the list still have a number smaller or equal the pivot
** 0 otherwise.
*/

static int	has_numbers_left_100(t_node *stack, int pivot)
{
	while (stack != NULL)
	{
		if (stack->data <= pivot)
			return (1);
		stack = stack->next;
	}
	return (0);
}

/*
** Rotates the stack until a number smaller or equal the pivot are on top
*/

static int	put_the_next_on_top_a(t_node **stack_a, int pivot)
{
	while ((*stack_a)->data > pivot)
		ra(stack_a);
	return (0);
}

/*
** Send chuncks of one hundred numbers less or equal the pivot
** from stack_a to stack_b.
*/

int	send_chunks_of_one_hundred(t_node **stack_a, t_node **stack_b, int pivot)
{
	while (has_numbers_left_100((*stack_a), pivot))
	{
		put_the_next_on_top_a(stack_a, pivot);
		pb(stack_a, stack_b);
	}
	return (0);
}

/*
** Divides the stack_a on chuncks of one hundred 
** and send all except the 2 largest values from stack_a to stack_b
*/

int	send_all_to_stack_b(t_node **stack_a, t_node **stack_b)
{
	int		pivot;

	while (lst_size(*stack_a) > 2)
	{
		pivot = find_the_100nth((*stack_a));
		send_chunks_of_one_hundred(stack_a, stack_b, pivot);
	}
	return (0);
}
