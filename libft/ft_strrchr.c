/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:26:58 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:26:59 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp)
		tmp++;
	while (*tmp != (char)c && tmp != s)
		tmp--;
	if (*tmp == (char)c)
		return (tmp);
	return (NULL);
}
