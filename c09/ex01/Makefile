# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gab <gab@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 12:12:14 by gab               #+#    #+#              #
#    Updated: 2021/03/24 13:18:56 by gab              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS 	=  srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS 	= ${SRCS:.c=.o}
HEADER	= includes

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

.c.o:
					${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o} 

all: 		${NAME}

$(NAME):	${OBJS}
					ar rc ${NAME} ${OBJS}

clean:
					rm -f ${OBJS}

fclean: 	clean
					rm -f $(NAME)

re: 		fclean all
