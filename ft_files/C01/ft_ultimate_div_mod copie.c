/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:49:37 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/16 11:00:14 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int		main(void)
{
	int i;
	int j;
	i = 15;
	j = 10;
	ft_ultimate_div_mod(&i, &j);
	printf("%d\n", j);
}
