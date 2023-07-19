/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:52:34 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/18 21:01:09 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	int	str1 = ft_strcmp("bonsoir", "bonjour");
	int	str2 = ft_strcmp("Hello", "Hello");
	int	str3 = ft_strcmp("fail", "f4il");

	printf("%d\n%d\n%d\n", str1, str2, str3);
}
