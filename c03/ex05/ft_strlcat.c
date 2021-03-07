/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:19:54 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/22 07:54:07 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_src;
	unsigned int len_dest;
	unsigned int i;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	i = 0;
	if (len_dest < size)
		len_src = len_src + len_dest;
	else
		len_src = len_src + size;
	if (size > 0)
	{
		while (src[i] && (i + len_dest) < size - 1)
		{
			dest[i + len_dest] = src[i];
			i++;
		}
		dest[i + len_dest] = '\0';
	}
	return (len_src);
}
