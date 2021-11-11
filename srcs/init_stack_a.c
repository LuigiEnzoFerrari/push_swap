/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:50:01 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/10 21:52:37 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int64_t	ft_atoll(const char *nptr)
{
	int64_t	holder;
	int		sign;

	sign = 1;
	holder = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
		holder = (holder * 10) + (*nptr++ - '0');
	return (holder * sign);
}

static int	is_max_min_of_a_int(int64_t max)
{
	if (max > INT_MAX || max < INT_MIN)
		return (-1);
	return (0);
}

int	init_stack_a(t_node **stack_a, char **argv)
{
	int64_t	max;
	size_t	i;

	i = 0;
	while (argv[i])
	{
		max = ft_atoll(argv[i]);
		insertEnd(stack_a, max);
		if (is_max_min_of_a_int(max))
		{
			lstDelete(stack_a);
			ft_arrayfree(argv);
			return (1);
		}
		i++;
	}
	ft_arrayfree(argv);
	return (0);
}
