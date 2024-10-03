/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:23:53 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/12 11:36:55 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i != nb)
	{
		if (i * i > nb)
			return (0);
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(26));
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(144));
	return (0);
}*/
