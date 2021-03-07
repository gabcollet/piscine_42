/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:03:40 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/24 11:57:21 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 0)
	{
		while (i < (nb / i))
			i++;
		if ((i * i) == nb)
			return (i);
	}
	return (0);
}

int main() 
{
	 int nb = -991;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 0;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 1;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 2;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 1640045925;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 2147395600;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 2147483646;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 1087482529;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 1150749640;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 68873401;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 969167491;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 15460624;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 1587856883;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 69438889;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 569432020;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 1512743236;
	 printf("%d\n", ft_sqrt(nb));
	 nb = 965831894;
	 printf("%d\n", ft_sqrt(nb));
}
