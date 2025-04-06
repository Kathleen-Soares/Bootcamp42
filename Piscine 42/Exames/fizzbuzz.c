/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:56:32 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/28 21:15:20 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(int nbr)
{
	if (nbr > 9)
		ft_number(nbr / 10);
	write (1, &"0123456789"[nbr % 10], 1);
}

int	main(void)
{
	int	nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
			write(1, "fizzbuzz", 8);
		if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_number(nbr);
		write(1, "\n", 1);
		nbr ++;
	}
	return (0);
}
