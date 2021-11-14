/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:12:37 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:12:38 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Creates a node with the given data value
** and inserts it into the end of the linked list
*/

void	insert_end(t_node **lst, int data)
{
	t_node	*node;

	node = new_node(data);
	if (*lst != NULL)
		node_last(*lst)->next = node;
	else
		*lst = node;
}
