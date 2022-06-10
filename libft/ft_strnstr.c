/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:26:53 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:26:54 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle)
		{
			n = 0;
			while (haystack[n] == needle[n] && needle[n] && len > 0)
			{
				n++;
				len--;
			}
			if (!needle[n])
				return ((char *)haystack);
			len += n;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
