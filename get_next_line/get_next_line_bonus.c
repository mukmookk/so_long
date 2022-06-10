/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:02:35 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 16:02:36 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	tok_line(char *s, char **next)
{
	if (!s)
		return (0);
	while (*s != '\0' && *s != '\n')
		s++;
	if (*s == '\n')
	{
		*s++ = '\0';
		*next = ft_gnl_strdup(s);
		if (!(*next))
			return (0);
		return (1);
	}
	else
	{
		*next = NULL;
		return (1);
	}
}

static int	make_line(char **line, char **line_save, char **line_tmp, \
char **buffer)
{
	if (buffer)
	{
		if (!(tok_line(*buffer, line_save)))
			return (0);
		*line = ft_gnl_strjoin(*line_tmp, *buffer);
		if (!(*line))
			return (0);
	}
	else
	{
		if (!(tok_line(*line_save, line_save)))
			return (0);
		*line = ft_gnl_strdup(*line_tmp);
		if (!(*line))
			return (0);
	}
	if (*line_tmp)
		free(*line_tmp);
	*line_tmp = *line;
	return (1);
}

static int	free_buffer(char **buffer, int i)
{
	free(*buffer);
	return (i);
}

static int	read_fin(char **buffer, char **line_tmp, char **line, \
int read_num)
{
	if (read_num < 0)
		return (free_buffer(buffer, -1));
	else
	{
		if (*line_tmp)
			return (free_buffer(buffer, 0));
		*line = ft_gnl_strdup("");
		if (!(*line))
			return (free_buffer(buffer, -1));
		else
			return (free_buffer(buffer, 0));
	}
}

int	get_next_line(int fd, char **line)
{
	static char		*line_save[FD_MAX + 1];
	char			*buffer;
	char			*line_tmp;
	int				read_num;

	if (fd < 0 || fd > FD_MAX || BUFFER_SIZE <= 0 || !line)
		return (-1);
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (-1);
	line_tmp = line_save[fd];
	if (line_save[fd])
		if (!(make_line(line, &line_save[fd], &line_tmp, NULL)))
			return (free_buffer(&buffer, -1));
	while (!line_save[fd])
	{
		read_num = read(fd, buffer, BUFFER_SIZE);
		if (read_num <= 0)
			return (read_fin(&buffer, &line_tmp, line, read_num));
		buffer[read_num] = '\0';
		if (!(make_line(line, &line_save[fd], &line_tmp, &buffer)))
			return (free_buffer(&buffer, -1));
	}
	return (free_buffer(&buffer, 1));
}
