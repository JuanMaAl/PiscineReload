# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#   By: juanmar2                                   +#+  +:+       +#+          #
#      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+             #
#    Created: 2024/09/16 15:52:12 by juanmar2          #+#    #+#              #
#    Updated: 2024/09/16 18:33:55 by juanmar2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: libft.a

#this rule compiles the main program
libft.a: ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ar rcs libft.a *.o

ft_putchar.o: srcs/ft_putchar.c
	cc -Wall -Wextra -Werror -c srcs/ft_putchar.c	

ft_putstr.o: srcs/ft_putstr.c
	cc -Wall -Wextra -Werror -c srcs/ft_putstr.c

ft_strcmp.o: srcs/ft_strcmp.c
	cc -Wall -Wextra -Werror -c srcs/ft_strcmp.c

ft_strlen.o: srcs/ft_strlen.c
	cc -Wall -Wextra -Werror -c srcs/ft_strlen.c

ft_swap.o: srcs/ft_swap.c
	cc -Wall -Wextra -Werror -c srcs/ft_swap.c

clean:
	rm -f *.o

fclean:
	rm -f *.o
	rm -f libft.a

re: 
	rm -f *.o
	rm -f libft.a
	make
