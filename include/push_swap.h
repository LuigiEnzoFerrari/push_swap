/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 12:35:48 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <libqueue.h>
# include "utils.h"
# include <limits.h>

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

int		print_error(void);
int		checker_args(char ***argv);
int		init_stack_a(t_node **stack_a, char **argv);

int		issorted(t_node *stack);
int		trinity(t_node **stack_a);
int		infinity(t_node **stack_a, t_node **stack_b);
t_node	*bubblesort(t_node *lst);
t_node	*bubblesort_reverse(t_node *lst);
int		send_all_to_stack_b(t_node **stack_a, t_node **stack_b);
void	insert_all_to_stack_a(t_node **stack_a, t_node **stack_b);
size_t	how_many_sets_of_x(int size, int x);
int		nearest_pivot(t_node *stack, int pivot);
int		nearest_pivot_or_above(t_node *stack, int pivot);

void	preparing_stack_a(t_node **stack_a, int pivot);

void	send_chunks_of_x(t_node **stack_a, t_node **stack_b, size_t x);
int		find_the_xth(t_node *stack, size_t x);
void	put_the_next_on_top(t_node **stack_b, int pivot);
int		value_to_put_on_top(t_node *stack_a, int value);
int		has_numbers_left(t_node *stack, int pivot);

int		print_error(void);

void	apply_instructions(t_node **stack_a,
			t_node **stack_b, char *instruction);
void	preparing_stack_ab(t_node **stack_a, t_node **stack_b, int pivot);

#endif
