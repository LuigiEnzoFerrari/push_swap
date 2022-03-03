/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:58:01 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 12:58:51 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strclen(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

size_t	ft_strnlen(const char *str, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (maxlen > i && str[i])
		i++;
	return (i);
}
