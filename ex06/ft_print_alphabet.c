/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:48:37 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/12 11:43:12 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	actual_letter;

	actual_letter = 'a';
	while (actual_letter <= 'z')
	{
		ft_putchar(actual_letter);
		++actual_letter;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
