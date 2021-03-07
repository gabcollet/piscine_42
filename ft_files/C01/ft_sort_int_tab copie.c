/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:52:49 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/17 09:48:28 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int* x, int* y)
{
	int		temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		min_element;

	i = 0;
	while (i < size - 1)
	{
		min_element = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_element])
			{
				min_element = j;
			}
			j++;
		}
/* part for the sw ap */
		ft_swap(&tab[min_element], &tab[i]);
		i++;
	}
/* printing */
	i = 0;
	while (i < size)
	{
	printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int		main()
{
	int		arr[] = {5, 4, 4, 6, 2, 0,};
	int		n;
	
	n = sizeof(arr) / sizeof(arr[0]);
	ft_sort_int_tab(arr, n);
}

