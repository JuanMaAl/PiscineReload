/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:58:30 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/16 19:05:44 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*#include <stdio.h>
void	print_num_plus_2(int	number)
{
	printf("%d\n", number + 2);
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, print_num_plus_2);
	return (0);
}*/
