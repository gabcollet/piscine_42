/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 06:57:36 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/16 08:25:08 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{	
	*********nbr = 42;
}

int		main(void)
{
	int		i;
	int 	*nbr;
	int		**nbr2;
	int		***nbr3;
	int		****nbr4;
	int		*****nbr5;
	int		******nbr6;
	int		*******nbr7;
	int		********nbr8;
	int		*********nbr9;

	nbr = &i;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	i = 42652;
	ft_ultimate_ft(nbr9);
	printf("%d\n",i);
}
