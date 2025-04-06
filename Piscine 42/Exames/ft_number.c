/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:11:49 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/28 12:16:28 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(int number)
{
	if (number > 9)
		ft_number(number / 10);
	write (1, &"0123456789"[number % 10], 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 4 == 0 && number % 7 == 0)
			write (1, "fizzbuzz", 8);
		else if (number % 4 == 0)
			write (1, "fizz", 4);
		else if (number % 7 == 0)
			write (1, "buzz", 4);
		else
			ft_number(number);
		write (1, "\n", 1);
		number++;
	}
	return (0);
}

