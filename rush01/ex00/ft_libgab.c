/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libgab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:05:51 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/21 09:10:20 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_print_dev(char **tab)
{
	int		row;
	int		col;
	int		p__;

	row = -1;
	p__ = -1;
	while(++p__ < g_RC * 10)
	{
		ft_putchar('-');
	}
	ft_putchar('\n');
	while (row++ < g_RC + 1)
	{
		col = -1;
		while (col++ < g_RC + 1)
		{
			ft_putchar(tab[row][col]);
			if (col != g_RC + 1)

			write(1, "  |  ", 5);
		}
	ft_putchar('\n');
	p__ = -1;
	while(++p__ < g_RC * 10)
	{
		ft_putchar('-');
	}
	ft_putchar('\n');
	}
	ft_putchar('\n');
	return 0;
}

//version du print standard
int		ft_print(char **tab)
{
	int 	i;
	int		j;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			ft_putchar(tab[i][j]);
			if (j != 4)
				ft_putchar(' ');
		}
	ft_putchar('\n');
	}
	return 0;
}

int check_errors(char *str)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] != ' ')
			++count;
		if (str[i] < '1' && str[i] > '9' && str[i] != ' ')
			return (401);
	}
	printf("ft_libgab.c || Before 402 - count: %d\n", count);
	if (!(count % 4 == 0))
		return (402);
	g_RC = count / 4;
	printf("g_RC: %d\n", g_RC);
	i = 0;
	while (str[i + 1])
	{
		if (str[i] < '1' || str[i] > g_RC + '0')
			return (403);
		i += 2;
	}
		return(1);
}
