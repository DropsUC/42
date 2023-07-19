/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:01:17 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/18 16:59:31 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*a = "H3llo world";
	char	*b = "145288";

	printf("Le retour de a est : %d\nLe retour de b est : %d\n", 
	ft_str_is_numeric(a), ft_str_is_numeric(b));
}
*/
