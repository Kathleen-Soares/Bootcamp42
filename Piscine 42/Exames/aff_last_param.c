/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:48:31 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/30 13:30:51 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 2)
	{
		while (argv[argc - 1][i] != '\0')
		{
			write (1, &argv[argc - 1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
	
