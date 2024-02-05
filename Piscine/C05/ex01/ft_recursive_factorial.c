/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:50:37 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/14 14:28:22 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	if (nb > 0)
		res *= ft_recursive_factorial(nb - 1) * nb;
	return (res);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return(0);
}*/
