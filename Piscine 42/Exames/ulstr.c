/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:33:19 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/30 14:34:03 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **str)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (str[1][i] != '\0')
		{
			if (str[1][i] >= 'A' && str[1][i] <= 'Z')
			{	
				str[1][i] = str[1][i] + 32; //diferenca entre Aa/Zz.
			}
				else if (str[1][i] >= 'a' && str[1][i] <= 'z')
				{
					str[1][i] = str[1][i] - 32; 
				}
				write (1, &str[1][i], 1);
				i++;
		}
	}
      	write (1, "\n", 1);
}	
