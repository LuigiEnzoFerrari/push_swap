/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:04:29 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 12:58:17 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static size_t	ft_strltok(const char *str, int c)
{
	size_t	i;
	size_t	strn;

	i = 0;
	strn = 0;
	while (str[i])
	{
		if (str[i] != c)
			strn++;
		while (str[i] != c && str[i + 1])
			i++;
		i++;
	}
	return (strn);
}

static char	**ft_strnalloc(char **ptr, const char *s, char c, size_t num)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	while (num--)
	{
		while (s[i] == c && s[i])
			i++;
		s_len = ft_strclen((s + i), c);
		*ptr++ = ft_substr(s, i, s_len);
		i = s_len + i;
	}
	*ptr = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	tokens_n;

	if (!s)
		return (NULL);
	tokens_n = ft_strltok(s, c);
	ptr = (char **)malloc(sizeof(char **) * (tokens_n + 1));
	if (!ptr)
		return (NULL);
	ft_strnalloc(ptr, s, c, (tokens_n));
	return (ptr);
}
