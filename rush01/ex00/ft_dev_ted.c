/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dev_ted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:40:15 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 08:40:58 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_set_lines(char **tab,char *input)
{
	int i;
	int row;
	int col;

	i = 0;
	row = 0;
	col = 1;
	while(g_RC != i / 2)
	{ 
		tab[row][col++] = input[i];
		i += 2;
	}
	row = g_RC + 1;
	col = 1;
	while(g_RC * 2 != i / 2)
	{ 
		tab[row][col++] = input[i];
		i += 2;
	}
}

void	ft_set_columns(char **tab,char *input)
{
	int i;
	int row;
	int col;
	
	i = g_RC * 4;
	row = 1;
	col = 0;
	while(g_RC * 3 != i / 2)
	{ 
		tab[row++][col] = input[i];
		i += 2;
	}
	row = 1;
	col = g_RC + 1;
	while(g_RC * 4 != i / 2)
	{ 
		tab[row++][col] = input[i];
		i += 2;
	}	
}

void	ft_set_full(char **tab)
{
	int row;
	int col;

	row = - 1;
	while (++row != g_RC + 2)
	{
		col = -1;
		while (++col != g_RC + 2)
		{
			if ((row == 0 || row == g_RC + 1) && 
				(col == 0 || col == g_RC + 1))
				tab[row][col] = '!';
			else
				tab[row][col] = '&';
		}
	}
}

void	ft_set_tab(char **tab,char *input)
{
	ft_set_full(tab);
	ft_set_lines(tab, input);
	ft_set_columns(tab, input);
}

