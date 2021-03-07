# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfournie <marvin@42quebec.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 10:45:18 by sfournie          #+#    #+#              #
#    Updated: 2021/03/01 10:52:54 by sfournie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
CC		= cc

SRC		= $(wildcard ./srcs/*.c)
OBJS	= $(SRC:.c=.o)
RM		= rm -f

NAME	= bsq

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o ${NAME} $(CFLAGS) $(OBJS)

clean:
			RM srcs/*.o

fclean:		clean
			RM $(NAME)

re:			fclean all
