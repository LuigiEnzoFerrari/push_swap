/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trinity.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:50:41 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/10 06:47:43 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	list_to_array(t_node *lst, int *args)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		args[i] = lst->data;
		lst = lst->next;
		i++;
	}
}

static void	case_1(t_node **stack_a, int *args)
{
	if (args[1] > args[2])
	{
		sa(stack_a);
		rra(stack_a);
	}
	else
		ra(stack_a);
}

static void	case_2(t_node **stack_a, int *args)
{
	if (args[0] > args[2])
		rra(stack_a);
	else
	{
		sa(stack_a);
		ra(stack_a);
	}
}

int	trinity(t_node **stack_a)
{
	int	args[3];

	list_to_array((*stack_a), args);
	if ((args[0] > args[1]) && (args[0] > args[2]))
		case_1(stack_a, args);
	else if ((args[1] > args[2]))
		case_2(stack_a, args);
	else if (args[0] > args[1])
		sa(stack_a);
	return (0);
}
