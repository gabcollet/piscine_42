/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:52:37 by sfournie          #+#    #+#             */
/*   Updated: 2021/03/03 09:49:28 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int	main(int argn, char **files)
{
	t_map	*maps;
	int		i;

	i = 1;
	if (argn > 1)
		maps = malloc(sizeof(t_map *) * argn - 1);
	while ((argn - i) >= 1)
	{
		if (!(ft_build_map(&maps[i - 1], files[i])))
			ft_error(1);
		i++;
	}
}
