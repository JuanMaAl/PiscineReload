/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:47:19 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/12 10:01:35 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*#include <stdio.h>
int	main(void)
{
	int	number1;
	int	number2;
	int	*a;
	int	*b;

	number1 = 24;
	number2 = 42;
	a = &number1;
	b = &number2;
	printf("%d\n", number1);
	printf("%d\n", number2);
	ft_swap(a, b);
	printf("%d\n", number1);
	printf("%d\n", number2);
	return (0);
}*/
