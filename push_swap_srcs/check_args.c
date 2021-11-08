#include <push_swap.h>

static int has_more_dig_than_int(char *n)
{
	size_t	len;

	len = ft_strlen(n);
	ft_putnbr(len);
	ft_putnbr(len);
	ft_putnbr(len);
	ft_putnbr(len);
	if (*n == '-' && len > 11)
		return (-1);
	else if (len > 10)
		return (-1);
	return (0);
}

static int is_all_int(char **argv)
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
				return (print_error(2));
			i++;
		}
		if (has_more_dig_than_int(*argv))
			return (print_error(3));
		argv++;
	}
	return (0);
}

static int is_replicated(char **argv)
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

int checker_args(char ***argv)
{
	int	one_arg;

	one_arg = ((*argv)[1] == NULL);
	if ((*argv)[0] == NULL)
		return (print_error(5));
	if (one_arg)
		(*argv) = ft_split((*argv)[0], ' ');
	else
		(*argv) = ft_arraydup(*argv);
	if (is_replicated((*argv)))
	{
		ft_arrayfree(*argv);
		return (print_error(8));
	}
	if (is_all_int((*argv)))
	{
		ft_arrayfree(*argv);
		return (print_error(4));
	}
	return (0);
}
