/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_all_to_stack_a_utils.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:50:11 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/10 10:26:56 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	put_the_next_on_top(t_node **stack_b, int pivot)
{
	void	(*rotating)(t_node **);
	int		direction;

	direction = nearest_pivot_or_above((*stack_b), pivot);
	if (direction > 0 || lstSize((*stack_b)) <= 100)
		rotating = &rb;
	else
		rotating = &rrb;
	while ((*stack_b)->data < pivot)
		rotating(stack_b);
}

/*
** Check if has values bigger or equal the pivot
*/

static int	has_numbers_left(t_node *stack, int pivot)
{
	while (stack != NULL)
	{
		if (stack->data >= pivot)
			return (1);
		stack = stack->next;
	}
	return (0);
}

/*
** Return the 20th number of a sorted list as reference.
*/

int	find_the_xth(t_node *stack, size_t x)
{
	t_node	*sorted;
	t_node	*ptr;
	int		data;

	sorted = bubblesort_reverse(stack);
	ptr = sorted;
	while (--x && sorted != NULL)
		sorted = sorted->next;
	data = sorted->data;
	lstFree(ptr);
	return (data);
}

/*
** Insert nodes from the stack_a to stack_b in chucks of 20
*/

void	send_chunks_of_20(t_node **stack_a, t_node **stack_b)
{
	int	x;
	int	pivot;

	x = 20;
	pivot = find_the_xth((*stack_b), 20);
	while (has_numbers_left((*stack_b), pivot))
	{
		put_the_next_on_top(stack_b, pivot);
		preparing_stack_a(stack_a, (*stack_b)->data);
		pa(stack_a, stack_b);
	}
}
