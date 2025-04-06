/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:54:30 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/26 13:44:34 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	num;

	i = 0;
	sinal = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal = sinal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	if (sinal == -1)
		return (-num);
		else
		return (num);	
}

int main(void)
{
        char *s1 = "   --+-1234ab567";
        printf("%d\n", ft_atoi(s1));
        char *s2 = "   --333333abcccc63";
        printf("%d\n", ft_atoi(s2));
}
