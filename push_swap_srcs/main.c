/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:13 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/31 05:53:29 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <sys/queue.h>

int	main(int argc, char **argv)
{
	size_t	i;
	t_node	*numbers;

	i = 1;
	argc = (int)argc;
	numbers = NULL;
	while (argv[i])
	{
		insertEnd(&numbers, ft_atoi(argv[i]));
		i++;
	}
	lstPrint(numbers);
	ft_putchar('\n');
	// swap(&numbers);
	rotate(&numbers);
	lstPrint(numbers);
	ft_putchar('\n');
	lstDelete(&numbers);
	return (0);
}
