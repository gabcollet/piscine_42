/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findsquare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:26:03 by gcollet           #+#    #+#             */
/*   Updated: 2021/03/03 09:41:17 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int		ft_findmin(int **tab, int x, int y)
{
	int m1;
	int m2;
	int m3;

	m1 = tab[y][x - 1];
	m2 = tab[y - 1][x];
	m3 = tab[y - 1][x - 1];
	if ((m1 < m2) && (m1 < m3))
		return (m1);
	if ((m2 < m1) && (m2 < m3))
		return (m2);
	if ((m3 < m1) && (m3 < m2))
		return (m3);
	if ((m1 == m2) || (m1 == m3))
		return (m1);
	if (m2 == m3)
		return (m2);
	return (0);
}

int		*ft_result(int **tab, int *result, int x, int y)
{
	if (tab[y][x] > result[0])
	{
		result[0] = tab[y][x];
		result[1] = y;
		result[2] = x;
	}
	return (result);
}

int		*ft_find_size_square(int **tab, int len1, int len2)
{
	int		x;
	int		y;
	int		*result;

	x = -1;
	y = -1;
	result = (int*)malloc(sizeof(int) * 3);
	result[0] = 0;
	while (++y < len1 - 1)
	{
		while (++x < len2)
		{
			if ((tab[y][x] > 0) && y != 0 && x != 0)
			{
				(tab[y][x] = (1 + ft_findmin(tab, x, y)));
				ft_result(tab, result, x, y);
			}
		}
		x = 0;
	}
	return (result);
}
