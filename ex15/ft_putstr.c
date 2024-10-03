/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:19:27 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/12 15:38:27 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char  *message;

	message = "Hello 42!";
	ft_putstr(message);
}
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
