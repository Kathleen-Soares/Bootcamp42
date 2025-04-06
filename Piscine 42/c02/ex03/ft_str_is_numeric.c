/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:33:18 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/18 21:38:52 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *str1;
	char *str2;
	char *str3;

	str1 = calloc(15, sizeof(char));
	str2 = calloc(15, sizeof(char));
	str3 = calloc(15, sizeof(char));
	str1 = "123321";
	str2 = "987$78A";
	str3 = "";
	printf("str1: %s, retorna: %d\n", str1, ft_str_is_numeric(str1));
	printf("str2: %s, retorna: %d\n", str2, ft_str_is_numeric(str2));
	printf("str3: %s, retorna: %d\n", str3, ft_str_is_numeric(str3));
	return (0);
}*/
