/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstDelete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:16 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:08:17 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Free and deletes all the nodes on the list using recursion
** 
*/

void	lstDelete(t_node **lst)
{
	if (*lst == NULL)
		return ;
	lstDelete(&(*lst)->next);
	nodeDelete(lst);
}
