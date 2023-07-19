/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:48:11 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/17 12:28:47 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*

int	main(void)
{
	int	x = 10;
	int	y = 3;
	int	div;
	int	mod;

	ft_div_mod(x, y, &div, &mod);
	printf("La division de %d par %d donne %d \n", x, y, div);
	printf("Le modulo de %d par %d donne %d \n", x, y, mod);
	return (0);
}

/ = diviser
% = modulo de (prend le reste de la division)

*/
