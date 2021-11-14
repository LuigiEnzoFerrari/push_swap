/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:12:01 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:12:02 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Free and delete the given pointer to a node in a linked list
*/

void	node_free(t_node *lst)
{
	if (lst != NULL)
		free(lst);
}
