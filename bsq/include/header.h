/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 10:45:34 by sfournie          #+#    #+#             */
/*   Updated: 2021/03/03 09:32:50 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define ISPRINT	(str[i] >= 32 && str[i] <= 126)
# define ISNUM		(str[i] >= 48 && str[i] <= 57)
# define FILEBUFF	2000000
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef	struct	s_map
{
	int		height;
	int		length;
	char	empty;
	char	obs;
	char	full;
	int		fdesc;
	char	**grid;
	int		**i_grid;
}				t_map;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_putnbr(int nb);
void			ft_error(int code);
void			ft_errorstr(char *error);

int				ft_valid_char(char c);
int				ft_build_map(t_map *map, char *file);
void			ft_print_mapinfo(t_map *map);
void			ft_print_igrid(t_map *map);
void			ft_print_grid(t_map *map, int *square);
int				ft_populate_igrid(t_map *map, char *str, int *pos);
int				ft_set_map_values(t_map *map, char e, char o, char f);
int				ft_build_map();
int				*ft_find_size_square(int **tab, int len1, int len2);
int				ft_findmin(int **tab, int x, int y);
int				ft_handle_lines(t_map *map, char *fstr, int *pos);
int				ft_realloc_read(int fdesc, char *str, int *pos);
int				ft_lineone(t_map *map, char *fstr, int *pos);
int				ft_linelength(t_map *map, char *str, int *pos);
int				*ft_getlines(int *dest, char *str, int *pos, t_map *map);
#endif
