/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_delete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:11:54 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:11:55 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Free and delete the given pointer to a node in a linked list
*/

void	node_delete(t_node **lst)
{
	if (*lst != NULL)
		free(*lst);
	*lst = NULL;
}
