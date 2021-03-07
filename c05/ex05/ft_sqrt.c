/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:03:40 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/24 11:58:26 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 0)
	{
		while (i < (nb / i))
			i++;
		if ((i * i) == nb)
			return (i);
	}
	return (0);
}
