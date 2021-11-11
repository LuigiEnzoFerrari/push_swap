/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstDuplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:08:20 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return a linked list with the same values, size, order.
*/

#include <libqueue.h>

t_node	*lstDuplicate(t_node *lst)
{
	t_node	*cpy;

	cpy = NULL;
	while (lst)
	{
		insertEnd(&cpy, lst->data);
		lst = lst->next;
	}
	return (cpy);
}
