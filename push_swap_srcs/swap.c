/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:01 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/31 07:03:28 by lenzo-pe         ###   ########.fr       */
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

/*
** Puts the first node of the linked list as the last node on the list.
*/

void	rotate(t_node **lst)
{
	t_node	*node;

	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	node = (*lst);
	(*lst) = (*lst)->next;
	node->next = NULL;
	nodeLast((*lst))->next = node;
}

/*
** Puts the last node of the linked list as the first node on the list.
*/

void	reverse_rotate(t_node **lst)
{
	t_node	*node;
	t_node	*last;

	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	node = (*lst);
	last = node;
	(*lst) = nodeLast((*lst));
	while (last->next->next != NULL)
		last = last->next;
	(*lst)->next = node;
	last->next = NULL;
}
