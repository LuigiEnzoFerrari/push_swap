/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:14:58 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/31 11:51:20 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sa(t_node **stack)
{
	if (swap(stack))
		return ;
	ft_putstr("sa ");
}

void	sb(t_node **stack)
{
	if (swap(stack))
		return ;
	ft_putstr("sb ");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	if (isNextNodeEmpty(*stack_a) || isNextNodeEmpty(*stack_b))
		return ;
	swap(stack_a);
	swap(stack_b);
	ft_putstr("ss ");
}
