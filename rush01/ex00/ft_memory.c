/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:35:03 by tonted            #+#    #+#             */
/*   Updated: 2021/02/21 08:58:48 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_malloc_tab_memory()
{
	int i;
	int size;
	char **tab;
	
	i = -1;
	size = g_RC + 2;
	printf("ft_memory.c || size: %d\n",size);
	tab = (char **)malloc(size * size * sizeof(char));
	while(i++ < size)
		tab[i] = (char *)malloc(size * sizeof(char));
	return (tab);
}

void	ft_free_tab_memory(char **tab)
{
	int i;
	int size;
	
	i = 0;
	size = g_RC + 2;
	while(i < size)
		free(tab[i++]);
	free(tab);

}