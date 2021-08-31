/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/31 12:59:40 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <libft.h>
# include <libqueue.h>

int		swap(t_node **lst);
int		rotate(t_node **lst);
int		reverse_rotate(t_node **lst);
int		push(t_node **dst, t_node **src);

int		isNextNodeEmpty(t_node *lst);

void	sa(t_node **lst);
void	sb(t_node **lst);
void	ss(t_node **lst1, t_node **lst2);

void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);

void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

#endif