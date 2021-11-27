#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <liblist.h>

int		swap(t_node **lst);
int		rotate(t_node **lst);
int		reverse_rotate(t_node **lst);
int		push(t_node **dst, t_node **src);

void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);

void	rra(t_node **stack_a);
void	rrb(t_node **stack_a);
void	rrr(t_node **stack_a, t_node **stack_b);

void	sa(t_node **stack);
void	sb(t_node **stack);
void	ss(t_node **stack_a, t_node **stack_b);

void	apply_instructions(t_node **stack_a, t_node **stack_b,
			char *instruction);

#endif
