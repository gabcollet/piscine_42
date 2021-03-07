/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 08:17:16 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/24 14:24:23 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	unsigned int	i;

	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	i = 3;
	while (i * i <= (unsigned int)nb)
	{
		if (nb % i == 0)
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}
