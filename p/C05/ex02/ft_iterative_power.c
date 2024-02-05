/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:45:59 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/14 18:19:10 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	accel;

	accel = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		accel = accel * nb;
		power--;
	}
	return (accel);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(3, 0));
	printf("%d\n", ft_iterative_power(3, -3));
	return (0);
}*/
