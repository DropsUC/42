/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:04:06 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/05 12:31:38 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ralphabet;

	ralphabet = 'z';
	while (ralphabet >= 'a')
	{
		write (1, &ralphabet, 1);
		ralphabet--;
	}
}

/*

int	main(void)
{
	ft_print_reverse_alphabet();
}

*/
