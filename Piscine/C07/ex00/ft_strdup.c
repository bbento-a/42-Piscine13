/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:47:51 by bbento-a          #+#    #+#             */
/*   Updated: 2023/08/16 16:29:56 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int	c;

	c = 0;
	while(src[c])
		c++;
	str = (char *)malloc((c + 1) * sizeof(char));
	if (str == NULL)
		return(NULL);
	c = 0;
	while (src[c] != '\0')
	{
		str[c] = src[c];
		c++;
	}
	str[c] = '\0';
	return(str);
}

int	main(void)
{
    char s1[] = "sage is pretty";

    printf("%s", ft_strdup(s1));
}
