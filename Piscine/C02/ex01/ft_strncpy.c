/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:11:37 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/01 18:57:00 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest); 
}

int	main(void)
{
	char src[] = "Testing with string";
	char dest[30];
	unsigned int i;

	i = 6;
	printf("\n");
	printf("Reference string\n");
	printf("%s\n", src);
	ft_strncpy(dest, src, i);
	printf("\n");
	printf("Copied string with %d numbers\n", i);
	printf("%s\n", dest);
	return (0);
}
