/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:00:46 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/03 13:01:06 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# define BUFFER_SIZE 2
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/resource.h>

int		ft_isspace(int c);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);

size_t	ft_strlen(const char *str);
size_t	ft_strclen(const char *str, int c);
size_t	ft_strnlen(const char *str, size_t maxlen);

char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_arrayfree(char **array);
void	*ft_memcpy(void *dest, const void *src, size_t num);
int		ft_strcmp(const char *str1, const char *str2);

char	**ft_arraydup(char **array);
void	ft_arrayfree(char **array);

int		get_next_line(int fd, char **line);
char	*ft_strchr(const char *str, int c);

#endif
