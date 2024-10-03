/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   or_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:58:37 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/19 12:58:32 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putfile(char *str, ssize_t n_bytes);

int	open_file(char *pathname)
{
	int	fd;

	fd = open(pathname, O_RDONLY);
	return (fd);
}

void	print_file(int fd)
{
	char	buf[1024];
	ssize_t	n_bytes;

	n_bytes = read(fd, buf, 1023);
	close(fd);
	if (n_bytes == -1)
		ft_putstr("Cannot read file.\n");
	else
	{
		buf[n_bytes] = '\0';
		ft_putfile(buf, n_bytes);
	}
}

void	or_files(char	*pathname)
{
	int	fd;

	fd = open_file(pathname);
	print_file(fd);
}
