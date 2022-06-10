/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:03:28 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 16:03:29 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif
# ifndef FD_MAX
#  define FD_MAX 256
# endif

# include <unistd.h>
# include <stdlib.h>

char	*ft_gnl_strjoin(char const *s1, char const *s2);
char	*ft_gnl_strdup(const char *s1);
int		get_next_line(int fd, char **line);

#endif
