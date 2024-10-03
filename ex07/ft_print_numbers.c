/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:06:12 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/12 11:43:42 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	actual_number;

	actual_number = '0';
	while (actual_number <= '9')
	{
		ft_putchar(actual_number);
		actual_number++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
