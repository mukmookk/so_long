/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:28:41 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:28:42 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	resize_map(t_map *map_info)
{
	char	**map_tmp;
	int		i;

	i = 0;
	map_tmp = (char **)malloc(map_info->map_size * 2 * sizeof(char *));
	if (!map_tmp)
		error_user("malloc fail\n");
	while (i < map_info->map_size)
	{
		map_tmp[i] = map_info->map[i];
		i++;
	}
	free(map_info->map);
	map_info->map = map_tmp;
	map_info->map_size *= 2;
	printf("map_size: %d\n", map_info->map_size);
}
