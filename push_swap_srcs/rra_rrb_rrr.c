/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:10:09 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 11:56:07 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	rra(t_node **stack_a)
{
	if (reverse_rotate(stack_a))
		return ;
	write(STDOUT_FILENO, "rra\n", 4);
}

void	rrb(t_node **stack_a)
{
	if (reverse_rotate(stack_a))
		return ;
	write(STDOUT_FILENO, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(STDOUT_FILENO, "rrr\n", 4);
}
