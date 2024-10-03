/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:01:17 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/19 12:41:35 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}

/*#include <limits.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", INT_MAX);
	printf("%d\n", ft_recursive_factorial(10));
	printf("%d\n", ft_recursive_factorial(11));
	printf("%d\n", ft_recursive_factorial(12));
	printf("%d\n", ft_recursive_factorial(13));
	return (0);
}*/
