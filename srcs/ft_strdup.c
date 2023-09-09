/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:55:15 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/07 19:55:16 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter ++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!buffer)
		return (NULL);
	while (src[i] != '\0')
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
