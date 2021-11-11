/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:23:25 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/10 21:52:10 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	has_more_dig_than_int(char *n)
{
	size_t	len;

	len = ft_strlen(n);
	if (*n == '-' && len > 11)
		return (-1);
	else if (len > 10)
		return (-1);
	return (0);
}

static int	is_all_int(char **argv)
{
	size_t	i;

	while (*argv != NULL)
	{
		i = 0;
		if (**argv == '-')
			i++;
		while (*((*argv) + i) != '\0')
		{
			if (!ft_isdigit(*((*argv) + i)))
				return (1);
			i++;
		}
		if (has_more_dig_than_int(*argv))
			return (1);
		argv++;
	}
	return (0);
}

static int	is_replicated(char **argv)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (argv[i])
	{
		j = 1;
		while (argv[i + j])
		{
			if (!ft_strcmp(argv[i], argv[i + j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	checker_args(char ***argv)
{
	int	one_arg;

	one_arg = ((*argv)[1] == NULL);
	if ((*argv)[0] == NULL)
		return (1);
	if (one_arg)
		(*argv) = ft_split((*argv)[0], ' ');
	else
		(*argv) = ft_arraydup(*argv);
	if (is_replicated((*argv)))
	{
		ft_arrayfree(*argv);
		return (1);
	}
	if (is_all_int((*argv)))
	{
		ft_arrayfree(*argv);
		return (1);
	}
	return (0);
}
