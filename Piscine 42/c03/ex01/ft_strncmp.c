/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:37:08 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/25 11:14:44 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
	{
			i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "XXX";
	char s2[] = "XYX";

	printf("%d", ft_strncmp(s1, s2, 3));
	return (0);
}*/
