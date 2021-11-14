/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:12:07 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:12:08 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Return a pointer to the last valid node on the list
*/

t_node	*node_last(t_node *lst)
{
	if (lst != NULL)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
