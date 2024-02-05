/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:14:22 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/16 10:50:32 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (nb > n)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
int	main(void)
{
	//int n = 1299709;
	int n = 4;
	printf("%d", ft_is_prime(n));
	return (0);
}*/
