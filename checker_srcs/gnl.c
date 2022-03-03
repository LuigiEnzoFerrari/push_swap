/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:58:25 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 12:58:26 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{
	ft_strcpy((dest + ft_strlen(dest)), src);
	return (dest);
}

static char	*ft_rejoin(char *s1, char const *s2)
{
	char	*ptr;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s2) + ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!ptr)
	{
		free(s1);
		return (NULL);
	}
	ft_strcpy(ptr, s1);
	ft_strcat(ptr, s2);
	free(s1);
	return (ptr);
}

static int	last_returns(int n, char **save, char **line)
{
	char	*temp;

	if (n < 0)
		return (-1);
	*line = ft_substr(*save, 0, ft_strclen(*save, '\n'));
	if (!line)
		return (-1);
	if (ft_strchr(*save, '\n'))
	{
		temp = ft_strdup(ft_strchr(*save, '\n') + 1);
		free(*save);
		*save = temp;
		return (1);
	}
	free(*save);
	*save = NULL;
	return (0);
}

int	get_next_line(int fd, char **line)
{
	static char	*save[RLIMIT_NOFILE];
	char		*buffer;
	int			nbytes;

	if (BUFFER_SIZE <= 0 || fd < 0 || !line)
		return (-1);
	if (!save[fd])
		save[fd] = ft_strdup("");
	if (!save[fd])
		return (-1);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (-1);
	nbytes = read(fd, buffer, BUFFER_SIZE);
	while (nbytes > 0)
	{
		buffer[nbytes] = '\0';
		save[fd] = ft_rejoin(save[fd], buffer);
		if (ft_strchr(save[fd], '\n'))
			break ;
		nbytes = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	return (last_returns(nbytes, &save[fd], line));
}
