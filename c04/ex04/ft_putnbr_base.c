/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:57:31 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/28 11:17:18 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	char	nbr_temp[100];
	int		val_base;
	int		i;

	if (ft_check_base(base) == 0)
		return ;
	nbr_l = nbr;
	val_base = ft_strlen(base);
	if (nbr_l < 0)
	{
		nbr_l = -nbr_l;
		ft_putchar('-');
	}
	i = 0;
		if (nbr_l == 0)
		ft_putchar(base[0]);
	while (nbr_l > 0)
	{
		nbr_temp[i] = base[nbr_l % val_base];
		nbr_l = nbr_l / val_base;
		i++;
	}
	while (--i >= 0)
		ft_putchar(nbr_temp[i]);
}
