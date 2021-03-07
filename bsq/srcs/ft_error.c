/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:32:45 by sfournie          #+#    #+#             */
/*   Updated: 2021/03/03 09:33:59 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

void	ft_error(int code)
{
	if (code == 1)
		ft_putstr("map error\n");
}

void	ft_errorstr(char *error)
{
	if (*error)
		ft_putstr(error);
}
