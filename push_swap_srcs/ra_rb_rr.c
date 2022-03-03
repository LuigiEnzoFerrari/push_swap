/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:45:11 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 11:54:45 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/*
** Puts the first node of the stack_a as the last node of it.
*/

void	ra(t_node **stack_a)
{
	if (rotate(stack_a))
		return ;
	write(STDOUT_FILENO, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	if (rotate(stack_b))
		return ;
	write(STDOUT_FILENO, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(STDOUT_FILENO, "rr\n", 3);
}
