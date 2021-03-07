/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 07:11:34 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/24 08:04:43 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_is_prime(int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (nb <= 0)
		return (0);
	while (i != nb)
	{
		i++;
		if ((nb % i) == 0)
			j++;
	}
	if (j == 2)
		return (1);
	return (0);
}

int main() 
{
	 int nb = 1;
	 printf("%d\n", ft_is_prime(nb));
}