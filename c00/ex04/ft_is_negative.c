/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:28:57 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/05 12:34:47 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}

/*

int	main(void)
{
	ft_is_negative(-9);
	write(1, " ", 1);
	ft_is_negative(18);
	write(1, "\n", 1);
	ft_is_negative(5);
}

*/

/*
	le write dans le main pour ecrire a la suite de la fonction appliquer
	write(1, " ",1); = le " " demande a ce qu'on ecrit un espace pour la prochain
	fonction ou autre.

	write(1, "\n", 1); = le "\n" demande  ce qu'on ecrit un retour a la ligne
	(car \n = retour a la ligne)
*/
