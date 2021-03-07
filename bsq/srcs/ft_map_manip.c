/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_manip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:05:34 by sfournie          #+#    #+#             */
/*   Updated: 2021/03/03 09:41:51 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int		ft_populate_igrid(t_map *map, char *str, int *pos)
{
	int y;
	int n;
	int l_count;

	map->i_grid[0] = (int *)malloc(sizeof(int) * map->length + 1);
	n = -1;
	l_count = 0;
	y = 0;
	while (l_count < map->height)
	{
		printf("%d\n", l_count);
		if (!(map->i_grid[y] = ft_getlines(map->i_grid[y], str, pos, map)))
		{
			return (0);
		}
		y++;
		n = -1;
		l_count++;
	}
	return (1);
}
