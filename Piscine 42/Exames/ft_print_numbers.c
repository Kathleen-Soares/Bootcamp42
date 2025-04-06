/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:20:10 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/30 10:26:05 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nbr;

	nbr = '0';
	while (nbr <= '9')
	{
		write (1, &nbr, 1);
		nbr++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
	
	
