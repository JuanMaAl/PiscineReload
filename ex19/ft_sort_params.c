/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:27:54 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/13 13:19:47 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int	ft_compare(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_argv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	ft_sort_args(char **argv, int i)
{
	char	*str_swap;

	if ((ft_compare(argv[i], argv[i + 1])) > 0)
	{
		str_swap = argv[i];
		argv[i] = argv[i + 1];
		argv[i + 1] = str_swap;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	while (n < argc + 1)
	{
		while (i < argc -1)
		{
			ft_sort_args(argv, i);
			i++;
		}
		i = 1;
		n++;
	}
	ft_print_argv(argc, argv);
	return (0);
}

/*#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
