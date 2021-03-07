/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power copy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:46:11 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/24 11:31:19 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_recursive_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int main() {
	int nb = 3749;
	int power = -967;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 0;
	power = 0;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = -26;
	power = 0;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = -3443;
	power = 1;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 0;
	power = 2;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 1;
	power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 2;
	power = 4;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 7;
	power = 6;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 8;
	power = 7;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = -4;
	power = 8;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = -3;
	power = 10;
	printf("%d\n", ft_recursive_power(nb, power));
}