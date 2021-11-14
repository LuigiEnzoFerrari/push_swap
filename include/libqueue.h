/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libqueue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:12 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 19:06:58 by lenzo-pe         ###   ########.fr       */
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

t_node	*new_node(int data);
t_node	*node_last(t_node *lst);

void	insert_front(t_node **lst, int data);
void	insert_end(t_node **lst, int data);

void	lst_free(t_node *lst);
void	node_free(t_node *lst);

void	lst_delete(t_node **lst);
void	node_delete(t_node **lst);

t_node	*lst_duplicate(t_node *lst);
size_t	lst_size(t_node *lst);
void	lst_print(t_node *lst, int c);
t_node	*node_min(t_node *lst);
t_node	*node_max(t_node *lst);

#endif
