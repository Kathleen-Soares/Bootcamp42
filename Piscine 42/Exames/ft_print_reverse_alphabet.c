/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:58:26 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/13 18:34:00 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	d;

	d = 'z';
	while (d >= 'a')
	{
		write(1, &d, 1);
	d--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
