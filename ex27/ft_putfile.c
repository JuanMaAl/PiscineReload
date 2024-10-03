/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:48:08 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/19 13:07:47 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putfile(char *str, ssize_t n_bytes)
{
	int	i;

	i = 0;
	while (i < n_bytes)
	{
		ft_putchar(str[i]);
		i++;
	}
}
