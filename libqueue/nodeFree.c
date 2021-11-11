/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodeFree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:42 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/10 03:35:37 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Free and delete the given pointer to a node in a linked list
*/

void	nodeFree(t_node *lst)
{
	if (lst != NULL)
		free(lst);
}
