/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:03:04 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 16:03:05 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
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
