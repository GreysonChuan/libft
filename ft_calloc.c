/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:26:12 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/07 19:26:13 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 0;
	}
	ptr = malloc(nitems * size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, nitems * size);
	}
	return (ptr);
}
