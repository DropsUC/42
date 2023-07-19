/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:45:44 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/17 16:38:10 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
   #include <stdio.h> */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*

int	main()
{
	char	src[] = "Hello World";
	char	dest[20];

	ft_strcpy(dest, src);
	printf("copie de \"%s\" dans \"%s\"\n", src, dest);
	return (0);
}

*/	
