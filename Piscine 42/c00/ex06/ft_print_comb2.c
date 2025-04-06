/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:05:18 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/14 13:46:51 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	while (x++ < 98)
	{
		y = x;
		while (y++ < 99)
		{
			putchar('0' + (x / 10));
			putchar('0' + (x % 10));
			putchar(' ');
			putchar('0' + (y / 10));
			putchar('0' + (y % 10));
			if (x != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
