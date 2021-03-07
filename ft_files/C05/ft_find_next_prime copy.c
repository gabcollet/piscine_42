/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime copy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 08:17:16 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/25 08:08:53 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// anything less than 0 to 3 = 2 
// is it divisible by 2 
 

int 	ft_find_next_prime(int nb)
{
	unsigned int 	i;

	if ( nb <= 2)
		return 2;
	if ( nb % 2 == 0)
		nb++;
	
	i = 3;
	while (i * i <= (unsigned int)nb)
	{
		if(nb % i == 0)
		{
			nb += 2;
			i = 1;
		}
		i+=2;
	}
	return (nb);
}

int main() 
{
	 printf("%d\n", ft_find_next_prime(-2847));
        printf("%d\n", ft_find_next_prime(0));
        printf("%d\n", ft_find_next_prime(1));
        printf("%d\n", ft_find_next_prime(2));
        printf("%d\n", ft_find_next_prime(7853));
        printf("%d\n", ft_find_next_prime(78989));
        printf("%d\n", ft_find_next_prime(2147483643));
        printf("%d\n", ft_find_next_prime(2147483645));
        printf("%d\n", ft_find_next_prime(2147483646));
        printf("%d\n", ft_find_next_prime(2147483647));
        printf("%d\n", ft_find_next_prime(16906));
        printf("%d\n", ft_find_next_prime(143883));
        printf("%d\n", ft_find_next_prime(371726));
        printf("%d\n", ft_find_next_prime(89639));
        printf("%d\n", ft_find_next_prime(346152));
}