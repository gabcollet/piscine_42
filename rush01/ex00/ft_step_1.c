/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_step.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 20:21:02 by tonted            #+#    #+#             */
/*   Updated: 2021/02/20 22:54:59 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	In the first step we put the total line if the view is the max range, and
**	we put the max range if the view is 1.
*/

#include "header.h"

void	ft_first_step_up(char **tab)
{
	int row;
	int col;
	int index;

	row = 0;
	col = 0;
	while(++col <= g_RC)
	{
		index = 0;
		if(tab[row][col] == g_RC + '0')
			while(++index <= g_RC)
				tab[index][col] = index + '0';
		else if (tab[row][col] == '1')
			tab[++index][col] = g_RC + '0';
	}
}

void	ft_first_step_right(char **tab)
{	
	int row;
	int col;
	int index;

	row = 0;
	col = g_RC + 1;
	while (++row <= g_RC)
	{
		index = 0;
		if (tab[row][col] == g_RC + '0')
			while (++index <= g_RC)
				tab[row][index] = g_RC - index + 1 + '0';
		else if (tab[row][col] == '1')
			tab[row][g_RC] = g_RC + '0';
	}	
}

void	ft_first_step_down(char **tab)
{
	int row;
	int col;
	int index;

	row = g_RC + 1;
	col = 0;
	while (++col <= g_RC)
	{
		index = 0;
		if (tab[row][col] == g_RC + '0')
			while (++index <= g_RC)
				tab[index][col] = g_RC - index + 1 + '0';
		else if (tab[row][col] == '1')
			tab[g_RC][col] = g_RC + '0';
	}
}

void	ft_first_step_left(char **tab)
{
	int row;
	int col;
	int index;

	row = 0;
	col = 0;
	while (++row <= g_RC)
	{
		index = 0;
		if (tab[row][col] == g_RC + '0')
			while (++index <= g_RC)
				tab[row][index] = index + '0';
		else if (tab[row][col] == '1')
			tab[row][++index] = g_RC + '0';
	}		
}

void	ft_first_step(char **tab)
{	
	ft_first_step_up(tab);
	ft_first_step_right(tab);
	ft_first_step_down(tab);
	ft_first_step_left(tab);
}