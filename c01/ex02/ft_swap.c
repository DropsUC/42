/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:28:01 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/14 14:56:14 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	ft_swap(&x, &y);
	printf("x=%d y=%d", x, y);
	return (0);
}


permet de permuter deux variables
La variable temp est une variable dite temporaire, dans le sens où elle
n’est utilisée que pour permettre la permutation.

*/
