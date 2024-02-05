/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:27:38 by bbento-a          #+#    #+#             */
/*   Updated: 2023/07/30 12:09:01 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int a = 2;
	int b = 5;

	printf("%d, %d\n", a, b);

	int *pta = &a;
	int *ptb = &b;

	ft_swap(pta, ptb);
	printf("%d, %d", a, b);
	return (0);
}*/
