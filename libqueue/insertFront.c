/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertFront.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:06 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:11:18 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Creates a node with the given data value
** and inserts it into the front of the linked list
*/

void	insertFront(t_node **lst, int data)
{
	t_node	*node;

	node = newNode(data);
	if (*lst != NULL && lst != NULL)
		node->next = *lst;
	*lst = node;
}
