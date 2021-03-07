/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:14:15 by llaplant          #+#    #+#             */
/*   Updated: 2021/02/13 14:08:19 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_find_c(int i_y, int i_x, int x, int y)
{
	char c;

	if ((i_y == 1 && i_x == 1) || (i_y == 1 && i_x == x))
		c = 65;
	else if ((i_y == y && i_x == 1) || (i_y == y && i_x == x))
		c = 67;
	else if ((i_y == 1 || i_x == 1) || (i_y == y || i_x == x))
		c = 66;
	else
		c = 32;
	return (c);
}

void	rush(int x, int y)
{
	int i_x;
	int i_y;

	i_x = 1;
	i_y = 1;
	while (i_y <= y)
	{
		while (i_x <= x)
		{
			ft_putchar(ft_find_c(i_y, i_x, x, y));
			i_x++;
		}
		i_y++;
		ft_putchar(10);
		i_x = 1;
	}
}
