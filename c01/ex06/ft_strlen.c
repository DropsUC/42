/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:57:30 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/17 13:22:47 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

/*

int	main(void)
{
	char 	*str = "hello world";
	int	taillech = ft_strlen(str);

	printf("Longeur de la chaine |%s| est %d\n", str, taillech);
	return(0);
}


dans le while(str[i] != '\0')
le != '\0' n'est pas ogligatoire pour indiquer la fin

*/
