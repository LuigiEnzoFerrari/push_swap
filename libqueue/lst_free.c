/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:11:27 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:11:28 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Free all the nodes on the list using recursion
*/

void	lst_free(t_node *lst)
{
	if (lst == NULL)
		return ;
	lst_free(lst->next);
	node_free(lst);
}
