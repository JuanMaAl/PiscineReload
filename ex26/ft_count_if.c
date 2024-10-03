/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:08:57 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/17 10:18:45 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}

/*#include <stdio.h>
int	count_hi(char *tab)
{	
	printf("%s\n", tab);
	if ((tab[0] == 'H') && (tab[1] == 'i'))
		return (1);
	return (0);
}

int	main(void)
{
	char *tab[] = {"Hi", "Bye", "Hi", "Hi", 0};
	printf("%d\n", ft_count_if(tab, count_hi));
	return (0);
}*/
