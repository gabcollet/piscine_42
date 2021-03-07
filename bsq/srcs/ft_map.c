/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:20:22 by sfournie          #+#    #+#             */
/*   Updated: 2021/03/04 09:58:17 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int		ft_build_map(t_map *map, char *file)
{
	char	*fstr;
	int		pos;
	int		*square;

	pos = 0;
	map->length = 0;
	if ((map->fdesc = open(file, O_RDONLY)) == -1)
		return (0);
	fstr = (char *)malloc(sizeof(char) * (FILEBUFF + 1));
	if ((read(map->fdesc, fstr, FILEBUFF)) == -1)
	{
		free(fstr);
		return (0);
	}
	if (!(ft_handle_lines(map, fstr, &pos)))
	{
		return (0);
	}
	if ((close(map->fdesc)) == -1)
		ft_error(1);
	free(fstr);
	square = ft_find_size_square(map->i_grid, map->height, map->length);
	ft_print_grid(map, square);
	return (1);
}

int		ft_set_map_values(t_map *map, char e, char o, char f)
{
	if (e == o || e == f || o == f)
		return (0);
	map->empty = e;
	map->obs = o;
	map->full = f;
	return (1);
}

void	ft_print_mapinfo(t_map *map)
{
	ft_putstr("height ");
	ft_putnbr(map->height);
	ft_putstr("\n");
	ft_putstr("length");
	ft_putnbr(map->length);
	ft_putstr("\n");
	ft_putstr("empty");
	ft_putnbr(map->empty);
	ft_putstr("\n");
	ft_putstr("obstacle");
	ft_putnbr(map->obs);
	ft_putstr("\n");
	ft_putstr("full ");
	ft_putnbr(map->full);
	ft_putstr("\n");
}

void	ft_print_igrid(t_map *map)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (map->i_grid[y] && y < map->height)
	{
		if (x < map->length)
		{
			if (map->i_grid[y][x] > -1)
				ft_putnbr(map->i_grid[y][x]);
			x++;
		}
		else
		{
			ft_putchar('\n');
			y++;
			x = 0;
		}
	}
}

void	ft_print_grid(t_map *map, int *square)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (y < map->height - 1)
	{
		if (x < map->length)
		{
			if (y > (square[1] - square[0]) && x > (square[2] - square[0])
				&& y <= square[1] && x <= square[2])
				ft_putchar(map->full);
			else if (map->i_grid[y][x] == 0)
				ft_putchar(map->obs);
			else
				ft_putchar(map->empty);
			x++;
		}
		else
		{
			x = 0;
			ft_putchar('\n');
			y++;
		}
	}
}
