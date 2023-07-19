/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:57:02 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/17 12:58:17 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*

int	main(void)
{
	int	x = 10;
	int	y = 3;

	ft_ultimate_div_mod(&x, &y);
	printf("10 / 3 = %d, donc x vaut %d\n", x, x);
	printf("10 mod 3 = %d, donc y vaut %d\n", y, y);
	return (0);
}

*/
