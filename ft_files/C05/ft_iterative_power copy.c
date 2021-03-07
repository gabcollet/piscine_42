/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:52:16 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/24 11:17:54 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		i *= (nb);
		--power;
	}
	return (i);
}

int main() {
	int nb = -1181;
	int power = -2057;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 0;
	power = 0;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 1380;
	power = 0;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = -4199;
	power = 1;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 1;
	power = 2;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 5;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 8;
	power = 6;
	printf("%d\n", ft_iterative_power(nb, power));	
	nb = -8;
	power = 7;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = -7;
	power = 8;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = -6;
	power = 9;
	printf("%d\n", ft_iterative_power(nb, power));	
	nb = -5;
	power = 10;
	printf("%d\n", ft_iterative_power(nb, power));
}
