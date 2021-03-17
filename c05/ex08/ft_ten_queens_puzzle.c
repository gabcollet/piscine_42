/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gab <gab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:53:07 by gab               #+#    #+#             */
/*   Updated: 2021/03/17 14:22:01 by gab              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_soluce(int tab[10][10])
{
	int i = 0;
	int j = 0;
/* 	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			ft_putchar(tab[i][j] + 48);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
 */
	i = 0;
	j = 0;
	while (j < 10)
	{
		int i = 0;
		while (tab[i][j] != 1)
		{
			i++;
		}
		ft_putchar(i + 48);
		j++;
	}
	ft_putchar('\n');
}

int		ft_verif(int tab[10][10], int row, int col)
{
	int i;
	int j;
	
	i = 0;
	while (i < col)
	{
		if (tab[row][i] == 1)
			return (0);
		i++;
	}
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (tab[i][j] == 1)
			return (0);
		i--;
		j--;
	}
	i = row;
	j = col;
	while (j >= 0 && i < 10)
	{
		if (tab[i][j] == 1)
			return (0);
		i++;
		j--;
	}
	return (1);
}

int 	ft_soluce(int tab[10][10], int row, int col)
{
	int i = row;
	if (col >= 10)
		return (1);
	while (i < 10)
	{
		if (ft_verif(tab, i, col) == 1)
		{
			tab[i][col] = 1;
			if (ft_soluce(tab, 0, col + 1) == 1)
			{
				return (1);
			}
			tab[i][col] = 0;
		}
		i++;
	}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int row = 0;
/* 	int i = 0; */
	int tab[10][10] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
	if (ft_soluce(tab, row, 0) == 0)
	{
		ft_putchar('x');
	}
	else 
	{
		ft_print_soluce(tab);
	}
	return (0);
}

int main()
{
	ft_ten_queens_puzzle();
	return (0);
}