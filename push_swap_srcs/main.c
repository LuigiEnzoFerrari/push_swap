/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:13 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/10/02 23:03:01 by lenzo-pe         ###   ########.fr       */
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

	ra(&stack_a);
	ra(&stack_a);
	pb(&stack_a, &stack_b);
	rra(&stack_a);
	rra(&stack_a);
	pb(&stack_a, &stack_b);
	rra(&stack_a);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	// ft_putendl_fd("a:", 1);
	// lstPrint(stack_a);
	// lstPrint(stack_b);
	lstDelete(&stack_a);
	lstDelete(&stack_b);

	return (0);
}
