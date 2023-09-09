/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:02:34 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/07 20:02:35 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	int		pos;

	s1 = (char *)malloc(len * sizeof(char));
	pos = 0;
	if (!s1)
		return (NULL);
	while (len-- > 0)
	{
		s1[pos++] = s[start++];
	}
	return ((char *)s1);
}
