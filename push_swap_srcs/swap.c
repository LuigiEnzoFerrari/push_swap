/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:01 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/31 05:53:09 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/*
** Swap the first two nodes of the given linked list
*/

void	swap(t_node **lst)
{
	t_node	*node;

	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	node = *lst;
	(*lst) = (*lst)->next;
	node->next = (*lst)->next;
	(*lst)->next = node;
}

void	rotate(t_node **lst)
{
	t_node	*node;

	node = (*lst);
	(*lst) = (*lst)->next;
	node->next = NULL;
	nodeLast((*lst))->next = node;
}
