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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*s1;
	unsigned int		s_len;

	s_len = ft_strlen(s);
	if (s_len <= start)
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = 0;
		return (s1);
	}
	if (len > s_len - start)
		len = s_len - start;
	s1 = malloc(len + 1);
	if (!s1)
		return (NULL);
	s1[len] = 0;
	while (len--)
		s1[len] = s[start + len];
	return (s1);
}
