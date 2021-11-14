/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:12:42 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:12:43 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Creates a node with the given data value
** and inserts it into the front of the linked list
*/

void	insert_front(t_node **lst, int data)
{
	t_node	*node;

	node = new_node(data);
	if (*lst != NULL && lst != NULL)
		node->next = *lst;
	*lst = node;
}
