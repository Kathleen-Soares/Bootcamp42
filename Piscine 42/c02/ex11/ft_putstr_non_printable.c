/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:44:43 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/21 18:32:06 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
				j = str[i] + 256;
			else
				j = str[i];
			ft_putchar("0123456789abcdef"[j / 16]);
			ft_putchar("0123456789abcdef"[j % 16]);
		}
		i++;
	}
}
/*
int main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/
