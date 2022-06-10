/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:28:48 by youngmki          #+#    #+#             */
/*   Updated: 2022/03/16 08:37:41 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map_size(int i, t_map *map_info)
{
	map_info->x = ft_strlen(map_info->map[i]);
	if (map_info->map_flag == 1)
		error_user("Map size error1\n");
	else if (map_info->y == 0 && map_info->x == 0)
		error_user("Map size error2\n");
	else if (map_info->y == 0)
		map_info->first_x = map_info->x;
	else if (map_info->y > 0 && map_info->map_flag == 0 && map_info->x == 0)
	{
		map_info->map_flag++;
		return ;
	}
	else if (map_info->y > 0 && map_info->first_x != map_info->x)
		error_user("Map size error3\n");
	map_info->y++;
}

static void	check_map_element(char c, int *cur_x, int *cur_y, t_map *map_info)
{
	if (c == 'P' || c == 'p')
	{
		map_info->player_x = *cur_x;
		map_info->player_y = *cur_y;
		map_info->p_num++;
	}
	else if (c == 'E' || c == 'e')
		map_info->e_num++;
	else if (c == 'C' || c == 'c')
		map_info->c_num++;
	else if (c == '1' || c == '0')
		;
	else
		error_user("Invaid value\n");
}

void	check_map_vaid(t_map *map_info)
{
	char	c;
	int		cur_x;
	int		cur_y;

	cur_y = 0;
	while (cur_y < map_info->y)
	{
		cur_x = 0;
		while (cur_x < map_info->x)
		{
			c = map_info->map[cur_y][cur_x];
			if ((cur_x == 0 || cur_x == map_info->x - 1 || cur_y == 0 || \
			cur_y == map_info->y - 1) && c != '1')
				error_user("Wall boundary\n");
			check_map_element(c, &cur_x, &cur_y, map_info);
			cur_x++;
		}
		cur_y++;
	}
	if (map_info->p_num != 1)
		error_user("player starting position isn't one\n");
	else if (map_info->e_num == 0)
		error_user("Map exit not exist\n");
	else if (map_info->c_num == 0)
		error_user("Collectible not exist\n");
}
