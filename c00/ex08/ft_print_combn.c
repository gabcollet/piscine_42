/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gab <gab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:01:58 by gab               #+#    #+#             */
/*   Updated: 2021/03/12 16:02:02 by gab              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_n(int tab[], int n)
{
	int i;
	int y;
	
	i = 0;
	y = 1;
	while (i < n-1)
	{
		if ((tab[i] >= tab[i+1]))
		{
			y = 0;
		}
		i++;
	}
	if (y == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i]);
			i++;
		}
		if (tab[0] != ((10 - n) + 48))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_while(int nb[], int k, int n)
{
	if (k == n - 1)
	{
		nb[k] = '0';
		while (nb[k] <= '9')
		{
			ft_n(nb, n);
			nb[k]++;
		}
	}
	else
	{
		nb[k] = '0';
		while (nb[k] <= '9')
		{
			ft_while(nb, k + 1, n);
			nb[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int nb[n];

	ft_while(nb, 0, n);
}

int main()
{
	ft_print_combn(4);
}