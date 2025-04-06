/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:04:45 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/21 18:30:36 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	ft_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		str[i] = ft_lower(str[i]);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) && new_word)
		{
			str[i] = ft_upper(str[i]);
			new_word = 0;
		}
		else if (!is_alpha(str[i]))
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[]= "doNt giVe uP";
	printf("%s\n", str1);
	ft_strcapitalize(str1);

	printf("%s\n", str1);
	return (0);
}*/
