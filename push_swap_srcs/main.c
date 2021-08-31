/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:13 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/31 06:55:03 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <sys/queue.h>

int	main(int argc, char **argv)
{
	size_t	i;
	t_node	*stack_a;
	// t_node	*stack_b;

	i = 1;
	argc = (int)argc;
	stack_a = NULL;
	while (argv[i])
	{
		insertEnd(&stack_a, ft_atoi(argv[i]));
		i++;
	}
	lstPrint(stack_a);
	ft_putchar('\n');
	reverse_rotate(&stack_a);
	lstPrint(stack_a);
	ft_putchar('\n');
	reverse_rotate(&stack_a);
	lstPrint(stack_a);
	ft_putchar('\n');
	reverse_rotate(&stack_a);
	lstPrint(stack_a);
	ft_putchar('\n');
	lstDelete(&stack_a);
	return (0);
}
