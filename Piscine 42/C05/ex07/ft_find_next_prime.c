/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:20:31 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/27 16:21:12 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	else
	{
		while (!ft_prime(nb))
			nb++;
	}
	return (nb);
}
/*
int 	main(void)
{
	printf("%d", ft_find_next_prime(10));
	return (0);
}*/
