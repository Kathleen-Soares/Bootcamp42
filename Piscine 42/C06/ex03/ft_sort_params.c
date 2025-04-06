/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:43:41 by ksoares-          #+#    #+#             */
/*   Updated: 2023/03/28 12:49:58 by ksoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **p, char **p1)
{
	char	*temp;

	temp = *p;
	*p = *p1;
	*p1 = temp;
}

int	ft_strcmp(char *s, char *s1)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == s1[j] && s1[j] != '\0')
	{
		i++;
		j++;
	}
	return (s[i] - s1[j]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	m;

	i = 0;
	while (i < argc - 1)
	{
		m = 1;
		while (m < argc - 1)
		{
			if (ft_strcmp(argv[m], argv[m + 1]) > 0)
				ft_swap(&argv[m], &argv[m + 1]);
			else
				m++;
		}
		i++;
	}
	m = 1;
	while (argv[m])
	{
		ft_putstr(argv[m]);
		write(1, "\n", 1);
		i++;
		m++;
	}
}
