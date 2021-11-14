/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infinity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:04:04 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 16:15:54 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	infinity(t_node **stack_a, t_node **stack_b)
{
	send_all_to_stack_b(stack_a, stack_b);
	if ((*stack_a)->data > (*stack_a)->next->data)
		ra(stack_a);
	insert_all_to_stack_a(stack_a, stack_b);
	return (0);
}
