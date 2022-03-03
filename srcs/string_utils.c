/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:57:57 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 12:57:59 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(str) + 1;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	return (ft_memcpy(ptr, str, len));
}

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!dest && !src)
		return (dest);
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (num--)
		*str1++ = *str2++;
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	maxlen;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	maxlen = ft_strnlen(s, len);
	ptr = (char *)malloc(sizeof(char) * (maxlen + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, (s + start), maxlen);
	ptr[maxlen] = '\0';
	return (ptr);
}

int	ft_strcmp(const char *str1, const char *str2)
{
	int		i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == 0)
		return ((char *)str);
	return (NULL);
}
