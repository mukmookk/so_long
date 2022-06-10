/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:29:00 by youngmki          #+#    #+#             */
/*   Updated: 2022/02/24 15:29:01 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	check_open(int argv, char **argc)
{
	int		fd;
	int		s_len;
	int		cmp;
	char	*extension_name;

	extension_name = ".ber";
	if (argv != 2)
		error_user("Please write map location\n");
	s_len = ft_strlen(argc[1]);
	if (s_len < 4)
		error_user("please write correct map location\n");
	cmp = ft_strncmp(&argc[1][s_len - 4], extension_name, 4);
	if (cmp != 0)
		error_user("Map filename extension must have .ber\n");
	fd = open(argc[1], O_RDONLY);
	if (fd < 0)
		error_system();
	return (fd);
}

int	main(int argv, char **argc)
{
	int		fd;
	t_map	map_info;

	fd = check_open(argv, argc);
	init_t_map(&map_info);
	init_map(&map_info, fd);
	check_map_vaid(&map_info);
	mlx_execution(&map_info);
	return (0);
}
