/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:43:28 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/13 16:05:35 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int c, int d)
{
	ft_putchar(c / 10 + 48);
	ft_putchar(c % 10 + 48);
	ft_putchar(' ');
	ft_putchar(d / 10 + 48);
	ft_putchar(d % 10 + 48);
	if (c != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			b++;
		}
		a++;
	}
}
