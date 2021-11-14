/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:32:30 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 16:47:22 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	next_equal_or_above(t_node *stack, int pivot, int direction)
{
	int	data;

	if (direction > 0)
	{
		while (stack != NULL)
		{
			if (stack->data >= pivot)
				return (stack->data);
			stack = stack->next;
		}
	}
	while (stack != NULL)
	{
		if (stack->data >= pivot)
			data = pivot;
		stack = stack->next;
	}
	return (data);
}

void	preparing_stack_ab(t_node **stack_a, t_node **stack_b, int pivot)
{
	int	direction_ab[2];
	int	next_ab[2];

	direction_ab[1] = nearest_pivot_or_above((*stack_b), pivot);
	next_ab[1] = next_equal_or_above((*stack_b), pivot, direction_ab[1]);
	next_ab[0] = value_to_put_on_top((*stack_a), next_ab[1]);
	direction_ab[0] = nearest_pivot((*stack_a), next_ab[0]);
	if (direction_ab[0] == 0 || direction_ab[1] == 0)
		return ;
	else if (direction_ab[0] > 0)
		while ((*stack_a)->data != next_ab[0]
			&& (*stack_b)->data != next_ab[1])
			rr(stack_a, stack_b);
}

void	preparing_stack_a(t_node **stack_a, int pivot)
{
	int	top_value;
	int	direction;

	top_value = value_to_put_on_top((*stack_a), pivot);
	direction = nearest_pivot((*stack_a), top_value);
	if (direction > 0)
		while ((*stack_a)->data != top_value)
			ra(stack_a);
	else
		while ((*stack_a)->data != top_value)
			rra(stack_a);
}
