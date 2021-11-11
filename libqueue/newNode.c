/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newNode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:35 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:08:36 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Return a allocated node of a linked list
** with the given data value on it.
*/

t_node	*newNode(int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->data = data;
	return (node);
}
