/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:50:29 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/26 10:56:43 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min > max)
		return (0);
	if (!(tab = malloc(sizeof(*tab) * (max - min))))
		return (-1);
	else 
		tab = (malloc(sizeof(*tab) * (max - min)));
	while (min != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

int main()
{
	int i = 2;
	int j = 6;
	int **range;
	int *range1;
	int range2 = 5;
	range1 = &range2;
	range = &range1; 
	printf("%d\n", ft_ultimate_range(range , i, j));
}
