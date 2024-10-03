/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:14:50 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/13 16:53:40 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strdup(char *src)
{
	char	*src_dup;
	int		len;

	len = ft_strlen(src) + 1;
	src_dup = malloc(len * sizeof(char));
	if (src_dup == NULL)
		return (0);
	src_dup = ft_strcpy(src, src_dup);
	return (src_dup);
}

/*#include <stdio.h>
int	main(void)
{
	char	*src;

	src = "Hello 42!";
	printf("%s\n", ft_strdup(src));
	return (0);
}*/
