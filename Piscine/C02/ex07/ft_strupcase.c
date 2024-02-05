/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:25:45 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/01 11:41:07 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++; 
	}
	return (str);
}
/*
int	main(void)
{
	char a[] = "TesTinG iS GreAT";
	char b[] = "Aaa";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
	return (0);
}*/
