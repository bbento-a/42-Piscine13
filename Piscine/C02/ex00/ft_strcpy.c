/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:03:16 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/01 18:55:01 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Testing";
	char dest[] = "Loading";
	
	printf("Original strings\n");
	printf("%s\n", src);
	printf("%s\n", dest);
	
	ft_strcpy(dest, src);
	
	printf("\n");
	printf("Copied strings\n");
	printf("%s\n", src);
	printf("%s\n", dest);
	return (0);
}*/
