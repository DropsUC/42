/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucoste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:35:17 by ucoste            #+#    #+#             */
/*   Updated: 2023/07/18 16:49:03 by ucoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
  #include <stdio.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*

int	main(void)
{
	char src[] = "Bonjour";
	char dest[20];

	ft_strncpy(dest, src, 4);
	printf("La chaîne copiée est : %s\n", dest);
	return 0;
}

`n` représente le nombre d'octets à copier de la source (`src`) vers la 
destination (`dest`). La fonction `strncpy` copie au maximum `n` octets de
 `src` vers `dest`.

*/
