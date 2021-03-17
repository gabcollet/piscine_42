/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gab <gab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:53:07 by gab               #+#    #+#             */
/*   Updated: 2021/03/17 15:43:07 by gab              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_soluce(int tab[][10])
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		int j = 0;
		while (tab[i][j] != 1)
		{
			j++;
		}
		ft_putchar(j + 48);
		i++;
	}
	ft_putchar('\n');
}

int		ft_verif(int tab[][10], int row, int col)
{
	int i;
	int j;
	
	i = 0;
	while (i < row)
	{
		if (tab[i][col] == 1)
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
	while (i >= 0 && j < 10)
	{
		if (tab[i][j] == 1)
			return (0);
		i--;
		j++;
	}
	return (1);
}

int 	ft_soluce(int tab[][10], int row, int *i)
{
	int col = 0;
	if (row == 10)
	{
		ft_print_soluce(tab);
		(*i)++;
	}
	while (col < 10)
	{
		if (ft_verif(tab, row, col))
		{
			tab[row][col] = 1;
			ft_soluce(tab, row + 1, i);
			tab[row][col] = 0;
		}
		col++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i = 0;
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
	ft_soluce(tab, 0, &i);
/* 	printf("%d\n", i); */
	return (i);
}

int main()
{
	ft_ten_queens_puzzle();
	return (0);
}