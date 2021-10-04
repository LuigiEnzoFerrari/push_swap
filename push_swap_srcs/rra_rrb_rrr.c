/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:10:09 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/09/29 18:27:17 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	rra(t_node **stack_a)
{
	if (reverse_rotate(stack_a))
		return ;
	ft_putstr("rra\n");
}

void	rrb(t_node **stack_a)
{
	if (reverse_rotate(stack_a))
		return ;
	ft_putstr("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if (isNextNodeEmpty(*stack_a) || isNextNodeEmpty(*stack_b))
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr("rrr ");
}
