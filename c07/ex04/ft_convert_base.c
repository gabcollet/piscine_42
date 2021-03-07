/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:11:12 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/28 17:11:07 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_base(char *base);
int		ft_repeat_char(char c, char *base);

int		ft_atoi_base(char *nbr, char *base_from)
{
	int	chiffre;
	int	signe;
	int i;
	int	val_base;

	i = 0;
	signe = 1;
	chiffre = 0;
	val_base = ft_strlen(base_from);
	while ((nbr[i] >= '\t' && nbr[i] <= '\r') || nbr[i] == ' ')
		nbr++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signe = signe * -1;
		nbr++;
	}
	while (ft_repeat_char(nbr[i], base_from) >= 0)
	{
		chiffre = (chiffre * val_base) + (ft_repeat_char(nbr[i], base_from));
		nbr++;
	}
	return (chiffre * signe);
}

char	*ft_swap(char *tab, int size)
{
	int		temp;
	int		i;
	int		j;

	i = 0;
	j = size - 1;
	if (tab[i] == '-')
		i++;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
	return (tab);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	char	*tab;
	int		i;
	int		j;

	nbr_l = nbr;
	i = 0;
	j = 0;
	tab = (char*)malloc(sizeof(char) * 20);
	if (nbr_l < 0)
	{
		nbr_l = -nbr_l;
		tab[i] = ('-');
		i++;
	}
	if (nbr_l == 0)
		tab[i] = (base[0]);
	while (nbr_l > 0)
	{
		tab[i] = base[nbr_l % ft_strlen(base)];
		nbr_l = nbr_l / ft_strlen(base);
		i++;
	}
	return (ft_swap(tab, i));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr2;
	char	*nbr3;

	if ((ft_check_base(base_from) == 0) || (ft_check_base(base_to) == 0))
		return (0);
	nbr2 = ft_atoi_base(nbr, base_from);
	nbr3 = ft_putnbr_base(nbr2, base_to);
	return (nbr3);
}
