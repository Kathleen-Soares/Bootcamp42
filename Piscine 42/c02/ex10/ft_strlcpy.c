/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:18:17 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/21 18:31:36 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_size;

	src_size = 0;
	while (src[src_size])
		src_size++;
	i = 0;
	if (size != 0)
	{
		while ((i < (size - 1)) && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}
/*
int	main(void)
{
	char src[] = "Keep Swimming, banana!";
	char dest[6];
	unsigned int size = 6;
	// Copia os primeiros 5 caracteres de src para dest
	ft_strlcpy(dest, src, size);
	// Imprime os resultados
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("len: %u\n", ft_strlcpy(dest, src, size));
	return (0);
}*/
