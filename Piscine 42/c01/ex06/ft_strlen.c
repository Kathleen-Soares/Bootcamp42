/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:22:26 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/16 19:12:39 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
	x++;
	}
	return (x);
}
/*
int	main(void)
{
	char	*str = "keep swimming";
	int	y;

	y = ft_strlen(str);
	printf("size: %d", y);
	return (0);
}*/
