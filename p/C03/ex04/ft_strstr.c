/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:42:09 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/07 19:02:52 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a] == to_find[b])
		{
			a++;
			b++;
			if (to_find[b] == '\0')
			{
				while (str[a] != '\0')
				{
					to_find[b] = str[a];
					a++;
				}
			}
		}
		a++;
	}
	to_find[b] = '\0';
	return (to_find);
}
/*
int	main()
{
	char s1[] = "what day is it today";
	char s2[] = "is";
	ft_strstr(s1, s2);
	printf("%s", s2);
	return(0);
}*/
