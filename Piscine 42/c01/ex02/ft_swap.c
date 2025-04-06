/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:41:20 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/15 12:32:55 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int *a;
	int *b;
	int n1;
	int n2;
		
	n1 = 10;
	n2 = 20;
	a = &n1;
	b = &n2;
	
	ft_swap(a, b);
	printf("a = %d\n", *a);
	printf("b = %d\n", *b);
	return (0);
}*/
