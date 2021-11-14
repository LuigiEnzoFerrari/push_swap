/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:36:36 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/14 18:50:20 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	check_instructions(char *str)
{
	if (ft_strcmp(str, "rra") == 0 || ft_strcmp(str, "rrb") == 0
		|| ft_strcmp(str, "ra") == 0 || ft_strcmp(str, "rb") == 0
		|| ft_strcmp(str, "sa") == 0 || ft_strcmp(str, "sb") == 0
		|| ft_strcmp(str, "pa") == 0 || ft_strcmp(str, "pb") == 0
		|| ft_strcmp(str, "rr") == 0 || ft_strcmp(str, "ss") == 0
		|| ft_strcmp(str, "rrr") == 0)
		return (0);
	return (1);
}

int	checker_algorithms_init(t_node **stack_a, t_node **stack_b)
{
	char	*str;

	while (get_next_line(STDIN_FILENO, &str))
	{
		if (check_instructions(str))
		{
			lst_delete(stack_a);
			lst_delete(stack_b);
			free(str);
			return (-1);
		}
		apply_instructions(stack_a, stack_b, str);
		free(str);
	}
	free(str);
	if ((issorted(*stack_a)) && (*stack_b) == NULL)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	lst_delete(stack_a);
	lst_delete(stack_b);
	return (0);
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
	if (checker_algorithms_init(&stack_a, &stack_b))
		return (print_error());
	return (EXIT_SUCCESS);
}
