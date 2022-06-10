/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:24:43 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:24:46 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_1;
	unsigned char	*tmp_2;

	tmp_1 = (unsigned char *)dst;
	tmp_2 = (unsigned char *)src;
	if (dst > src)
		while (len-- > 0)
			tmp_1[len] = tmp_2[len];
	else if (dst < src)
		while (len-- > 0)
			*tmp_1++ = *tmp_2++;
	return (dst);
}
