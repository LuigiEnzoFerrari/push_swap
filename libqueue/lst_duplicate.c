/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_duplicate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:11:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:11:21 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return a linked list with the same values, size, order.
*/

#include <libqueue.h>

t_node	*lst_duplicate(t_node *lst)
{
	t_node	*cpy;

	cpy = NULL;
	while (lst)
	{
		insert_end(&cpy, lst->data);
		lst = lst->next;
	}
	return (cpy);
}
