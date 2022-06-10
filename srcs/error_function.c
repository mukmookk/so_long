/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:27:58 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/26 17:36:39 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_user(char *s)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(s, 2);
	exit(0);
}

void	error_system(void)
{
	perror("Error\n");
	exit(0);
}
