/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:54:27 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/18 21:39:14 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = calloc (10, sizeof(char));
	str2 = calloc (10, sizeof(char));
	str3 = calloc (10, sizeof(char));
	str1 = "abc";
	str2 = "4bc";
	str3 = "";
	
	printf("str1: %s, retorna: %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2: %s, retorna: %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3: %s, retorna: %d\n", str3, ft_str_is_lowercase(str3));
	return (0);
}*/
