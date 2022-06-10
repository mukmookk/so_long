/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:28:06 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/25 02:29:41 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fix_map_image(t_param *p, int fix_x, int fix_y, char c)
{
	if (c == 'P' || c == 'p' || c == 'C' || c == 'c' || c == 'E' || c == 'e')
		fix_map_image(p, fix_x, fix_y, '0');
	if (c == 'P' || c == 'p')
		mlx_put_image_to_window(p->mlx_ptr, p->win_ptr, p->img_ptr_p, \
		fix_x * SQUARE_SIZE, fix_y * SQUARE_SIZE);
	else if (c == 'C' || c == 'c')
		mlx_put_image_to_window(p->mlx_ptr, p->win_ptr, p->img_ptr_c, \
		fix_x * SQUARE_SIZE, fix_y * SQUARE_SIZE);
	else if (c == 'E' || c == 'e')
		mlx_put_image_to_window(p->mlx_ptr, p->win_ptr, p->img_ptr_e, \
		fix_x * SQUARE_SIZE, fix_y * SQUARE_SIZE);
	else if (c == '1')
		mlx_put_image_to_window(p->mlx_ptr, p->win_ptr, p->img_ptr_1, \
		fix_x * SQUARE_SIZE, fix_y * SQUARE_SIZE);
	else if (c == '0')
		mlx_put_image_to_window(p->mlx_ptr, p->win_ptr, p->img_ptr_0, \
		fix_x * SQUARE_SIZE, fix_y * SQUARE_SIZE);
}

void	init_map_image(t_param *p)
{
	int		cur_x;
	int		cur_y;
	char	c;

	cur_y = 0;
	while (cur_y < p->size_y)
	{
		cur_x = 0;
		while (cur_x < p->size_x)
		{
			c = p->map[cur_y][cur_x];
			fix_map_image(p, cur_x, cur_y, c);
			cur_x++;
		}
		cur_y++;
	}
}
