/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:11:13 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:11:15 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Free and deletes all the nodes on the list using recursion
** 
*/

void	lst_delete(t_node **lst)
{
	if (*lst == NULL)
		return ;
	lst_delete(&(*lst)->next);
	node_delete(lst);
}
