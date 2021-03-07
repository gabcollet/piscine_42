/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 22:36:03 by tonted            #+#    #+#             */
/*   Updated: 2021/02/20 22:48:55 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_is_in_row(char c, int row, char **tab)
{
	int col;

	col = 0;
	while(++col <= g_RC)
		if(tab[row][col] == c)
			return (1);
	return (0);
}

int		ft_is_in_col(char c, int col, char **tab)
{
	int row;

	row = 0;
	while(++row <= g_RC)
		if(tab[row][col] == c)
			return (1);
	return (0);
}