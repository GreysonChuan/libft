/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:43:09 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/06 20:43:10 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*str1;

	str1 = str;
	while (n-- > 0)
	{
		if (*str1++ == (char)c)
			return ((char *)str1 - 1);
	}
	return (NULL);
}
