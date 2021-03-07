/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy copie.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:19:08 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/25 14:47:40 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return(dest);
}

int	main()
{
	char str1[3] = "";
	char str2[] = "Popcorn";


	printf("%s\n", ft_strcpy(str1, str2));
    printf("%s\n", strcpy(str1, str2));

	return 0;
}
