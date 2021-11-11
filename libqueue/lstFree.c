/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstFree.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:23 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:08:25 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Free all the nodes on the list using recursion
*/

void	lstFree(t_node *lst)
{
	if (lst == NULL)
		return ;
	lstFree(lst->next);
	nodeFree(lst);
}
