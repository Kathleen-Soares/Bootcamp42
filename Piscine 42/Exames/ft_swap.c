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

int	main()
{
	int	a = 2;
	int	b = 3;
	
	//a = 2;
	//b = 3;	
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}
