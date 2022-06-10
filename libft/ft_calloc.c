/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:03:48 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 16:03:49 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			n;

	n = count * size;
	mem = malloc(n);
	if (!mem)
		return (NULL);
	while (n > 0)
		mem[--n] = 0;
	return (mem);
}
