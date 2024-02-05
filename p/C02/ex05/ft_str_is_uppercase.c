/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:55:29 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/02 10:50:13 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char a[] = "TESTING";
	char b[] = "This is a test";
	char c[] = "";

	int j = ft_str_is_uppercase(a);
	printf("%d\n", j);
	printf("%d\n", ft_str_is_uppercase(b));
	printf("%d\n", ft_str_is_uppercase(c));
	return (0);
}*/
