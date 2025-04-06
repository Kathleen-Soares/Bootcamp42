/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:32:18 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/20 17:35:37 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
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

int	main(void)
{
 	char	*src;
 	char	*dest;

 	src = "Hello World";
 	dest = calloc(12, sizeof(char));
 	ft_strcpy(dest, src);
 	printf("src: %s\n", src);
 	printf("dest: %s\n", dest);
 	return (0);
}
