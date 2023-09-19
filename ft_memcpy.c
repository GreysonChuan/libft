/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:41:53 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/06 18:41:54 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*src1;
	int			pos;

	dest1 = dest;
	src1 = src;
	pos = 0;
	if (dest1 == src1)
		return (dest1);
	while (n > 0)
	{
		dest1[pos] = src1[pos];
		pos++;
		n--;
	}
	return (dest1);
}
