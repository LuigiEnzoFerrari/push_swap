/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nearest_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:50:21 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 09:58:24 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/*
** Return the nearest increment value to find the pivot value on the stack.
** Return a positive value if the pivot is closest to the start of the stack
** and return a negative value if the pivot is closest to the end of the stack.
** If the distance is equal in both direction return a positive number.
*/

int	nearest_pivot(t_node *stack, int pivot)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (stack->data != pivot)
	{
		stack = stack->next;
		i++;
	}
	while (stack != NULL)
	{
		stack = stack->next;
		j++;
	}
	if (i <= j)
		return (i);
	return (-j);
}

/*
** Return the nearest increment value to find the first occurrence of pivot
** or above on the stack. Return a positive value if the first occurrence
** is closest to the start of the stack and return a negative value
** if the first occurrence is closest to the end of the stack.
** if the distance is equal in both direction return a positive number.
*/

int	nearest_pivot_or_above(t_node *stack, int pivot)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (stack != NULL)
	{
		if (stack->data >= pivot)
			break ;
		stack = stack->next;
		i++;
	}
	while (stack != NULL)
	{
		if (stack->data >= pivot)
			j = 0;
		stack = stack->next;
		j++;
	}
	if (i <= j)
		return (i);
	return (-j);
}
