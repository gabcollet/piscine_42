/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:05:49 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/26 10:57:18 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min > max)
		return(NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	while (min != max)
	{
		tab[i] = min;
		printf("%d\n", tab[i]);
		i++;
		min++;
	}
	return (tab); 
}

int main()
{
	int i = 2;
	int j = 6;
	ft_range(i, j);
}