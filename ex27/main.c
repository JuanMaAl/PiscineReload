/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:40:47 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/19 10:22:54 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	or_files(char *pathname);

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	if (argc == 2)
		or_files(argv[1]);
	return (0);
}
