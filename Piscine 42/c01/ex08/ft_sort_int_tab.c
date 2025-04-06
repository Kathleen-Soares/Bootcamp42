/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:53:38 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/16 19:19:25 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	while (i < size - 1)
	{
		b = i + 1;
		while (b <= size - 1)
		{
			if (tab[i] > tab[b])
			{	
			a = tab[i];
			tab[i] = tab[b];
			tab[b] = a;
			}
			b++;
		}
		i++;
	}
}
/*
int	main(void)
{

    int arr[] = {10, 2, 5, 8, 1, 6};
    int size = 6;

    printf("Antes de classificar:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    ft_sort_int_tab(arr, size);

    printf("\nDepois de classificar:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/
