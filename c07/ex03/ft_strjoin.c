/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:23:57 by gcollet           #+#    #+#             */
/*   Updated: 2021/03/03 10:24:07 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strlen_total(int size, char **strs, char *sep)
{
	int i;
	int len;
	int len_total;

	i = 0;
	len_total = 0;
	while (i != size)
	{
		len = ft_strlen(strs[i]);
		if (i < (size - 1))
			len += ft_strlen(sep);
		len_total += len;
		i++;
	}
	return (len_total);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	if (size == 0)
	{
		tab = (char *)malloc(sizeof(char) * 1);
		tab[0] = '\0';
		return (tab);
	}
	else
		tab = (char*)malloc(sizeof(char) * ft_strlen_total(size, strs, sep));
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < (size - 1))
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
