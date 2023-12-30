/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 00:47:12 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 21:26:53 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

static bool	check_rest(char **rest, char **line);
static bool	get_line(char *buf, char **rest, ssize_t read_size, char **rtn);

/**
 * @brief
 * Read a line from the fd.
 * @param fd
 * A file descriptor that's associated with the file.
 * @return char* 
 */
char	*ft_get_next_line(int fd)
{
	static char	*rest;
	char		*line;
	char		buf[BUFSIZE + 1];
	ssize_t		read_size;

	line = NULL;
	assert(fd >= 0);
	if (rest && check_rest(&rest, &line))
		return (line);
	read_size = read(fd, buf, BUFSIZE);
	while (read_size > 0 && get_line(buf, &rest, read_size, &line) == 0)
		read_size = read(fd, buf, BUFSIZE);
	return (line);
}

static bool	check_rest(char **rest, char **line)
{
	char				*temp;
	const char *const	newline = ft_strchr(*rest, '\n');

	if (*newline == '\0')
		return (false);
	*line = ft_strdup(*rest, newline);
	if (*(newline + 1) == '\0')
	{
		free(*rest);
		*rest = NULL;
	}
	else
	{
		temp = ft_strdup(newline + 1, *rest + ft_strlen(*rest));
		free(*rest);
		*rest = temp;
	}
	return (true);
}

static bool	get_line(char *buf, char **rest, ssize_t read_size, char **rtn)
{
	char	*newline;
	char	*temp;

	buf[read_size] = '\0';
	newline = ft_strchr(buf, '\n');
	if (*newline != '\0' && *(newline + 1) != '\0')
	{
		*rest = ft_strdup(newline + 1, buf + read_size);
		*newline = '\0';
	}
	if (*rtn == NULL)
		*rtn = ft_strdup(buf, newline);
	else
	{
		temp = ft_strjoin(*rtn, buf);
		free(*rtn);
		*rtn = temp;
	}
	return (newline != buf + read_size);
}
