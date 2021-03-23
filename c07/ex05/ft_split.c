/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gab <gab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:21:15 by gab               #+#    #+#             */
/*   Updated: 2021/03/23 16:07:00 by gab              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_separateur(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset [i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_word(char c, char b, char *charset)
{
	return (!ft_separateur(c, charset) && ft_separateur(b, charset));
}

int ft_nb_words(char *str, char *charset)
{
	int i;
	int num;
	
	i = 0;
	num = 0;
	while (str[i])
	{
		if (ft_word(str[i], str[i - 1], charset) || 
			(!ft_separateur(str[i], charset) && i == 0))
			num++;
		i++;
	}
	return (num);
}

int *ft_sizeof_str(char *str, char *charset)
{
	int i;
	int index;
	int nb_words;
	int *size_str;

	i = 0;
	index = 0;
	nb_words = ft_nb_words(str, charset);
	size_str = (int *)malloc(sizeof(int) * nb_words);
	while (i <= nb_words)
	{
		size_str[i] = 0;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (!ft_separateur(str[i], charset))
			size_str[index]++;
		else if (i > 0 && !ft_separateur(str[i - 1], charset))
			index++;
		i++;
	}
	return (size_str);
}

char **ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		index;
	int		*size_str;

	i = -1;
	j = 0;
	index = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_nb_words(str, charset) + 1));
	size_str = ft_sizeof_str(str, charset);
	while (str[++i])
	{
		if (!ft_separateur(str[i], charset))
		{
			if (i == 0 || ft_word(str[i], str [i - 1], charset))
				tab[index] = (char *)malloc(sizeof(char) * size_str[index]);
			tab[index][j] = str[i];
			tab[index][++j] = '\0';
		}
		else if (i > 0 && !ft_separateur(str[i - 1], charset) && ++index)
			j = 0;
	}
	tab[ft_nb_words(str, charset)] = 0;
	return (tab);
}

int main()
{
	char *str = "1bonjour2les3amis4";
	char *charset = "1234567";
	char **split = ft_split(str, charset);
	int i = 0;
	while (split[i] != 0)
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}