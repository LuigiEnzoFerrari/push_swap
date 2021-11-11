/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodeMax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:48 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/10 03:38:47 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Return a pointer to a node in a linked list with the max value on it.
** if the list has the max value duplicated the return should be the
** pointer to the first occurrence.
*/

t_node	*nodeMax(t_node *lst)
{
	t_node	*ptr;

	ptr = lst;
	while (lst != NULL)
	{
		if (lst->data > ptr->data)
			ptr = lst;
		lst = lst->next;
	}
	return (ptr);
}
