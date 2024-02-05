/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:51:14 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/02 16:07:46 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (str[i] == ' ')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char a[] = "this iS A TESt to seE if tHis woRKS";
	char b[] = "42 IS A NUMBER and &*( are some other charracters";
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
	printf("%s\n", ft_strcapitalize(c));
	return (0);
}*/
