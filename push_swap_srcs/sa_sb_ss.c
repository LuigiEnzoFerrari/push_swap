/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:14:58 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 11:55:46 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sa(t_node **stack)
{
	if (swap(stack))
		return ;
	write(STDOUT_FILENO, "sa\n", 3);
}

void	sb(t_node **stack)
{
	if (swap(stack))
		return ;
	write(STDOUT_FILENO, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(STDOUT_FILENO, "ss\n", 3);
}
