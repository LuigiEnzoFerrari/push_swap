/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:58:06 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 12:58:07 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static size_t	ft_arraylen(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

char	**ft_arraydup(char **array)
{
	size_t	len;
	char	**ptr;

	len = ft_arraylen(array);
	ptr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = NULL;
	while (len--)
		ptr[len] = ft_strdup(array[len]);
	return (ptr);
}

void	ft_arrayfree(char **array)
{
	char	**ptr;

	ptr = array;
	while (*array)
	{
		free(*array);
		array++;
	}
	free(ptr);
}
