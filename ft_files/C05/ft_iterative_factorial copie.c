/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 10:20:30 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/23 13:49:52 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_iterative_factorial(int nb)
{
	int i;
	int nb_temp;

	nb_temp = nb;
	if (nb > 0)
	{
		while (nb > 1)
		{
			i = nb_temp * (nb - 1);
			nb_temp = i;
			--nb;
		}
		return (i);
	}
	else if (nb == 0)
		return (1);
	return (0);
}

int main() {
	 int nb = 0;
	 ft_iterative_factorial(nb);
	 printf("%d\n", ft_iterative_factorial(nb));
}
