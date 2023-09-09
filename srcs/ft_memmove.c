/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:33:38 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/06 19:33:39 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*from;
	char		*to;

	from = src;
	to = dest;
	if (from == to || n == 0)
		return (dest);
	if (to > from)
	{
		while (n-- > 0)
			to[n] = from[n];
	}
	if (from > to)
	{
		while (n-- > 0)
			*to++ = *from++;
	}
	return (dest);
}
