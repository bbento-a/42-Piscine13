/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:35:33 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/07 13:19:57 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	s;
	int	d;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "apples";
	char dest[] = "I like "; 

	printf("\n");
	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);
	printf("\n");
	ft_strcat(dest, src);
	printf("Source pasted into dest: %s\n", dest);
}*/
