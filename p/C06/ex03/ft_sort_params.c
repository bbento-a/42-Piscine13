/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:56:58 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/17 13:54:25 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return(*str);
}

void	ft_swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	i = 1;
	c = 1;
	while (c < argc - 1)
	{
		while (i < argc - 1)
		{
			if(ft_strcmp(argc[i], argc[i + 1]) != 0)
				ft_swap(argc[i], argc[i + 1]);
			i++;
		}
		i = 0;
		c++;
	}
	i = 1;
	while (i <= argc)
	{
		ft_putstr(argc[i]);
		i++;
	}
	return (0);
}
