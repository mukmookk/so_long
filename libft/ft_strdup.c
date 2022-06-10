/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:25:58 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:25:59 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	size_t		len;
	char		*cp;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	cp = (char *)malloc(len + 1);
	if (!cp)
		return (NULL);
	while (i < len + 1)
	{
		cp[i] = s1[i];
		i++;
	}
	return (cp);
}
