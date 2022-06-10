/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:26:29 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:26:30 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	str_len;

	str_len = 0;
	if (!dst || !src)
		return (0);
	while (src[str_len])
		str_len++;
	while (dstsize > 1 && *src)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (str_len);
}
