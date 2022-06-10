/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:26:42 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:26:43 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	index;
	unsigned int	len;

	if (!s)
		return (NULL);
	index = 0;
	len = ft_strlen(s);
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (NULL);
	while (index < len)
	{
		newstr[index] = f(index, s[index]);
		index++;
	}
	newstr[index] = '\0';
	return (newstr);
}
