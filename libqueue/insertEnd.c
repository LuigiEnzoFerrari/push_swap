/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertEnd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:02 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:08:03 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Creates a node with the given data value
** and inserts it into the end of the linked list
*/

void	insertEnd(t_node **lst, int data)
{
	t_node	*node;

	node = newNode(data);
	if (*lst != NULL)
		nodeLast(*lst)->next = node;
	else
		*lst = node;
}
