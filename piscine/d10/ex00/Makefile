# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnella <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 14:38:47 by cnella            #+#    #+#              #
#    Updated: 2018/10/30 18:31:18 by cnella           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfr.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c 

HEADER = ./includes/

all:
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) *.o
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all



