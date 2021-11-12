/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 07:45:06 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/12 12:09:45 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	apply_all(t_node **stack_a, t_node **stack_b,
	char instruction, int (*f)(t_node **))
{
	if (instruction == 'a')
		f(stack_a);
	else if (instruction == 'b')
		f(stack_b);
	else
	{
		f(stack_a);
		f(stack_b);
	}
}

void	apply_push(t_node **stack_a, t_node **stack_b,
	char instruction, int (*f)(t_node **, t_node**))
{
	if (instruction == 'a')
		f(stack_a, stack_b);
	else
		f(stack_b, stack_a);
}

void	apply_instructions(t_node **stack_a, t_node **stack_b,
	char *instruction)
{
	if (instruction[0] == 'p')
		apply_push(stack_a, stack_b, instruction[1], &push);
	else if (instruction[0] == 's')
		apply_all(stack_a, stack_b, instruction[1], &swap);
	else if (instruction[2] == '\0')
		apply_all(stack_a, stack_b, instruction[1], &rotate);
	else
		apply_all(stack_a, stack_b, instruction[2], &reverse_rotate);
}
