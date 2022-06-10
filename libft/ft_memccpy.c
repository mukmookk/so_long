/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:21:40 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:21:41 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)src == (unsigned char)c)
		{
			*(unsigned char *)dst++ = *(unsigned char *)src;
			return (dst);
		}
		*(unsigned char *)dst++ = *(unsigned char *)src++;
		n--;
	}
	return (NULL);
}
