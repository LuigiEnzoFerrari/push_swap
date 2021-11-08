/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:13 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:27:54 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <sys/queue.h>

int	print_error(int n)
{
	if (n == 1)
		ft_putendl_fd("No arguments", STDERR_FILENO);
	else if (n == 2)
		ft_putendl_fd("There is a non digit", STDERR_FILENO);
	else if (n == 3)
		ft_putendl_fd("Has more digits than a int", STDERR_FILENO);
	else if (n == 4)
		ft_putendl_fd("Is not a int number", STDERR_FILENO);
	else if (n == 5)
		ft_putendl_fd("Missing Arguments", STDERR_FILENO);
	else if (n == 6)
		ft_putendl_fd("Invalid Args", STDERR_FILENO);
	else if (n == 7)
		ft_putendl_fd("Is bigger than a int", STDERR_FILENO);
	else if (n == 8)
		ft_putendl_fd("Has a replicated number", STDERR_FILENO);
	return (EXIT_FAILURE);
}

int	quintuple(t_node **stack_a, t_node **stack_b)
{
	int	lower;

	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	trinity(stack_a);
	if ((*stack_b)->data > (*stack_b)->next->data)
		sb(stack_b);
	lower = (*stack_a)->data;
	if ((*stack_a)->data > (*stack_b)->data)
		lower = (*stack_b)->data;
	while ((*stack_b) != NULL)
	{
		if ((*stack_a)->data < (*stack_b)->data)
			ra(stack_a);
		else
			pa(stack_a, stack_b);
	}
	while ((*stack_a)->data != lower)
		ra(stack_a);
	return (0);
}

void	algorithms_init(t_node **stack_a, t_node **stack_b)
{
	size_t	n;

	n = lstSize(*stack_a);
	if (n == 3)
		trinity(stack_a);
	else if (n == 5)
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
	if (checker_args(&argv))
		return (print_error(6));
	if (init_stack_a(&stack_a, argv))
		return (print_error(6));
	algorithms_init(&stack_a, &stack_b);
	return (0);
}
