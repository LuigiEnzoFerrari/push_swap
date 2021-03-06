/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:14:20 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 11:54:16 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pa(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_b) == NULL)
		return ;
	push(stack_a, stack_b);
	write(STDOUT_FILENO, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a) == NULL)
		return ;
	push(stack_b, stack_a);
	write(STDOUT_FILENO, "pb\n", 3);
}
