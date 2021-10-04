/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:14:20 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/09/29 18:26:59 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (push(stack_a, stack_b))
		return ;
	ft_putstr("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (push(stack_b, stack_a))
		return ;
	ft_putstr("pb\n");
}
