/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 06:48:46 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/23 09:09:11 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
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

int		ft_atoi_base(char *str, char *base)
{
	int	chiffre;
	int	signe;
	int i;
	int	val_base;

	i = 0;
	signe = 1;
	chiffre = 0;
	val_base = ft_strlen(base);
	if (ft_check_base(base) == 0)
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		str++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		str++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		chiffre = (chiffre * val_base) + str[i] - '0';
		str++;
	}
	chiffre *= signe;
	printf("%d\n", chiffre);
	return (chiffre * signe);
}

int main()
{
	char str[] = " ---+--+10011010010ab567"; 
	char *dec = "0123456789";
	char *bi = "01";
	char *hexa = "0123456789ABCDEF";
	char *octa = "poneyvif";
//	ft_atoi_base(str, dec);
	ft_atoi_base(str, bi);
//	ft_atoi_base(str, hexa);
//	ft_atoi_base(str, octa);
	return 0;
}

