/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:06:06 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/12 10:47:25 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptr_div;
	int	*ptr_mod;

	a = 26;
	b = 5;
	div = 0;
	mod = 0;
	ptr_div = &div;
	ptr_mod = &mod;
	printf("%d\n", div);
	printf("%d\n", mod);
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("%d\n", div);
	printf("%d\n", mod);
}*/
