/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:00:53 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/28 17:22:20 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(int) * (max - min));
	while (min != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
