/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:37:08 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/16 15:30:14 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;
	int		debut;
	int		fin;

	i = 0;
	debut = 0;
	fin = size - 1;
	while (debut < fin)
	{
		temp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = temp;
		debut++;
		fin--;
	}
	while (i < size)
	{
	printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int		main()
{
	int		arr[] = {1, 2, 3, 4, 5};
	int		n;
	
	n = sizeof(arr) / sizeof(arr[0]);
	ft_rev_int_tab(arr, n);
}
