/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 08:42:05 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/23 07:30:48 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	chiffre;
	int	signe;
	int i;

	i = 0;
	signe = 1;
	chiffre = 0;
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
		chiffre = (chiffre * 10) + str[i] - '0';
		str++;
	}
	return (chiffre * signe);
}
