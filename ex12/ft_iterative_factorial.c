/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:49:02 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/19 12:42:17 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb >= 2)
	{
		result *= nb;
		--nb;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	int number0;
	int number;
	int number2;
	int number3;
	int number4;
	
	number0 = 0;
	number = 5;
	number2 = 6;
	number3 = 7;
	number4 = -5;
	printf("%d\n", ft_iterative_factorial(number0));
	printf("%d\n", ft_iterative_factorial(number));
	printf("%d\n", ft_iterative_factorial(number2));
	printf("%d\n", ft_iterative_factorial(number3));
	printf("%d\n", ft_iterative_factorial(number4));
	return (0);
}*/
