# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juanmar2                                   +#+  +:+       +#+         #
#       <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 11:37:49 by juanmar2          #+#    #+#              #
#    Updated: 2024/09/19 13:10:34 by juanmar2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: ft_display_file

ft_display_file: main.o ft_putchar.o ft_putstr.o ft_putfile.o or_files.o
	cc -Wall -Wextra -Werror main.o ft_put*.o or_files.o -o ft_display_file

main.o: main.c
	cc -Wall -Wextra -Werror -c main.c

ft_putchar.o: ft_putchar.c
	cc -Wall -Wextra -Werror -c ft_putchar.c

ft_putstr.o: ft_putstr.c
	cc -Wall -Wextra -Werror -c ft_putstr.c

or_files.o: or_files.c
	cc -Wall -Wextra -Werror -c or_files.c

ft_putfile.o: ft_putfile.c
	cc -Wall -Wextra -Werror -c ft_putfile.c

clean:
	rm -f main.o ft_putchar.o ft_putstr.o ft_putfile.o or_files.o

fclean:
	rm -f main.o ft_putchar.o ft_putstr.o ft_putfile.o or_files.o ft_display_file
