/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:21:18 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/14 18:29:24 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	accel;

	accel = 1;
	if (power < 0)
		return (0);
	if (power >= 1)
	{
		accel *= ft_recursive_power(nb, power - 1) * nb;
	}
	return (accel);
}
/*
int    main(void)
{
    printf("%d\n", ft_recursive_power(3, 3));
    printf("%d\n", ft_recursive_power(3, 0));
    printf("%d\n", ft_recursive_power(3, -3));
    return (0);
}*/
