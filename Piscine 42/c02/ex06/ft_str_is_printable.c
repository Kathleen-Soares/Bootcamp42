/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:11:46 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/18 22:06:29 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
        str1 = "PiScinE";
        str2 = "	";
        str3 = "";

        printf("str1: %s, retorna: %d\n", str1, ft_str_is_printable(str1));
        printf("str2: %s, retorna: %d\n", str2, ft_str_is_printable(str2));
        printf("str3: %s, retorna: %d\n", str3, ft_str_is_printable(str3));
        return (0);
}*/
