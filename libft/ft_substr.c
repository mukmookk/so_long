/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:27:14 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:27:15 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	if (s_len <= start)
	{
		*sub = 0;
		return (sub);
	}
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
