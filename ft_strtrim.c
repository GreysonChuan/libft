/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:12:28 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/07 21:12:29 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char const *set, char c)
{
	int	len;

	len = ft_strlen(set);
	while (len--)
	{
		if (set[len] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*ptr;

	while (*s1 && is_sep(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && is_sep(set, *(s1 + len - 1)))
		len--;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = 0;
	ft_memcpy(ptr, s1, len);
	return (ptr);
}
