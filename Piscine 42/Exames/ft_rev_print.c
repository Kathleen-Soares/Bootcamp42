/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:54:26 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/30 11:30:35 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char *ft_rev_print(char *str)
{
	int	len;

	len = ft_strlen(str) - 1;
	while (len >= 0) //posicao 0
	{
		write(1, &str[len], 1);
		len--;
	}
	return(str);
}

int main()
{
	char str[] = "thunder";
	ft_rev_print(str);
}
