/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:27:23 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/07 13:38:09 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s;
	unsigned int	d;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while ((src[s] != '\0') && (s < nb))
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
	unsigned int n;
	n = 5;

	printf("\n");
	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);
	printf("\n");
	ft_strncat(dest, src, n);
	printf("Source pasted into dest: %s\n", dest);
}*/
