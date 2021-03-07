/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:49:06 by sfournie          #+#    #+#             */
/*   Updated: 2021/03/04 10:21:38 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int		ft_handle_lines(t_map *map, char *fstr, int *pos)
{
	int error;

	error = 1;
	if (*pos == 0)
	{
		if (!(ft_lineone(map, fstr, pos)))
			return (0);
		map->grid = (char **)malloc(sizeof(char *) * (map->height));
		map->i_grid = (int **)malloc(sizeof(int *) * (map->height));
		if (!(ft_linelength(map, fstr, pos)))
			return (0);
	}
	while ((error = ft_populate_igrid(map, fstr, pos)) != 2)
	{
		if (!error)
			return (1);
	}
	return (1);
}

int		ft_lineone(t_map *map, char *str, int *pos)
{
	int i;
	int j;
	int n_lines;

	i = 0;
	n_lines = 0;
	if (!str[0] || !ISNUM)
		return (0);
	while (str[i] && (ISNUM || ISPRINT))
		i++;
	if (str[i] && str[i] == '\n')
	{
		if (i - 4 <= 0 && !(str[i - 4] >= 48 && str[i - 4] <= 57))
			return (0);
		j = 0;
		while (j <= i - 4)
		{
			n_lines = n_lines * 10 + (str[j++] - '0');
		}
		if (!(ft_set_map_values(map, str[j], str[j + 1], str[j + 2])))
			return (0);
		map->height = n_lines;
		*pos = (j + 4);
	}
	return (1);
}

int		*ft_glines(char *str, t_map *map, int i, int *pos)
{
	int *i_str;
	int n;

	n = 0;
	i_str = (int *)malloc(sizeof(int) * map->length);
	while (str[i] && (str[i] == map->empty || str[i] == map->obs))
	{
		if (str[i++] == map->obs)
			i_str[n] = 0;
		else
			i_str[n] = 1;
		if (n == map->length)
		{
			if (i_str[n] != '\n')
				return (0);
		}
		n++;
	}
	if (!str[i] || str[i] != '\n' || (n > map->length || n < map->length))
		return (0);
	i_str[i] = '\0';
	*pos = i + 1;
	return (i_str);
}

int		*ft_getlines(int *dest, char *str, int *pos, t_map *map)
{
	int i;
	int *i_str;

	i = *pos;
	if (!str[i] || str[i] == '\n')
		return (0);
	i_str = ft_glines(str, map, i, pos);
	free(dest);
	return (i_str);
}

int		ft_realloc_read(int fdesc, char *str, int *pos)
{
	free(str);
	str = (char *)malloc(sizeof(char) * FILEBUFF);
	if ((read(fdesc, str, FILEBUFF)) == -1)
	{
		free(str);
		return (0);
	}
	*pos = 0;
	return (1);
}

int		ft_linelength(t_map *map, char *str, int *pos)
{
	int n;
	int i;

	n = 0;
	i = *pos;
	if (!str[i] || str[i] == '\n')
		return (0);
	while (str[i] && (str[i] == map->empty || str[i] == map->obs))
	{
		i++;
		n++;
	}
	if (!str[i] || str[i] != '\n')
		return (0);
	map->length = n;
	return (1);
}
