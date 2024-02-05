/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:15:36 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/16 10:23:19 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	orig;

	orig = 1;
	if (nb <= 0)
		return (0);
	while (nb / orig > orig)
	{
		orig++;
	}
	if (orig * orig == nb)
		return (orig);
	return (0);
}
/*
int	main(void)
{
	int	sqrt;

	sqrt = 2147395600;
	printf("%d", ft_sqrt(sqrt));
	return (0);
}*/
