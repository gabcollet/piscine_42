/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gab <gab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:01:37 by gab               #+#    #+#             */
/*   Updated: 2021/03/13 13:16:51 by gab              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(unsigned int nbr)
{
	char	temp[100];
	char	*base;
	int		i;

	base = "0123456789abcdef";
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	i = 0;
	while (nbr > 0)
	{
		temp[i] = base[nbr % 16];
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
		ft_putchar(temp[i]);
}

void	ft_print_hexa(char *str)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
			ft_putchar('0');
		ft_putnbr_base(str[i]);
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void	ft_print_addr(void *str)
{
	int i;

	i = 0;
	while (i <= 8)
	{
		ft_putchar('0');
		if (i == 7)
			ft_putchar('1');
		i++;
	}
	ft_putnbr_base((unsigned long) str);
	ft_putchar(':');
	ft_putchar(' ');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	unsigned char	*str;
	int				count;
	
	count = 0;
	str = (unsigned char *)addr;
	i = 0;
	if (size == 0)
		return (addr);
	ft_print_addr(&str[i]);
	ft_print_hexa(&str[i]);
	while (i < size)
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
		{
			ft_putchar('.');
		}
		else 
			ft_putchar(str[i]);
		count++;
		if (count == 16)
		{
			ft_putchar('\n');
			ft_print_addr(&str[i]);
			ft_print_hexa(&str[i]);
			count = 0;
		}
		i++;
	}
	ft_putchar('\n');
	return (addr);
}

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int main()
{
	char *str = "Bonjour les aminches\n\n\nc est fo u\1tout\2ce qu on peut faire avec...print_memory....lol.lol. .";
	ft_print_memory(str, ft_strlen(str));
}