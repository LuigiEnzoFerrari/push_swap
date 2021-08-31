/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:13 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/31 12:18:25 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <sys/queue.h>

int	main(int argc, char **argv)
{
	size_t	i;
	t_node	*stack_a;
	t_node	*stack_b;

	i = 1;
	argc = (int)argc;
	stack_a = NULL;
	stack_b = NULL;
	while (argv[i])
	{
		insertEnd(&stack_a, ft_atoi(argv[i]));
		i++;
	}
	ft_putendl_fd("stack a:  \n", STDOUT_FILENO);
	lstPrint(stack_a);
	ft_putendl_fd("stack b:  \n", STDOUT_FILENO);
	lstPrint(stack_b);

	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);

	ft_putendl_fd("\n\nstack a:\n", STDOUT_FILENO);
	lstPrint(stack_a);
	ft_putendl_fd("\nstack b:\n", STDOUT_FILENO);
	lstPrint(stack_b);

	sa(&stack_a);
	sb(&stack_b);

	ft_putendl_fd("\n\nstack a:\n", STDOUT_FILENO);
	lstPrint(stack_a);
	ft_putendl_fd("\nstack b:\n", STDOUT_FILENO);
	lstPrint(stack_b);

	ra(&stack_a);
	rb(&stack_b);

	ft_putendl_fd("\n\nstack a:\n", STDOUT_FILENO);
	lstPrint(stack_a);
	ft_putendl_fd("\nstack b:\n", STDOUT_FILENO);
	lstPrint(stack_b);


	rr(&stack_a, &stack_b);

	ft_putendl_fd("\n\nstack a:\n", STDOUT_FILENO);
	lstPrint(stack_a);
	ft_putendl_fd("\nstack b:\n", STDOUT_FILENO);
	lstPrint(stack_b);

	rra(&stack_a);
	rrb(&stack_b);

	ft_putendl_fd("\n\nstack a:\n", STDOUT_FILENO);
	lstPrint(stack_a);
	ft_putendl_fd("\nstack b:\n", STDOUT_FILENO);
	lstPrint(stack_b);

	rrr(&stack_a, &stack_b);

	ft_putendl_fd("\n\nstack a:\n", STDOUT_FILENO);
	lstPrint(stack_a);
	ft_putendl_fd("\nstack b:\n", STDOUT_FILENO);
	lstPrint(stack_b);

	lstDelete(&stack_a);
	lstDelete(&stack_b);

	return (0);
}
