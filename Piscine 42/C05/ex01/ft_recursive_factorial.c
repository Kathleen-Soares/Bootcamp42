/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurisive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:27:29 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/26 15:33:38 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		i = i * nb * ft_recursive_factorial(nb - 1);
		nb = nb - 1;
	}
	if (nb < 0)
		return (0);
	return (i);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}*/
