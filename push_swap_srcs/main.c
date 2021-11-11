/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:13 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/11 08:30:35 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <sys/queue.h>


void	sorting_2(t_node **stack, void(*swapping)(t_node **))
{
	if ((*stack)->data > (*stack)->next->data)
		swapping(stack);
}

void	quintuple(t_node **stack_a, t_node **stack_b)
{
	while (lstSize((*stack_a)) > 3)
	{
		if ((*stack_a)->data == nodeMax((*stack_a))->data)
			ra(stack_a);
		pb(stack_a, stack_b);
	}
	trinity(stack_a);
	while ((*stack_b) != NULL)
	{
		preparing_stack_a(stack_a, (*stack_b)->data);
		pa(stack_a, stack_b);
	}
	preparing_stack_a(stack_a, nodeMin((*stack_a))->data);
}

void	algorithms_init(t_node **stack_a, t_node **stack_b)
{
	size_t	n;

	n = lstSize(*stack_a);
	if (issorted(*stack_a))
		;
	else if (n == 2)
		sorting_2(stack_a, &sa);
	else if (n == 3)
		trinity(stack_a);
	else if (n <= 5)
		quintuple(stack_a, stack_b);
	else
		infinity(stack_a, stack_b);
	lstDelete(stack_a);
	lstDelete(stack_b);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	argc = (int)argc;
	stack_a = NULL;
	stack_b = NULL;
	argv++;
	if (*argv == NULL)
		return (0);
	if (checker_args(&argv))
		return (print_error());
	if (init_stack_a(&stack_a, argv))
		return (print_error());
	algorithms_init(&stack_a, &stack_b);
	return (0);
}
