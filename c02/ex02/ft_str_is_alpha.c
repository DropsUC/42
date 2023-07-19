/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:24:05 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/18 16:54:19 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a'
				|| str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*a = "H3llo world";
	char	*b = "mo";

	printf("Le retour de a est : %d\nLe retour de b est : %d\n", 
		ft_str_is_alpha(a), ft_str_is_alpha(b));
}


|| = ou    && = et

*/
