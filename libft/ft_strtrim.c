/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:27:05 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:27:06 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	n;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	n = ft_strlen(s1);
	while (n > 1 && ft_strrchr(set, s1[n - 1]))
		n--;
	trim = (char *)malloc(n + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1, n + 1);
	return (trim);
}
