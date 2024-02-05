/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:21:50 by bbento-a          #+#    #+#             */
/*   Updated: 2023/07/31 08:58:17 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		write(1, &str[lenght], 1);
		lenght++;
	}
}
/*
int	main(void)
{
	char *str = "hello";

	ft_putstr(str);
	return (0);
}*/
