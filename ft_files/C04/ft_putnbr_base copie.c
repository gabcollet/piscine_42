/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:57:31 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/22 18:01:06 by gcollet          ###   ########.fr       */
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
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] > 126)			 //voir ici
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
	while (nbr_l > 0)
	{
		nbr_temp[i] = base[nbr_l % val_base];
		nbr_l = nbr_l / val_base;
		i++;
	}
	while (--i >= 0)
		ft_putchar(nbr_temp[i]);
}

int main()
{
  int nbr = -42;
  char *dec = "0123456789";
  char *bi = "01";
  char *hexa = "0123456789ABCDEF";
  char *octa = "poneyvif";
  ft_putnbr_base(nbr, dec);
  ft_putnbr_base(nbr, bi);
  ft_putnbr_base(nbr, hexa);
  ft_putnbr_base(nbr, octa);
  return 0;
}
