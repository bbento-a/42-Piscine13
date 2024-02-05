/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:00:13 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/16 18:33:50 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min > max)
		return (NULL);
	array = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return(array);
}

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*ptr;

	i = 0;
	min = 10;
	max = 20;

	ptr = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
}
