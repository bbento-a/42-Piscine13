/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:47:12 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/07 19:00:10 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hella";
	unsigned int	n = 1;
	unsigned int	dv;

	dv = ft_strncmp(a, b, n);
	//dv = strncmp(a, b, n);


	printf("Difference value with %d characters: %d", n, dv);
	return (0);
}*/
