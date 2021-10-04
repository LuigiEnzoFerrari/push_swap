/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:45:11 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/09/29 18:27:09 by lenzo-pe         ###   ########.fr       */
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
	ft_putstr("ra\n");
}

void	rb(t_node **stack_b)
{
	if (rotate(stack_b))
		return ;
	ft_putstr("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	if (isNextNodeEmpty(*stack_a) || isNextNodeEmpty(*stack_b))
		return ;
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
