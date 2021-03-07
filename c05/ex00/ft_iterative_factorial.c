/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 10:20:30 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/23 18:00:41 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int nb_temp;

	nb_temp = nb;
	if (nb > 0)
	{
		while (nb > 1)
		{
			nb_temp = nb_temp * (nb - 1);
			--nb;
		}
		return (nb_temp);
	}
	else if (nb == 0)
		return (1);
	return (0);
}
