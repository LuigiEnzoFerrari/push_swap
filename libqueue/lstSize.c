/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstSize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:31 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:10:46 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Return the number of nodes in a list from head to tail
*/

size_t	lstSize(t_node *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
