/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libqueue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:59:51 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:10:22 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBQUEUE_H
# define LIBQUEUE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/*
** Node struct of a linked list which has a int value as the data.
*/

struct s_node
{
	int				data;
	struct s_node	*next;
};

typedef struct s_node	t_node;

t_node	*newNode(int data);
t_node	*nodeLast(t_node *lst);

size_t	lstSize(t_node *lst);

void	insertFront(t_node **lst, int data);
void	insertEnd(t_node **lst, int data);

void	lstFree(t_node *lst);
void	nodeFree(t_node *lst);

void	lstDelete(t_node **lst);
void	nodeDelete(t_node **lst);

t_node	*lstDuplicate(t_node *lst);
void	lstPrint(t_node *lst, int c);
t_node	*nodeMin(t_node *lst);
t_node	*nodeMax(t_node *lst);

#endif
