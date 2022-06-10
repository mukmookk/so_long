/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:21:59 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:22:00 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)dst;
	if (dst == 0 && src == 0)
		return (NULL);
	while (n-- > 0)
		*tmp++ = *(unsigned char *)src++;
	return (dst);
}
