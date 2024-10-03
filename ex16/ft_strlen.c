/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:41:31 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/12 15:58:03 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "\0";
	str2 = "Hola 42!";
	printf("%lu\n", strlen(str1));
	printf("%lu\n", strlen(str2));
	printf("%d\n", ft_strlen(str1));
	printf("%d\n", ft_strlen(str2));
	return (0);
}*/
