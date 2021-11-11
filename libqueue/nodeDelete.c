/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodeDelete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:38 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/10 03:35:20 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>

/*
** Free and delete the given pointer to a node in a linked list
*/

void	nodeDelete(t_node **lst)
{
	if (*lst != NULL)
		free(*lst);
	*lst = NULL;
}
