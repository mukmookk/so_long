/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:21:16 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:21:17 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*front;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	front = ft_lstnew(f(lst->content));
	if (!front)
		return (NULL);
	lst = lst->next;
	tmp = front;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&front, del);
			return (NULL);
		}
		lst = lst->next;
		tmp = tmp->next;
	}
	return (front);
}
