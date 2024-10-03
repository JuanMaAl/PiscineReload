/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:59:01 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/13 19:17:32 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers_array;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	numbers_array = NULL;
	if (min >= max)
		return (numbers_array);
	numbers_array = malloc(len * sizeof(int));
	if (!numbers_array)
		return (0);
	while (i < len)
	{
		numbers_array[i] = min + i;
		i++;
	}
	return (numbers_array);
}

/*#include <stdio.h>
int	main(void)
{
	int	*numbers;
	int	i;
	int	min;
	int	max;
	int	len;

	i = 0;
	min = -10;
	max = 8;
	len = max - min;
	numbers = ft_range(min, max);
	while(i < len)
	{
		printf("%d\n", numbers[i]);
		i++;
	}
	return (0);
}*/
