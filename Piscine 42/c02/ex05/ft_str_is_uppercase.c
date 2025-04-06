/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:05:38 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/18 22:00:59 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char    *str1;
        char    *str2;
        char    *str3;

        str1 = calloc (10, sizeof(char));
        str2 = calloc (10, sizeof(char));
        str3 = calloc (10, sizeof(char));
        str1 = "ABC";
        str2 = "4bc";
        str3 = "";

        printf("str1: %s, retorna: %d\n", str1, ft_str_is_uppercase(str1));
        printf("str2: %s, retorna: %d\n", str2, ft_str_is_uppercase(str2));
        printf("str3: %s, retorna: %d\n", str3, ft_str_is_uppercase(str3));
        return (0);
}*/
